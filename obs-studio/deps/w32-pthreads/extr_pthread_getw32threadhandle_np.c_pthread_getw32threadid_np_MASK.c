
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int thread; } ;
typedef TYPE_1__ ptw32_thread_t ;
struct TYPE_5__ {scalar_t__ p; } ;
typedef TYPE_2__ pthread_t ;
typedef int DWORD ;



DWORD
FUNC_0 (pthread_t VAR_0)
{
  return ((ptw32_thread_t *)VAR_0.p)->thread;
}
