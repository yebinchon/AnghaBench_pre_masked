
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t count; } ;
struct lwan {int n_cpus; TYPE_1__ thread; } ;


 size_t* FUNC_0 (int) ;
 int FUNC_1 (struct lwan*,size_t*) ;
 int FUNC_2 (struct lwan*,size_t*,size_t*) ;

__attribute__((used)) static void
FUNC_3(struct lwan *VAR_0, uint32_t VAR_1[], uint32_t VAR_2)
{
    uint32_t *VAR_3 = FUNC_0(VAR_0->n_cpus * sizeof(uint32_t));

    if (!FUNC_1(VAR_0, VAR_3)) {
        for (uint32_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
            VAR_1[VAR_4] = (VAR_4 / 2) % VAR_0->thread.count;
    } else {
        uint32_t *VAR_5 = FUNC_0(VAR_0->n_cpus * sizeof(uint32_t));

        FUNC_2(VAR_0, VAR_3, VAR_5);

        for (uint32_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
            VAR_1[VAR_6] = VAR_5[VAR_6 % VAR_0->n_cpus];
    }
}
