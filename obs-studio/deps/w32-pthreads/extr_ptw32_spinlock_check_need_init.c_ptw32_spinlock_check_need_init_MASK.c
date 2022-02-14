
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptw32_mcs_local_node_t ;
typedef int * pthread_spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;

int
FUNC_3 (pthread_spinlock_t * VAR_4)
{
  int VAR_5 = 0;
  ptw32_mcs_local_node_t VAR_6;





  FUNC_1(&VAR_3, &VAR_6);
  if (*VAR_4 == VAR_2)
    {
      VAR_5 = FUNC_0 (VAR_4, VAR_1);
    }
  else if (*VAR_4 == ((void*)0))
    {





      VAR_5 = VAR_0;
    }

  FUNC_2(&VAR_6);

  return (VAR_5);
}
