
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_5__ {long tv_sec; int tv_nsec; } ;
struct TYPE_4__ {int const millitm; scalar_t__ time; } ;
typedef TYPE_1__ PTW32_STRUCT_TIMEB ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_4 (int ,void**) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_5()
{
  pthread_t VAR_4;
  pthread_t VAR_5;
  pthread_t VAR_6;
  void* VAR_7 = (void*)0;
  void* VAR_8 = (void*)0;
  void* VAR_9 = (void*)0;
  PTW32_STRUCT_TIMEB VAR_10;
  const DWORD VAR_11 = 1000000;

  FUNC_0(&VAR_10);

  VAR_0.tv_sec = (long)VAR_10.time;
  VAR_0.tv_nsec = VAR_11 * VAR_10.millitm;

  VAR_0.tv_sec += 1;

  VAR_1 = 0;

  FUNC_2(FUNC_3(&VAR_4, ((void*)0), VAR_3, (void *)(size_t)1) == 0);
  FUNC_1(100);
  FUNC_2(FUNC_3(&VAR_6, ((void*)0), VAR_2, ((void*)0)) == 0);
  FUNC_1(100);
  FUNC_2(FUNC_3(&VAR_5, ((void*)0), VAR_3, (void *)(size_t)2) == 0);

  FUNC_2(FUNC_4(VAR_4, &VAR_7) == 0);
  FUNC_2(FUNC_4(VAR_6, &VAR_9) == 0);
  FUNC_2(FUNC_4(VAR_5, &VAR_8) == 0);

  FUNC_2((int)(size_t)VAR_7 == 10);
  FUNC_2((int)(size_t)VAR_9 == 0);
  FUNC_2((int)(size_t)VAR_8 == 100);

  return 0;
}
