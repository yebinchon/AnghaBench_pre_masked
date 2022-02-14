
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * joininfo; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int List ;


 int * VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static void
FUNC_1(RelOptInfo *VAR_1,
        RelOptInfo *VAR_2,
        RelOptInfo *VAR_3)
{
 List *VAR_4;






 VAR_4 = FUNC_0(VAR_1, VAR_2->joininfo, VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_3->joininfo, VAR_4);

 VAR_1->joininfo = VAR_4;
}
