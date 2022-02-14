
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WRes ;
struct TYPE_3__ {int stop; int thread; int startEvent; } ;
typedef TYPE_1__ CLoopThread ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

WRes FUNC_2(CLoopThread *VAR_1)
{
  VAR_1->stop = 1;
  if (FUNC_0(&VAR_1->startEvent) != 0)
    return VAR_0;
  return FUNC_1(&VAR_1->thread);
}
