
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * rd_indpred; int rd_indexcxt; int * rd_indextuple; } ;
typedef TYPE_1__* Relation ;
typedef int Node ;
typedef int MemoryContext ;
typedef int List ;
typedef int Expr ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int ,int ,int*) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*) ;

List *
FUNC_13(Relation VAR_2)
{
 List *VAR_3;
 Datum VAR_4;
 bool VAR_5;
 char *VAR_6;
 MemoryContext VAR_7;


 if (VAR_2->rd_indpred)
  return FUNC_5(VAR_2->rd_indpred);


 if (VAR_2->rd_indextuple == ((void*)0) ||
  FUNC_8(VAR_2->rd_indextuple, VAR_0, ((void*)0)))
  return VAR_1;






 VAR_4 = FUNC_9(VAR_2->rd_indextuple,
        VAR_0,
        FUNC_1(),
        &VAR_5);
 FUNC_0(!VAR_5);
 VAR_6 = FUNC_3(VAR_4);
 VAR_3 = (List *) FUNC_12(VAR_6);
 FUNC_11(VAR_6);
 VAR_3 = (List *) FUNC_6(((void*)0), (Node *) VAR_3);

 VAR_3 = (List *) FUNC_4((Expr *) VAR_3, 0);


 VAR_3 = FUNC_10((Expr *) VAR_3);


 FUNC_7((Node *) VAR_3);


 VAR_7 = FUNC_2(VAR_2->rd_indexcxt);
 VAR_2->rd_indpred = FUNC_5(VAR_3);
 FUNC_2(VAR_7);

 return VAR_3;
}
