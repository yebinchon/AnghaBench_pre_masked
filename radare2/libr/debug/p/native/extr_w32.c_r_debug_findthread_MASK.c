
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_2__ {int tid; int pid; } ;
typedef int THREAD_ITEM ;
typedef TYPE_1__* PTHREAD_ITEM ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void * FUNC_0 (int VAR_1, int VAR_2) {
 PTHREAD_ITEM VAR_3 = ((void*)0);
 if (VAR_0) {
  VAR_3 = (PTHREAD_ITEM)VAR_0;
  while (VAR_3->tid != 0) {
   if (VAR_3->pid == VAR_1) {
    if (VAR_3->tid == VAR_2) {
     return ((void*)VAR_3);
    }
   }
   VAR_3 = (PTHREAD_ITEM)((ULONG_PTR)VAR_3 + sizeof (THREAD_ITEM));
  }
 }
 return ((void*)0);
}
