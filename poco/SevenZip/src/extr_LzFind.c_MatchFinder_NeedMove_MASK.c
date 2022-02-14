
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t keepSizeAfter; scalar_t__ buffer; scalar_t__ blockSize; scalar_t__ bufferBase; scalar_t__ directInput; } ;
typedef TYPE_1__ CMatchFinder ;



int FUNC_0(CMatchFinder *VAR_0)
{
  if (VAR_0->directInput)
    return 0;

  return ((size_t)(VAR_0->bufferBase + VAR_0->blockSize - VAR_0->buffer) <= VAR_0->keepSizeAfter);
}
