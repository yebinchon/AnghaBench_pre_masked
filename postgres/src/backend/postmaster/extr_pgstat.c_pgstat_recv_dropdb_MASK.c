
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int m_databaseid; } ;
struct TYPE_5__ {int * functions; int * tables; } ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef TYPE_2__ PgStat_MsgDropdb ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int,int ,char*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,void*,int ,int *) ;
 int VAR_4 ;
 TYPE_1__* FUNC_6 (int ,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(PgStat_MsgDropdb *VAR_5, int VAR_6)
{
 Oid VAR_7 = VAR_5->m_databaseid;
 PgStat_StatDBEntry *VAR_8;




 VAR_8 = FUNC_6(VAR_7, 0);




 if (VAR_8)
 {
  char VAR_9[VAR_3];

  FUNC_3(0, 0, VAR_7, VAR_9, VAR_3);

  FUNC_0(VAR_0, "removing stats file \"%s\"", VAR_9);
  FUNC_7(VAR_9);

  if (VAR_8->tables != ((void*)0))
   FUNC_4(VAR_8->tables);
  if (VAR_8->functions != ((void*)0))
   FUNC_4(VAR_8->functions);

  if (FUNC_5(VAR_4,
      (void *) &VAR_7,
      VAR_2, ((void*)0)) == ((void*)0))
   FUNC_1(VAR_1,
     (FUNC_2("database hash table corrupted during cleanup --- abort")));
 }
}
