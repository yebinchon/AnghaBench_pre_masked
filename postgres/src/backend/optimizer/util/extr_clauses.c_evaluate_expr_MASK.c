
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
typedef int int16 ;
struct TYPE_5__ {int es_query_cxt; } ;
typedef int Oid ;
typedef int Node ;
typedef int MemoryContext ;
typedef int ExprState ;
typedef int Expr ;
typedef TYPE_1__ EState ;
typedef int Datum ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *,int ,int*) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int*,int*) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int,int ,int,int) ;

Expr *
FUNC_12(Expr *VAR_0, Oid VAR_1, int32 VAR_2,
     Oid VAR_3)
{
 EState *VAR_4;
 ExprState *VAR_5;
 MemoryContext VAR_6;
 Datum VAR_7;
 bool VAR_8;
 int16 VAR_9;
 bool VAR_10;




 VAR_4 = FUNC_0();


 VAR_6 = FUNC_5(VAR_4->es_query_cxt);


 FUNC_9((Node *) VAR_0);





 VAR_5 = FUNC_2(VAR_0, ((void*)0));
 VAR_7 = FUNC_1(VAR_5,
            FUNC_4(VAR_4),
            &VAR_8);


 FUNC_10(VAR_1, &VAR_9, &VAR_10);


 FUNC_5(VAR_6);
 if (!VAR_8)
 {
  if (VAR_9 == -1)
   VAR_7 = FUNC_7(FUNC_6(VAR_7));
  else
   VAR_7 = FUNC_8(VAR_7, VAR_10, VAR_9);
 }


 FUNC_3(VAR_4);




 return (Expr *) FUNC_11(VAR_1, VAR_2, VAR_3,
         VAR_9,
         VAR_7, VAR_8,
         VAR_10);
}
