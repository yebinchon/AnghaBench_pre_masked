
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int thread; } ;
struct TYPE_8__ {scalar_t__ inBuf; TYPE_1__* mtCoder; scalar_t__ outBuf; TYPE_3__ thread; } ;
struct TYPE_7__ {scalar_t__ alloc; } ;
typedef TYPE_2__ CMtThread ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(CMtThread *VAR_0)
{
  FUNC_0(VAR_0);

  if (FUNC_4(&VAR_0->thread.thread))
  {
    FUNC_3(&VAR_0->thread);
    FUNC_2(&VAR_0->thread);
  }

  if (VAR_0->mtCoder->alloc)
    FUNC_1(VAR_0->mtCoder->alloc, VAR_0->outBuf);
  VAR_0->outBuf = 0;

  if (VAR_0->mtCoder->alloc)
    FUNC_1(VAR_0->mtCoder->alloc, VAR_0->inBuf);
  VAR_0->inBuf = 0;
}
