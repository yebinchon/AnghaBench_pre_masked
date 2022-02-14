
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int thread; int canWrite; int canRead; scalar_t__ inBuf; scalar_t__ outBuf; int * mtCoder; } ;
typedef TYPE_1__ CMtThread ;
typedef int CMtCoder ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(CMtThread *VAR_0, CMtCoder *VAR_1)
{
  VAR_0->mtCoder = VAR_1;
  VAR_0->outBuf = 0;
  VAR_0->inBuf = 0;
  FUNC_0(&VAR_0->canRead);
  FUNC_0(&VAR_0->canWrite);
  FUNC_1(&VAR_0->thread);
}
