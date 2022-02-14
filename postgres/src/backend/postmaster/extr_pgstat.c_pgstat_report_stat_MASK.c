
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TimestampTz ;
struct TYPE_8__ {scalar_t__ tsa_used; TYPE_2__* tsa_entries; struct TYPE_8__* tsa_next; } ;
typedef TYPE_1__ TabStatusArray ;
struct TYPE_11__ {size_t m_nentries; TYPE_3__* m_entry; int m_databaseid; } ;
struct TYPE_10__ {int t_counts; int t_id; } ;
struct TYPE_9__ {int t_counts; int t_id; scalar_t__ t_shared; int * trans; } ;
typedef TYPE_2__ PgStat_TableStatus ;
typedef TYPE_3__ PgStat_TableEntry ;
typedef int PgStat_TableCounts ;
typedef TYPE_4__ PgStat_MsgTabstat ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int *,int) ;
 int * VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_4__*) ;

void
FUNC_9(bool VAR_9)
{

 static const PgStat_TableCounts VAR_10;
 static TimestampTz VAR_11 = 0;

 TimestampTz VAR_12;
 PgStat_MsgTabstat VAR_13;
 PgStat_MsgTabstat VAR_14;
 TabStatusArray *VAR_15;
 int VAR_16;


 if ((VAR_6 == ((void*)0) || VAR_6->tsa_used == 0) &&
  VAR_7 == 0 && VAR_8 == 0 &&
  !VAR_4)
  return;





 VAR_12 = FUNC_1();
 if (!VAR_9 &&
  !FUNC_3(VAR_11, VAR_12, VAR_3))
  return;
 VAR_11 = VAR_12;
 if (VAR_5)
  FUNC_4(VAR_5);
 VAR_5 = ((void*)0);







 VAR_13.m_databaseid = VAR_1;
 VAR_14.m_databaseid = VAR_0;
 VAR_13.m_nentries = 0;
 VAR_14.m_nentries = 0;

 for (VAR_15 = VAR_6; VAR_15 != ((void*)0); VAR_15 = VAR_15->tsa_next)
 {
  for (VAR_16 = 0; VAR_16 < VAR_15->tsa_used; VAR_16++)
  {
   PgStat_TableStatus *VAR_17 = &VAR_15->tsa_entries[VAR_16];
   PgStat_MsgTabstat *VAR_18;
   PgStat_TableEntry *VAR_19;


   FUNC_0(VAR_17->trans == ((void*)0));





   if (FUNC_5(&VAR_17->t_counts, &VAR_10,
        sizeof(PgStat_TableCounts)) == 0)
    continue;




   VAR_18 = VAR_17->t_shared ? &VAR_14 : &VAR_13;
   VAR_19 = &VAR_18->m_entry[VAR_18->m_nentries];
   VAR_19->t_id = VAR_17->t_id;
   FUNC_6(&VAR_19->t_counts, &VAR_17->t_counts,
       sizeof(PgStat_TableCounts));
   if (++VAR_18->m_nentries >= VAR_2)
   {
    FUNC_8(VAR_18);
    VAR_18->m_nentries = 0;
   }
  }

  FUNC_2(VAR_15->tsa_entries, 0,
      VAR_15->tsa_used * sizeof(PgStat_TableStatus));
  VAR_15->tsa_used = 0;
 }





 if (VAR_13.m_nentries > 0 ||
  VAR_7 > 0 || VAR_8 > 0)
  FUNC_8(&VAR_13);
 if (VAR_14.m_nentries > 0)
  FUNC_8(&VAR_14);


 FUNC_7();
}
