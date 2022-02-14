
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int indexed_tlist ;
struct TYPE_3__ {int targetlist; } ;
typedef int PlannerInfo ;
typedef TYPE_1__ Plan ;
typedef int List ;
typedef int Index ;


 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *,int *,int *,int *,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static List *
FUNC_3(PlannerInfo *VAR_0,
        List *VAR_1,
        Plan *VAR_2,
        Index VAR_3,
        int VAR_4)
{
 indexed_tlist *VAR_5;
 VAR_5 = FUNC_0(VAR_2->targetlist, VAR_3);

 VAR_1 = FUNC_1(VAR_0,
        VAR_1,
        VAR_5,
        ((void*)0),
        VAR_3,
        VAR_4);

 FUNC_2(VAR_5);

 return VAR_1;
}
