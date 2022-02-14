
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t threadnum; int started; } ;
typedef TYPE_1__ bag_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void *
FUNC_4(void * VAR_3)
{
  bag_t * VAR_4 = (bag_t *) VAR_3;

  FUNC_1(VAR_4 == &VAR_2[VAR_4->threadnum]);
  FUNC_1(VAR_4->started == 0);
  VAR_4->started = 1;

  VAR_0 = VAR_4->threadnum;

  FUNC_0(1000);

  FUNC_2(&VAR_1);

  FUNC_1(VAR_0 == VAR_4->threadnum);

  FUNC_3(&VAR_1);

  FUNC_0(1000);

  return 0;
}
