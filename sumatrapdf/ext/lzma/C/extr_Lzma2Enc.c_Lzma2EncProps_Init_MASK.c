
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numTotalThreads; int numBlockThreads; scalar_t__ blockSize; int lzmaProps; } ;
typedef TYPE_1__ CLzma2EncProps ;


 int FUNC_0 (int *) ;

void FUNC_1(CLzma2EncProps *VAR_0)
{
  FUNC_0(&VAR_0->lzmaProps);
  VAR_0->numTotalThreads = -1;
  VAR_0->numBlockThreads = -1;
  VAR_0->blockSize = 0;
}
