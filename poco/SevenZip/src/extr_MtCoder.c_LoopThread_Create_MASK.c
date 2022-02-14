
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WRes ;
struct TYPE_4__ {int thread; int finishedEvent; int startEvent; scalar_t__ stop; } ;
typedef TYPE_1__ CLoopThread ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;

WRes FUNC_3(CLoopThread *VAR_1)
{
  VAR_1->stop = 0;
  FUNC_1(FUNC_0(&VAR_1->startEvent));
  FUNC_1(FUNC_0(&VAR_1->finishedEvent));
  return FUNC_2(&VAR_1->thread, VAR_0, VAR_1);
}
