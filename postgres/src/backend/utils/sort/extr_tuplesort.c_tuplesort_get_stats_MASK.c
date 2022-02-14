
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int allowedMem; int availMem; int status; int boundUsed; scalar_t__ tapeset; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_6__ {int spaceUsed; int sortMethod; int spaceType; } ;
typedef TYPE_2__ TuplesortInstrumentation ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




void
FUNC_1(Tuplesortstate *VAR_8,
     TuplesortInstrumentation *VAR_9)
{
 if (VAR_8->tapeset)
 {
  VAR_9->spaceType = VAR_1;
  VAR_9->spaceUsed = FUNC_0(VAR_8->tapeset) * (VAR_0 / 1024);
 }
 else
 {
  VAR_9->spaceType = VAR_2;
  VAR_9->spaceUsed = (VAR_8->allowedMem - VAR_8->availMem + 1023) / 1024;
 }

 switch (VAR_8->status)
 {
  case 129:
   if (VAR_8->boundUsed)
    VAR_9->sortMethod = VAR_7;
   else
    VAR_9->sortMethod = VAR_5;
   break;
  case 128:
   VAR_9->sortMethod = VAR_4;
   break;
  case 130:
   VAR_9->sortMethod = VAR_3;
   break;
  default:
   VAR_9->sortMethod = VAR_6;
   break;
 }
}
