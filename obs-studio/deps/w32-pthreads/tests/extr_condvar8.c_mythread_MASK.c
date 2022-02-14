
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t threadnum; int started; } ;
typedef TYPE_1__ bag_t ;
struct TYPE_5__ {scalar_t__ shared; int lock; int notbusy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__ (*) (int *),void*) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void *
FUNC_6(void * VAR_5)
{
  bag_t * VAR_6 = (bag_t *) VAR_5;

  FUNC_0(VAR_6 == &VAR_4[VAR_6->threadnum]);
  FUNC_0(VAR_6->started == 0);
  VAR_6->started = 1;


  FUNC_0(FUNC_4(&VAR_3) == 0);
  FUNC_0(FUNC_5(&VAR_3) == 0);

  FUNC_0(FUNC_4(&VAR_2.lock) == 0);




  FUNC_2(FUNC_5, (void *) &VAR_2.lock);

  while (! (VAR_2.shared > 0))
    FUNC_0(FUNC_3(&VAR_2.notbusy, &VAR_2.lock, &VAR_0) == 0);

  FUNC_1(0);




  FUNC_0(VAR_2.shared > 0);

  VAR_1++;

  FUNC_0(FUNC_5(&VAR_2.lock) == 0);

  return (void *) 0;
}
