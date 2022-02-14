
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pages; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(PlannerInfo *VAR_1, RelOptInfo *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_2->pages, -1,
              VAR_0);


 if (VAR_3 <= 0)
  return;


 FUNC_0(VAR_2, FUNC_2(VAR_1, VAR_2, ((void*)0), VAR_3));
}
