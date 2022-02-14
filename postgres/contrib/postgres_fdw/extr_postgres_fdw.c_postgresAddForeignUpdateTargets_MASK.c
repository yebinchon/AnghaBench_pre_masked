
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Var ;
typedef int TargetEntry ;
struct TYPE_3__ {int targetList; int resultRelation; } ;
typedef int Relation ;
typedef int RangeTblEntry ;
typedef TYPE_1__ Query ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,scalar_t__,int ,int) ;
 int * FUNC_3 (int ,int ,int ,int,int ,int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(Query *VAR_3,
        RangeTblEntry *VAR_4,
        Relation VAR_5)
{
 Var *VAR_6;
 const char *VAR_7;
 TargetEntry *VAR_8;






 VAR_6 = FUNC_3(VAR_3->resultRelation,
      VAR_1,
      VAR_2,
      -1,
      VAR_0,
      0);


 VAR_7 = "ctid";

 VAR_8 = FUNC_2((Expr *) VAR_6,
        FUNC_1(VAR_3->targetList) + 1,
        FUNC_4(VAR_7),
        1);


 VAR_3->targetList = FUNC_0(VAR_3->targetList, VAR_8);
}
