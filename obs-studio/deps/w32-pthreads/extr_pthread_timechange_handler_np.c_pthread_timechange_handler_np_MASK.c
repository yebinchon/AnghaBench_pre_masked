
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptw32_mcs_local_node_t ;
typedef TYPE_1__* pthread_cond_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void *
FUNC_3 (void *VAR_3)
{
  int VAR_4 = 0;
  pthread_cond_t VAR_5;
  ptw32_mcs_local_node_t VAR_6;

  FUNC_1(&VAR_2, &VAR_6);

  VAR_5 = VAR_1;

  while (VAR_5 != ((void*)0) && 0 == VAR_4)
    {
      VAR_4 = FUNC_0 (&VAR_5);
      VAR_5 = VAR_5->next;
    }

  FUNC_2(&VAR_6);

  return (void *) (size_t) (VAR_4 != 0 ? VAR_0 : 0);
}
