
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * tts_isnull; int * tts_values; } ;
typedef TYPE_2__ TupleTableSlot ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_14__ {scalar_t__ attgenerated; scalar_t__ attisdropped; } ;
struct TYPE_10__ {int natts; } ;
struct TYPE_13__ {scalar_t__* attrmap; int localrel; TYPE_1__ remoterel; } ;
struct TYPE_12__ {int natts; } ;
typedef TYPE_4__ LogicalRepRelMapEntry ;
typedef int ExprState ;
typedef int ExprContext ;
typedef int Expr ;
typedef int EState ;


 int FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int ) ;
 TYPE_7__* FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(LogicalRepRelMapEntry *VAR_0, EState *VAR_1,
       TupleTableSlot *VAR_2)
{
 TupleDesc VAR_3 = FUNC_3(VAR_0->localrel);
 int VAR_4 = VAR_3->natts;
 int VAR_5;
 int VAR_6,
    VAR_7 = 0;
 int *VAR_8;
 ExprState **VAR_9;
 ExprContext *VAR_10;

 VAR_10 = FUNC_2(VAR_1);


 if (VAR_4 == VAR_0->remoterel.natts)
  return;

 VAR_8 = (int *) FUNC_7(VAR_4 * sizeof(int));
 VAR_9 = (ExprState **) FUNC_7(VAR_4 * sizeof(ExprState *));

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  Expr *VAR_11;

  if (FUNC_4(VAR_3, VAR_6)->attisdropped || FUNC_4(VAR_3, VAR_6)->attgenerated)
   continue;

  if (VAR_0->attrmap[VAR_6] >= 0)
   continue;

  VAR_11 = (Expr *) FUNC_5(VAR_0->localrel, VAR_6 + 1);

  if (VAR_11 != ((void*)0))
  {

   VAR_11 = FUNC_6(VAR_11);


   VAR_9[VAR_7] = FUNC_1(VAR_11, ((void*)0));
   VAR_8[VAR_7] = VAR_6;
   VAR_7++;
  }

 }

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
  VAR_2->tts_values[VAR_8[VAR_5]] =
   FUNC_0(VAR_9[VAR_5], VAR_10, &VAR_2->tts_isnull[VAR_8[VAR_5]]);
}
