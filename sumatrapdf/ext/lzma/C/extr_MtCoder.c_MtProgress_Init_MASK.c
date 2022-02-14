
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int res; int * progress; scalar_t__ totalOutSize; scalar_t__ totalInSize; scalar_t__* outSizes; scalar_t__* inSizes; } ;
typedef int ICompressProgress ;
typedef TYPE_1__ CMtProgress ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(CMtProgress *VAR_2, ICompressProgress *VAR_3)
{
  unsigned VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    VAR_2->inSizes[VAR_4] = VAR_2->outSizes[VAR_4] = 0;
  VAR_2->totalInSize = VAR_2->totalOutSize = 0;
  VAR_2->progress = VAR_3;
  VAR_2->res = VAR_1;
}
