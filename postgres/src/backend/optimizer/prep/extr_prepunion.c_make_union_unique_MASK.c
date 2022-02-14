
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {double rows; int pathkeys; } ;
typedef int SetOperationStmt ;
typedef int RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_1__ Path ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,TYPE_1__*,double,double,char*) ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_1__*,int ,int ,int ,int *,int ,int *,double) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_1__*,int ,double) ;
 scalar_t__ FUNC_4 (int *,int *,TYPE_1__*,int ,double) ;
 int * FUNC_5 (int *,int ,int *) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int *) ;

__attribute__((used)) static Path *
FUNC_9(SetOperationStmt *VAR_4, Path *VAR_5, List *VAR_6,
      PlannerInfo *VAR_7)
{
 RelOptInfo *VAR_8 = FUNC_5(VAR_7, VAR_3, ((void*)0));
 List *VAR_9;
 double VAR_10;


 VAR_9 = FUNC_6(VAR_4, VAR_6);
 VAR_10 = VAR_5->rows;


 if (FUNC_0(VAR_7, VAR_9, VAR_5,
       VAR_10, VAR_10,
       "UNION"))
 {

  VAR_5 = (Path *) FUNC_1(VAR_7,
          VAR_8,
          VAR_5,
          FUNC_2(VAR_7, VAR_6),
          VAR_1,
          VAR_0,
          VAR_9,
          VAR_2,
          ((void*)0),
          VAR_10);
 }
 else
 {

  if (VAR_9)
   VAR_5 = (Path *)
    FUNC_3(VAR_7,
         VAR_8,
         VAR_5,
         FUNC_8(VAR_7,
                  VAR_9,
                  VAR_6),
         -1.0);
  VAR_5 = (Path *) FUNC_4(VAR_7,
             VAR_8,
             VAR_5,
             FUNC_7(VAR_5->pathkeys),
             VAR_10);
 }

 return VAR_5;
}
