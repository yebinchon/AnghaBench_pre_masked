
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int Tuplestorestate ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_13__ {int fn_mcxt; } ;
struct TYPE_15__ {int shutdown_reg; TYPE_2__* funcResultDesc; int * funcResultSlot; TYPE_1__ func; int * funcResultStore; } ;
struct TYPE_14__ {int tdrefcount; } ;
typedef TYPE_3__ SetExprState ;
typedef int MemoryContext ;
typedef int ExprContext ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_10(SetExprState *VAR_4,
       ExprContext *VAR_5,
       Tuplestorestate *VAR_6,
       TupleDesc VAR_7)
{
 VAR_4->funcResultStore = VAR_6;

 if (VAR_4->funcResultSlot == ((void*)0))
 {

  TupleDesc VAR_8;
  MemoryContext VAR_9;

  VAR_9 = FUNC_3(VAR_4->func.fn_mcxt);





  if (VAR_4->funcResultDesc)
   VAR_8 = VAR_4->funcResultDesc;
  else if (VAR_7)
  {

   VAR_8 = FUNC_0(VAR_7);
  }
  else
  {
   FUNC_6(VAR_1,
     (FUNC_7(VAR_0),
      FUNC_8("function returning setof record called in "
       "context that cannot accept type record")));
   VAR_8 = ((void*)0);
  }

  VAR_4->funcResultSlot = FUNC_2(VAR_8,
               &VAR_3);
  FUNC_3(VAR_9);
 }





 if (VAR_7)
 {
  if (VAR_4->funcResultDesc)
   FUNC_9(VAR_4->funcResultDesc, VAR_7);






  if (VAR_7->tdrefcount == -1)
   FUNC_1(VAR_7);
 }


 if (!VAR_4->shutdown_reg)
 {
  FUNC_5(VAR_5,
         VAR_2,
         FUNC_4(VAR_4));
  VAR_4->shutdown_reg = 1;
 }
}
