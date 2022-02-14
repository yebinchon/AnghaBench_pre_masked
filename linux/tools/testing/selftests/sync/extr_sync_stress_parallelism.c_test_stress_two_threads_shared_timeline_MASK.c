
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_2__ {int iterations; int counter; int timeline; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int *,void* (*) (void*),void*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_6(void)
{
 pthread_t VAR_2, VAR_3;
 int VAR_4;
 int VAR_5 = FUNC_3();

 VAR_4 = FUNC_5(VAR_5);
 FUNC_0(VAR_4, "Failure allocating timeline\n");

 VAR_0.iterations = 1 << 16;
 VAR_0.counter = 0;
 VAR_0.timeline = VAR_5;






 FUNC_1(&VAR_2, ((void*)0), (void *(*)(void *))
         VAR_1,
         (void *)0);
 FUNC_1(&VAR_3, ((void*)0), (void *(*)(void *))
         VAR_1,
         (void *)1);

 FUNC_2(VAR_2, ((void*)0));
 FUNC_2(VAR_3, ((void*)0));


 FUNC_0(VAR_0.counter ==
        VAR_0.iterations * 2,
        "Counter has unexpected value\n");

 FUNC_4(VAR_5);

 return 0;
}
