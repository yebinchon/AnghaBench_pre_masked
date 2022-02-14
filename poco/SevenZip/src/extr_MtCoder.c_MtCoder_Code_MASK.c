
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* param; int func; int thread; } ;
struct TYPE_11__ {unsigned int numThreads; scalar_t__ res; TYPE_1__* threads; int progress; int mtProgress; } ;
struct TYPE_10__ {TYPE_3__ thread; int canRead; int canWrite; int stopReading; } ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ CMtThread ;
typedef TYPE_2__ CMtCoder ;
typedef TYPE_3__ CLoopThread ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int VAR_3 ;

SRes FUNC_9(CMtCoder *VAR_4)
{
  unsigned VAR_5, VAR_6 = VAR_4->numThreads;
  SRes VAR_7 = VAR_1;
  VAR_4->res = VAR_1;

  FUNC_6(&VAR_4->mtProgress, VAR_4->progress);

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  {
    FUNC_7(FUNC_1(&VAR_4->threads[VAR_5]));
  }

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  {
    CMtThread *VAR_8 = &VAR_4->threads[VAR_5];
    CLoopThread *VAR_9 = &VAR_8->thread;

    if (!FUNC_8(&VAR_9->thread))
    {
      VAR_9->func = VAR_2;
      VAR_9->param = VAR_8;

      if (FUNC_3(VAR_9) != VAR_1)
      {
        VAR_7 = VAR_0;
        break;
      }
    }
  }

  if (VAR_7 == VAR_1)
  {
    unsigned VAR_10;
    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    {
      CMtThread *VAR_11 = &VAR_4->threads[VAR_5];
      if (FUNC_4(&VAR_11->thread) != VAR_1)
      {
        VAR_7 = VAR_0;
        VAR_4->threads[0].stopReading = VAR_3;
        break;
      }
    }

    FUNC_2(&VAR_4->threads[0].canWrite);
    FUNC_2(&VAR_4->threads[0].canRead);

    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
      FUNC_5(&VAR_4->threads[VAR_10].thread);
  }

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    FUNC_0(&VAR_4->threads[VAR_5]);
  return (VAR_7 == VAR_1) ? VAR_4->res : VAR_7;
}
