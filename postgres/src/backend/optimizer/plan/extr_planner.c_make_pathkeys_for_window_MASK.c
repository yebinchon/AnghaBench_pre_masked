
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int orderClause; int partitionClause; } ;
typedef TYPE_1__ WindowClause ;
typedef int PlannerInfo ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *,int *) ;

__attribute__((used)) static List *
FUNC_8(PlannerInfo *VAR_2, WindowClause *VAR_3,
       List *VAR_4)
{
 List *VAR_5;
 List *VAR_6;


 if (!FUNC_4(VAR_3->partitionClause))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("could not implement window PARTITION BY"),
     FUNC_2("Window partitioning columns must be of sortable datatypes.")));
 if (!FUNC_4(VAR_3->orderClause))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("could not implement window ORDER BY"),
     FUNC_2("Window ordering columns must be of sortable datatypes.")));


 VAR_6 = FUNC_5(VAR_3->partitionClause, VAR_3->orderClause);
 VAR_5 = FUNC_7(VAR_2,
             VAR_6,
             VAR_4);
 FUNC_6(VAR_6);
 return VAR_5;
}
