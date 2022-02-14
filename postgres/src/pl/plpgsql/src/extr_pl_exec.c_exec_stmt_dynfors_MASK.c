
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int params; int query; } ;
typedef int Portal ;
typedef int PLpgSQL_stmt_forq ;
typedef TYPE_1__ PLpgSQL_stmt_dynfors ;
typedef int PLpgSQL_execstate ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int *,int ) ;
 int FUNC_2 (int *,int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(PLpgSQL_execstate *VAR_0, PLpgSQL_stmt_dynfors *VAR_1)
{
 Portal VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1->query, VAR_1->params,
            ((void*)0), 0);




 VAR_3 = FUNC_2(VAR_0, (PLpgSQL_stmt_forq *) VAR_1, VAR_2, 1);




 FUNC_0(VAR_2);

 return VAR_3;
}
