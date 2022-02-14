
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ptw32_mcs_local_node_t ;
typedef TYPE_1__* pthread_mutex_t ;
struct TYPE_7__ {scalar_t__ kind; int recursive_count; int event; struct TYPE_7__* robustNode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;

int
FUNC_6 (pthread_mutex_t * VAR_6)
{
  int VAR_7 = 0;
  pthread_mutex_t VAR_8;
  if (*VAR_6 < VAR_3)
    {
      VAR_8 = *VAR_6;

      VAR_7 = FUNC_2 (&VAR_8);





      if (0 == VAR_7 || VAR_2 == VAR_7)
 {
   if (VAR_8->kind != VAR_4 || 1 == VAR_8->recursive_count)
     {







       *VAR_6 = ((void*)0);

       VAR_7 = (0 == VAR_7)?FUNC_3(&VAR_8):0;

       if (0 == VAR_7)
  {
                  if (VAR_8->robustNode != ((void*)0))
                    {
                      FUNC_1(VAR_8->robustNode);
                    }
    if (!FUNC_0 (VAR_8->event))
      {
        *VAR_6 = VAR_8;
        VAR_7 = VAR_1;
      }
    else
      {
        FUNC_1 (VAR_8);
      }
  }
       else
  {



    *VAR_6 = VAR_8;
  }
     }
   else
     {



       VAR_8->recursive_count--;
       VAR_7 = VAR_0;
     }
 }
    }
  else
    {
      ptw32_mcs_local_node_t VAR_9;





      FUNC_4(&VAR_5, &VAR_9);




      if (*VAR_6 >= VAR_3)
 {






   *VAR_6 = ((void*)0);
 }
      else
 {




   VAR_7 = VAR_0;
 }
      FUNC_5(&VAR_9);
    }

  return (VAR_7);
}
