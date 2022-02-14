
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * values; } ;
typedef TYPE_1__ oidvector ;
struct TYPE_6__ {int supportProcs; int opcintype; int opcfamily; } ;
typedef int StrategyNumber ;
typedef int RegProcedure ;
typedef TYPE_2__ OpClassCacheEnt ;
typedef int Oid ;
typedef int AttrNumber ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(oidvector *VAR_1,
        RegProcedure *VAR_2,
        Oid *VAR_3,
        Oid *VAR_4,
        StrategyNumber VAR_5,
        AttrNumber VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  OpClassCacheEnt *VAR_8;

  if (!FUNC_1(VAR_1->values[VAR_7]))
   FUNC_2(VAR_0, "bogus pg_index tuple");


  VAR_8 = FUNC_0(VAR_1->values[VAR_7],
          VAR_5);


  VAR_3[VAR_7] = VAR_8->opcfamily;
  VAR_4[VAR_7] = VAR_8->opcintype;
  if (VAR_5 > 0)
   FUNC_3(&VAR_2[VAR_7 * VAR_5],
       VAR_8->supportProcs,
       VAR_5 * sizeof(RegProcedure));
 }
}
