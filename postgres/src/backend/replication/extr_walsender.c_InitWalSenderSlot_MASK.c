
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pid; int writeLag; int flushLag; int applyLag; int mutex; scalar_t__ replyTime; int * latch; int state; void* apply; void* flush; void* write; void* sentPtr; } ;
typedef TYPE_1__ WalSnd ;
struct TYPE_7__ {int procLatch; } ;
struct TYPE_6__ {TYPE_1__* walsnds; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_8;





 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_3 == ((void*)0));





 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  WalSnd *VAR_9 = &VAR_5->walsnds[VAR_8];

  FUNC_1(&VAR_9->mutex);

  if (VAR_9->pid != 0)
  {
   FUNC_2(&VAR_9->mutex);
   continue;
  }
  else
  {



   VAR_9->pid = VAR_2;
   VAR_9->sentPtr = VAR_0;
   VAR_9->write = VAR_0;
   VAR_9->flush = VAR_0;
   VAR_9->apply = VAR_0;
   VAR_9->writeLag = -1;
   VAR_9->flushLag = -1;
   VAR_9->applyLag = -1;
   VAR_9->state = VAR_4;
   VAR_9->latch = &VAR_1->procLatch;
   VAR_9->replyTime = 0;
   FUNC_2(&VAR_9->mutex);

   VAR_3 = (WalSnd *) VAR_9;

   break;
  }
 }

 FUNC_0(VAR_3 != ((void*)0));


 FUNC_3(VAR_6, 0);
}
