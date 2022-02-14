
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t threadnum; int started; } ;
typedef TYPE_1__ bag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int*) ;
 scalar_t__ FUNC_2 (int,int*) ;
 TYPE_1__* VAR_4 ;

void *
FUNC_3(void * VAR_5)
{
  bag_t * VAR_6 = (bag_t *) VAR_5;

  FUNC_0(VAR_6 == &VAR_4[VAR_6->threadnum]);
  FUNC_0(VAR_6->started == 0);
  VAR_6->started = 1;


  {
    int VAR_7;
    int VAR_8;

    FUNC_0(FUNC_1(VAR_2, &VAR_7) == 0);
    FUNC_0(VAR_7 == VAR_3);
    FUNC_0(FUNC_1(VAR_3, ((void*)0)) == 0);
    FUNC_0(FUNC_1(VAR_2, ((void*)0)) == 0);
    FUNC_0(FUNC_1(VAR_7, &VAR_7) == 0);
    FUNC_0(VAR_7 == VAR_2);

    FUNC_0(FUNC_2(VAR_0, &VAR_8) == 0);
    FUNC_0(VAR_8 == VAR_1);
    FUNC_0(FUNC_2(VAR_1, ((void*)0)) == 0);
    FUNC_0(FUNC_2(VAR_0, ((void*)0)) == 0);
    FUNC_0(FUNC_2(VAR_8, &VAR_8) == 0);
    FUNC_0(VAR_8 == VAR_0);
  }

  return 0;
}
