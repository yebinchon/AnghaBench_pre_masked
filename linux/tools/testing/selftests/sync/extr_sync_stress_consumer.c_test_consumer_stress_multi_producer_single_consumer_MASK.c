
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_2__ {int* producer_timelines; int consumer_timeline; int iterations; int threads; int lock; scalar_t__ counter; } ;


 long FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *,void* (*) (void*),void*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_1 ;

int FUNC_5(void)
{
 int VAR_2 = 1 << 12;
 int VAR_3 = 5;
 long VAR_4, VAR_5;
 int VAR_6[VAR_3];
 int VAR_7;
 pthread_t VAR_8[VAR_3];

 VAR_7 = FUNC_4();
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_6[VAR_4] = FUNC_4();

 VAR_1.producer_timelines = VAR_6;
 VAR_1.consumer_timeline = VAR_7;
 VAR_1.iterations = VAR_2;
 VAR_1.threads = VAR_3;
 VAR_1.counter = 0;
 FUNC_3(&VAR_1.lock, ((void*)0));

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_1(&VAR_8[VAR_4], ((void*)0), (void * (*)(void *))
          VAR_0, (void *)VAR_4);
 }


 VAR_5 = FUNC_0();

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_2(VAR_8[VAR_4], ((void*)0));

 return VAR_5;
}
