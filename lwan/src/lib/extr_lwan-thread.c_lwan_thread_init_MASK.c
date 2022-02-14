
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lwan_thread {int dummy; } ;
struct lwan_connection {int dummy; } ;
struct TYPE_4__ {short count; unsigned int max_fd; int barrier; int * threads; } ;
struct lwan {TYPE_2__ thread; TYPE_1__* conns; } ;
struct TYPE_3__ {int * thread; } ;


 int FUNC_0 (struct lwan*,int*,int) ;
 int* FUNC_1 (int) ;
 int * FUNC_2 (size_t,int) ;
 int FUNC_3 (struct lwan*,int *) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,int *,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (struct lwan*,int*,int) ;

void FUNC_11(struct lwan *VAR_0)
{
    if (FUNC_7(&VAR_0->thread.barrier, ((void*)0),
                             (unsigned)VAR_0->thread.count + 1))
        FUNC_5("Could not create barrier");

    FUNC_6("Initializing threads");

    VAR_0->thread.threads =
        FUNC_2((size_t)VAR_0->thread.count, sizeof(struct lwan_thread));
    if (!VAR_0->thread.threads)
        FUNC_5("Could not allocate memory for threads");

    for (short VAR_1 = 0; VAR_1 < VAR_0->thread.count; VAR_1++)
        FUNC_3(VAR_0, &VAR_0->thread.threads[VAR_1]);

    const unsigned int VAR_2 = VAR_0->thread.max_fd * VAR_0->thread.count;

    FUNC_9(sizeof(struct lwan_connection) == 32,
                  "Two connections per cache line");
    uint32_t VAR_3 = (uint32_t)FUNC_4((size_t)((VAR_0->thread.count - 1) * 2));
    uint32_t *VAR_4 = FUNC_1(VAR_3 * sizeof(uint32_t));

    FUNC_10(VAR_0, VAR_4, VAR_3);

    VAR_3--;
    FUNC_0(VAR_0, VAR_4, VAR_3);
    for (unsigned int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
        VAR_0->conns[VAR_5].thread = &VAR_0->thread.threads[VAR_4[VAR_5 & VAR_3]];





    FUNC_8(&VAR_0->thread.barrier);

    FUNC_6("Worker threads created and ready to serve");
}
