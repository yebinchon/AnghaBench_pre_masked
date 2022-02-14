
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t count; TYPE_1__* threads; } ;
struct lwan {TYPE_2__ thread; } ;
typedef int set ;
typedef int cpu_set_t ;
struct TYPE_3__ {int self; } ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (int ,int,int *) ;

__attribute__((used)) static void
FUNC_4(struct lwan *VAR_0, uint32_t *VAR_1, uint32_t VAR_2)
{
    for (uint32_t VAR_3 = 0; VAR_3 < VAR_0->thread.count; VAR_3++) {
        cpu_set_t VAR_4;

        FUNC_1(&VAR_4);
        FUNC_0(VAR_1[VAR_3 & VAR_2], &VAR_4);

        if (FUNC_3(VAR_0->thread.threads[VAR_3].self, sizeof(VAR_4),
                                   &VAR_4))
            FUNC_2("Could not set affinity for thread %d", VAR_3);
    }
}
