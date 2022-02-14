
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ps_ExprContext; } ;
struct TYPE_7__ {int noCount; int lstate; int * subSlot; scalar_t__ position; void* count; scalar_t__ limitCount; void* offset; scalar_t__ limitOffset; TYPE_1__ ps; } ;
typedef TYPE_2__ LimitState ;
typedef int ExprContext ;
typedef int Datum ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int *,int*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(LimitState *VAR_4)
{
 ExprContext *VAR_5 = VAR_4->ps.ps_ExprContext;
 Datum VAR_6;
 bool VAR_7;

 if (VAR_4->limitOffset)
 {
  VAR_6 = FUNC_1(VAR_4->limitOffset,
          VAR_5,
          &VAR_7);

  if (VAR_7)
   VAR_4->offset = 0;
  else
  {
   VAR_4->offset = FUNC_0(VAR_6);
   if (VAR_4->offset < 0)
    FUNC_4(VAR_2,
      (FUNC_5(VAR_1),
       FUNC_6("OFFSET must not be negative")));
  }
 }
 else
 {

  VAR_4->offset = 0;
 }

 if (VAR_4->limitCount)
 {
  VAR_6 = FUNC_1(VAR_4->limitCount,
          VAR_5,
          &VAR_7);

  if (VAR_7)
  {
   VAR_4->count = 0;
   VAR_4->noCount = 1;
  }
  else
  {
   VAR_4->count = FUNC_0(VAR_6);
   if (VAR_4->count < 0)
    FUNC_4(VAR_2,
      (FUNC_5(VAR_0),
       FUNC_6("LIMIT must not be negative")));
   VAR_4->noCount = 0;
  }
 }
 else
 {

  VAR_4->count = 0;
  VAR_4->noCount = 1;
 }


 VAR_4->position = 0;
 VAR_4->subSlot = ((void*)0);


 VAR_4->lstate = VAR_3;







 FUNC_2(FUNC_3(VAR_4), FUNC_7(VAR_4));
}
