
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t threadnum; int started; int count; } ;
typedef TYPE_1__ bag_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 TYPE_1__* VAR_3 ;

void *
FUNC_5(void * VAR_4)
{
  void* VAR_5 = (void*)((int)(size_t)VAR_0 + 1);
  bag_t * VAR_6 = (bag_t *) VAR_4;

  FUNC_1(VAR_6 == &VAR_3[VAR_6->threadnum]);
  FUNC_1(VAR_6->started == 0);
  VAR_6->started = 1;



  FUNC_1(FUNC_2(VAR_2, ((void*)0)) == 0);

  FUNC_1(FUNC_3(VAR_1, ((void*)0)) == 0);





  for (VAR_6->count = 0; VAR_6->count < 100; VAR_6->count++)
    {
      FUNC_0(100);
      FUNC_4();
    }

  return VAR_5;
}
