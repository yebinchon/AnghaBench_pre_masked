
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fdw_private; } ;
struct TYPE_5__ {int relid; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Oid ;
typedef int List ;
typedef int Index ;
typedef int ForeignScan ;
typedef TYPE_2__ ForeignPath ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int *,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static ForeignScan *
FUNC_2(PlannerInfo *VAR_1,
       RelOptInfo *VAR_2,
       Oid VAR_3,
       ForeignPath *VAR_4,
       List *VAR_5,
       List *VAR_6,
       Plan *VAR_7)
{
 Index VAR_8 = VAR_2->relid;
 VAR_6 = FUNC_0(VAR_6, 0);


 return FUNC_1(VAR_5,
       VAR_6,
       VAR_8,
       VAR_0,
       VAR_4->fdw_private,
       VAR_0,
       VAR_0,
       VAR_7);
}
