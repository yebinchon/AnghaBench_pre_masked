
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_t ;
typedef int pthread_attr_t ;
struct TYPE_2__ {int touch_fp; int touch_vec; int result; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int ,void*) ;
 int FUNC_4 (int ,void**) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;

void FUNC_6(int VAR_3, int VAR_4, pthread_attr_t *VAR_5)
{
 int VAR_6 = 2;
 void *VAR_7;
 pthread_t VAR_8;

 VAR_1.touch_fp = VAR_3;
 VAR_1.touch_vec = VAR_4;
 do {
  int VAR_9;


  VAR_9 = FUNC_3(&VAR_8, VAR_5, VAR_2, (void *) &VAR_1);
  if (VAR_9)
   FUNC_0(VAR_9, "pthread_create()");
  VAR_9 = FUNC_5(VAR_8, "tm_una_ping");
  if (VAR_9)
   FUNC_1(VAR_9, "pthread_setname_np");
  VAR_9 = FUNC_4(VAR_8, &VAR_7);
  if (VAR_9)
   FUNC_0(VAR_9, "pthread_join");

  VAR_6--;
 } while (VAR_7 != ((void*)0) && VAR_6);

 if (!VAR_6) {
  VAR_1.result = 1;
  if (VAR_0)
   FUNC_2("All transactions failed unexpectedly\n");

 }
}
