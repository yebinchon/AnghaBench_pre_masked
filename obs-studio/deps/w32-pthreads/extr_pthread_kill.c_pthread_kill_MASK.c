
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ x; } ;
struct TYPE_6__ {int * threadH; TYPE_1__ ptHandle; } ;
typedef TYPE_2__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ p; } ;
typedef TYPE_3__ pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;

int
FUNC_2 (pthread_t VAR_3, int VAR_4)
{
  int VAR_5 = 0;
  ptw32_thread_t * VAR_6;
  ptw32_mcs_local_node_t VAR_7;

  FUNC_0(&VAR_2, &VAR_7);

  VAR_6 = (ptw32_thread_t *) VAR_3.p;

  if (((void*)0) == VAR_6
      || VAR_3.x != VAR_6->ptHandle.x
      || ((void*)0) == VAR_6->threadH)
    {
      VAR_5 = VAR_1;
    }

  FUNC_1(&VAR_7);

  if (0 == VAR_5 && 0 != VAR_4)
    {



      VAR_5 = VAR_0;
    }

  return VAR_5;

}
