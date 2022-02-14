
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int threadCopy ;
struct TYPE_7__ {int * threadH; int * cancelEvent; } ;
typedef TYPE_1__ ptw32_thread_t ;
struct TYPE_8__ {scalar_t__ p; } ;
typedef TYPE_2__ pthread_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__) ;

void
FUNC_3 (pthread_t VAR_0)
{
  ptw32_thread_t * VAR_1 = (ptw32_thread_t *) VAR_0.p;
  ptw32_thread_t VAR_2;

  if (VAR_1 != ((void*)0))
    {



      FUNC_1 (&VAR_2, VAR_1, sizeof (VAR_2));





      FUNC_2 (VAR_0);


      if (VAR_2.cancelEvent != ((void*)0))
 {
   FUNC_0 (VAR_2.cancelEvent);
 }





      if (VAR_2.threadH != 0)
 {
   FUNC_0 (VAR_2.threadH);
 }


    }
}
