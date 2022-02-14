
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int status; TYPE_7__* qd; scalar_t__ lazyEval; int stmt; scalar_t__ setsResult; } ;
typedef TYPE_2__ execution_state ;
struct TYPE_13__ {scalar_t__ operation; int * queryEnv; } ;
struct TYPE_9__ {scalar_t__ mydest; } ;
struct TYPE_12__ {int filter; int cxt; int tstore; TYPE_1__ pub; } ;
struct TYPE_11__ {int paramLI; int src; int junkFilter; int tstore; } ;
typedef TYPE_3__* SQLFunctionCachePtr ;
typedef int DestReceiver ;
typedef TYPE_4__ DR_sqlfunction ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (scalar_t__) ;
 TYPE_7__* FUNC_3 (int ,int ,int ,int ,int *,int ,int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_7__*,int) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void
FUNC_6(execution_state *VAR_7, SQLFunctionCachePtr VAR_8)
{
 DestReceiver *VAR_9;

 FUNC_1(VAR_7->qd == ((void*)0));


 FUNC_1(FUNC_0());





 if (VAR_7->setsResult)
 {
  DR_sqlfunction *VAR_10;

  VAR_9 = FUNC_2(VAR_2);

  VAR_10 = (DR_sqlfunction *) VAR_9;
  FUNC_1(VAR_10->pub.mydest == VAR_2);
  VAR_10->tstore = VAR_8->tstore;
  VAR_10->cxt = VAR_1;
  VAR_10->filter = VAR_8->junkFilter;
 }
 else
  VAR_9 = VAR_6;

 VAR_7->qd = FUNC_3(VAR_7->stmt,
        VAR_8->src,
        FUNC_5(),
        VAR_5,
        VAR_9,
        VAR_8->paramLI,
        VAR_7->qd ? VAR_7->qd->queryEnv : ((void*)0),
        0);


 if (VAR_7->qd->operation != VAR_0)
 {







  int VAR_11;

  if (VAR_7->lazyEval)
   VAR_11 = VAR_3;
  else
   VAR_11 = 0;
  FUNC_4(VAR_7->qd, VAR_11);
 }

 VAR_7->status = VAR_4;
}
