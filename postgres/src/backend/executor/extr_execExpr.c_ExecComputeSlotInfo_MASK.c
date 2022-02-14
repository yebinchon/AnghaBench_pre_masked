
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int const TupleTableSlotOps ;
typedef int * TupleDesc ;
struct TYPE_14__ {int fixed; int const* kind; int * known_desc; } ;
struct TYPE_15__ {TYPE_1__ fetch; } ;
struct TYPE_18__ {scalar_t__ opcode; TYPE_2__ d; } ;
struct TYPE_17__ {TYPE_3__* parent; } ;
struct TYPE_16__ {int scanopsfixed; scalar_t__ scanopsset; int const* scanops; int * scandesc; int const* outerops; scalar_t__ outeropsset; int outeropsfixed; int const* innerops; scalar_t__ inneropsset; int inneropsfixed; } ;
typedef TYPE_3__ PlanState ;
typedef TYPE_4__ ExprState ;
typedef TYPE_5__ ExprEvalStep ;
typedef scalar_t__ ExprEvalOp ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int const* FUNC_1 (TYPE_3__*,int*) ;
 int * FUNC_2 (TYPE_3__*) ;
 int const VAR_3 ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_5(ExprState *VAR_4, ExprEvalStep *VAR_5)
{
 PlanState *VAR_6 = VAR_4->parent;
 TupleDesc VAR_7 = ((void*)0);
 const TupleTableSlotOps *VAR_8 = ((void*)0);
 bool VAR_9 = 0;
 ExprEvalOp VAR_10 = VAR_5->opcode;

 FUNC_0(VAR_10 == VAR_0 ||
     VAR_10 == VAR_1 ||
     VAR_10 == VAR_2);

 if (VAR_5->d.fetch.known_desc != ((void*)0))
 {
  VAR_7 = VAR_5->d.fetch.known_desc;
  VAR_8 = VAR_5->d.fetch.kind;
  VAR_9 = VAR_5->d.fetch.kind != ((void*)0);
 }
 else if (!VAR_6)
 {
  VAR_9 = 0;
 }
 else if (VAR_10 == VAR_0)
 {
  PlanState *VAR_11 = FUNC_3(VAR_6);

  if (VAR_6->inneropsset && !VAR_6->inneropsfixed)
  {
   VAR_9 = 0;
  }
  else if (VAR_6->inneropsset && VAR_6->innerops)
  {
   VAR_9 = 1;
   VAR_8 = VAR_6->innerops;
   VAR_7 = FUNC_2(VAR_11);
  }
  else if (VAR_11)
  {
   VAR_8 = FUNC_1(VAR_11, &VAR_9);
   VAR_7 = FUNC_2(VAR_11);
  }
 }
 else if (VAR_10 == VAR_1)
 {
  PlanState *VAR_12 = FUNC_4(VAR_6);

  if (VAR_6->outeropsset && !VAR_6->outeropsfixed)
  {
   VAR_9 = 0;
  }
  else if (VAR_6->outeropsset && VAR_6->outerops)
  {
   VAR_9 = 1;
   VAR_8 = VAR_6->outerops;
   VAR_7 = FUNC_2(VAR_12);
  }
  else if (VAR_12)
  {
   VAR_8 = FUNC_1(VAR_12, &VAR_9);
   VAR_7 = FUNC_2(VAR_12);
  }
 }
 else if (VAR_10 == VAR_2)
 {
  VAR_7 = VAR_6->scandesc;

  if (VAR_6 && VAR_6->scanops)
   VAR_8 = VAR_6->scanops;

  if (VAR_6->scanopsset)
   VAR_9 = VAR_6->scanopsfixed;
 }

 if (VAR_9 && VAR_7 != ((void*)0) && VAR_8 != ((void*)0))
 {
  VAR_5->d.fetch.fixed = 1;
  VAR_5->d.fetch.kind = VAR_8;
  VAR_5->d.fetch.known_desc = VAR_7;
 }
 else
 {
  VAR_5->d.fetch.fixed = 0;
  VAR_5->d.fetch.kind = ((void*)0);
  VAR_5->d.fetch.known_desc = ((void*)0);
 }


 if (VAR_5->d.fetch.fixed && VAR_5->d.fetch.kind == &VAR_3)
  return 0;

 return 1;
}
