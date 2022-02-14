
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int * p; } ;
struct TYPE_11__ {scalar_t__ keys; int threadLock; TYPE_2__ ptHandle; } ;
typedef TYPE_1__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
typedef TYPE_2__ pthread_t ;
typedef TYPE_3__* pthread_key_t ;
struct TYPE_14__ {struct TYPE_14__* nextKey; TYPE_3__* key; } ;
typedef TYPE_4__ ThreadKeyAssoc ;
struct TYPE_13__ {int key; int keyLock; int * destructor; } ;
typedef int LPVOID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_2__ FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* VAR_2 ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*) ;

int
FUNC_6 (pthread_key_t VAR_3, const void *VAR_4)
{
  pthread_t VAR_5;
  int VAR_6 = 0;

  if (VAR_3 != VAR_2)
    {





      VAR_5 = FUNC_2 ();
      if (VAR_5.p == ((void*)0))
 {
   return VAR_1;
 }
    }
  else
    {




      ptw32_thread_t * VAR_7 = (ptw32_thread_t *) FUNC_1 (VAR_2);

      if (VAR_7 == ((void*)0))
        {
   if (VAR_4 == ((void*)0))
     {
       return VAR_1;
     }
          VAR_5 = *((pthread_t *) VAR_4);
        }
      else
        {
   VAR_5 = VAR_7->ptHandle;
        }
    }

  VAR_6 = 0;

  if (VAR_3 != ((void*)0))
    {
      if (VAR_5.p != ((void*)0) && VAR_3->destructor != ((void*)0) && VAR_4 != ((void*)0))
 {
          ptw32_mcs_local_node_t VAR_8;
          ptw32_mcs_local_node_t VAR_9;
   ptw32_thread_t * VAR_10 = (ptw32_thread_t *) VAR_5.p;
   ThreadKeyAssoc *VAR_11;

   FUNC_3(&(VAR_3->keyLock), &VAR_8);
   FUNC_3(&(VAR_10->threadLock), &VAR_9);

   VAR_11 = (ThreadKeyAssoc *) VAR_10->keys;



   while (VAR_11 != ((void*)0))
     {
       if (VAR_11->key == VAR_3)
  {



    break;
  }
  VAR_11 = VAR_11->nextKey;
     }




   if (VAR_11 == ((void*)0))
     {
       VAR_6 = FUNC_5 (VAR_10, VAR_3);
     }

   FUNC_4(&VAR_9);
   FUNC_4(&VAR_8);
 }

      if (VAR_6 == 0)
 {
   if (!FUNC_0 (VAR_3->key, (LPVOID) VAR_4))
     {
       VAR_6 = VAR_0;
     }
 }
    }

  return (VAR_6);
}
