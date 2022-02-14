
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct lwan {int n_cpus; } ;


 int* FUNC_0 (int) ;
 int FUNC_1 (size_t*,int*,int) ;

__attribute__((used)) static void
FUNC_2(struct lwan *VAR_0, uint32_t VAR_1[], uint32_t VAR_2[])
{
    int *VAR_3 = FUNC_0(VAR_0->n_cpus * sizeof(int));
    int VAR_4 = 0;

    for (uint32_t VAR_5 = 0; VAR_5 < VAR_0->n_cpus; VAR_5++)
        VAR_3[VAR_5] = -1;

    for (uint32_t VAR_6 = 0; VAR_6 < VAR_0->n_cpus; VAR_6++) {
        if (VAR_3[VAR_1[VAR_6]] < 0) {
            VAR_3[VAR_1[VAR_6]] = (int)VAR_6;
        } else {
            VAR_2[VAR_4++] = (uint32_t)VAR_3[VAR_1[VAR_6]];
            VAR_2[VAR_4++] = VAR_6;
        }
    }

    if (!VAR_4)
        FUNC_1(VAR_2, VAR_3, VAR_0->n_cpus * sizeof(int));
}
