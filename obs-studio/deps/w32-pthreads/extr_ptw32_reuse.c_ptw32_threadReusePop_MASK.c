
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int member_1; int * member_0; } ;
struct TYPE_4__ {TYPE_2__ ptHandle; int * prevReuse; } ;
typedef TYPE_1__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
typedef TYPE_2__ pthread_t ;


 void* VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

pthread_t
FUNC_2 (void)
{
  pthread_t VAR_4 = {((void*)0), 0};
  ptw32_mcs_local_node_t VAR_5;

  FUNC_0(&VAR_3, &VAR_5);

  if (VAR_0 != VAR_2)
    {
      ptw32_thread_t * VAR_6;

      VAR_6 = VAR_2;

      VAR_2 = VAR_6->prevReuse;

      if (VAR_0 == VAR_2)
        {
          VAR_1 = VAR_0;
        }

      VAR_6->prevReuse = ((void*)0);

      VAR_4 = VAR_6->ptHandle;
    }

  FUNC_1(&VAR_5);

  return VAR_4;

}
