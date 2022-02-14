
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * tail; int head; } ;
struct TYPE_6__ {int tail; int head; } ;
struct TYPE_7__ {int * tmpRes; int * lastRes; TYPE_1__ waste; int * curSub; TYPE_2__ towork; scalar_t__ posDict; int curDictId; int * cfg; } ;
typedef int TSConfigCacheEntry ;
typedef TYPE_3__ LexizeData ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(LexizeData *VAR_1, TSConfigCacheEntry *VAR_2)
{
 VAR_1->cfg = VAR_2;
 VAR_1->curDictId = VAR_0;
 VAR_1->posDict = 0;
 VAR_1->towork.head = VAR_1->towork.tail = *(VAR_1->curSub = ((void*)0));
 VAR_1->waste.head = *(VAR_1->waste.tail = ((void*)0));
 VAR_1->lastRes = ((void*)0);
 VAR_1->tmpRes = ((void*)0);
}
