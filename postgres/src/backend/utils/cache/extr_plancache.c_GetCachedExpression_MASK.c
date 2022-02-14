
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_valid; int node; int context; void* invalItems; void* relationOids; void* expr; int magic; } ;
typedef int Node ;
typedef int MemoryContext ;
typedef int List ;
typedef int Expr ;
typedef TYPE_1__ CachedExpression ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int **,int **) ;
 scalar_t__ FUNC_6 (int) ;

CachedExpression *
FUNC_7(Node *VAR_5)
{
 CachedExpression *VAR_6;
 List *VAR_7;
 List *VAR_8;
 MemoryContext VAR_9;
 MemoryContext VAR_10;






 VAR_5 = (Node *) FUNC_5((Expr *) VAR_5,
             &VAR_7,
             &VAR_8);






 VAR_9 = FUNC_0(VAR_3,
            "CachedExpression",
            VAR_0);

 VAR_10 = FUNC_2(VAR_9);

 VAR_6 = (CachedExpression *) FUNC_6(sizeof(CachedExpression));
 VAR_6->magic = VAR_1;
 VAR_6->expr = FUNC_3(VAR_5);
 VAR_6->is_valid = 1;
 VAR_6->relationOids = FUNC_3(VAR_7);
 VAR_6->invalItems = FUNC_3(VAR_8);
 VAR_6->context = VAR_9;

 FUNC_2(VAR_10);





 FUNC_1(VAR_9, VAR_2);




 FUNC_4(&VAR_4, &VAR_6->node);

 return VAR_6;
}
