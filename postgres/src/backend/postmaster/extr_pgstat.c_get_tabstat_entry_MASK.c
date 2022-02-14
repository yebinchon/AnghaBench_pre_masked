
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_10__ {scalar_t__ tsa_used; TYPE_3__* tsa_entries; struct TYPE_10__* tsa_next; } ;
typedef TYPE_1__ TabStatusArray ;
struct TYPE_11__ {TYPE_3__* tsa_entry; } ;
typedef TYPE_2__ TabStatHashEntry ;
struct TYPE_13__ {int keysize; int entrysize; } ;
struct TYPE_12__ {int t_shared; int t_id; } ;
typedef TYPE_3__ PgStat_TableStatus ;
typedef int Oid ;
typedef TYPE_4__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (char*,scalar_t__,TYPE_4__*,int) ;
 TYPE_2__* FUNC_2 (int *,int *,int ,int*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int * VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static PgStat_TableStatus *
FUNC_4(Oid VAR_7, bool VAR_8)
{
 TabStatHashEntry *VAR_9;
 PgStat_TableStatus *VAR_10;
 TabStatusArray *VAR_11;
 bool VAR_12;




 if (VAR_5 == ((void*)0))
 {
  HASHCTL VAR_13;

  FUNC_3(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.keysize = sizeof(Oid);
  VAR_13.entrysize = sizeof(TabStatHashEntry);

  VAR_5 = FUNC_1("pgstat TabStatusArray lookup hash table",
         VAR_3,
         &VAR_13,
         VAR_1 | VAR_0);
 }




 VAR_9 = FUNC_2(VAR_5, &VAR_7, VAR_2, &VAR_12);
 if (!VAR_12)
 {

  VAR_9->tsa_entry = ((void*)0);
 }




 if (VAR_9->tsa_entry)
  return VAR_9->tsa_entry;






 if (VAR_6 == ((void*)0))
 {

  VAR_6 = (TabStatusArray *)
   FUNC_0(VAR_4,
           sizeof(TabStatusArray));
 }

 VAR_11 = VAR_6;
 while (VAR_11->tsa_used >= VAR_3)
 {
  if (VAR_11->tsa_next == ((void*)0))
   VAR_11->tsa_next = (TabStatusArray *)
    FUNC_0(VAR_4,
            sizeof(TabStatusArray));
  VAR_11 = VAR_11->tsa_next;
 }





 VAR_10 = &VAR_11->tsa_entries[VAR_11->tsa_used++];
 VAR_10->t_id = VAR_7;
 VAR_10->t_shared = VAR_8;




 VAR_9->tsa_entry = VAR_10;

 return VAR_10;
}
