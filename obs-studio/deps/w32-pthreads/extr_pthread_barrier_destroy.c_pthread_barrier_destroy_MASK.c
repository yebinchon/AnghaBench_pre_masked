
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptw32_mcs_local_node_t ;
typedef TYPE_1__* pthread_barrier_t ;
struct TYPE_4__ {scalar_t__ nCurrentBarrierHeight; scalar_t__ nInitialBarrierHeight; int pshared; int semBarrierBreeched; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

int
FUNC_5 (pthread_barrier_t * VAR_3)
{
  int VAR_4 = 0;
  pthread_barrier_t VAR_5;
  ptw32_mcs_local_node_t VAR_6;

  if (VAR_3 == ((void*)0) || *VAR_3 == (pthread_barrier_t) VAR_2)
    {
      return VAR_1;
    }

  if (0 != FUNC_2(&(*VAR_3)->lock, &VAR_6))
    {
      return VAR_0;
    }

  VAR_5 = *VAR_3;

  if (VAR_5->nCurrentBarrierHeight < VAR_5->nInitialBarrierHeight)
    {
      VAR_4 = VAR_0;
    }
  else
 {
      if (0 == (VAR_4 = FUNC_3 (&(VAR_5->semBarrierBreeched))))
        {
          *VAR_3 = (pthread_barrier_t) VAR_2;
          FUNC_1(&VAR_6);
   (void) FUNC_0 (VAR_5);
   return 0;
 }
      else
        {




          (void) FUNC_4 (&(VAR_5->semBarrierBreeched), VAR_5->pshared, 0);
        }

      if (VAR_4 != 0)
        {




          VAR_4 = VAR_0;
        }
    }

  FUNC_1(&VAR_6);
  return (VAR_4);
}
