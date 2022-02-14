
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int needFlush; int needInitState; scalar_t__ checkDicSize; scalar_t__ processedPos; scalar_t__ tempBufSize; scalar_t__ remainLen; } ;
typedef TYPE_1__ CLzmaDec ;
typedef scalar_t__ Bool ;



void FUNC_0(CLzmaDec *VAR_0, Bool VAR_1, Bool VAR_2)
{
  VAR_0->needFlush = 1;
  VAR_0->remainLen = 0;
  VAR_0->tempBufSize = 0;

  if (VAR_1)
  {
    VAR_0->processedPos = 0;
    VAR_0->checkDicSize = 0;
    VAR_0->needInitState = 1;
  }
  if (VAR_2)
    VAR_0->needInitState = 1;
}
