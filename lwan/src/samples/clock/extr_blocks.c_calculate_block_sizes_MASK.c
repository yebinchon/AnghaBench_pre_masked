
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fall {scalar_t__ shape; } ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 struct fall const** VAR_2 ;

__attribute__((constructor)) void FUNC_0(void)
{
    for (int VAR_3 = 0; VAR_3 < 10; VAR_3++) {
        const struct fall *VAR_4 = VAR_2[VAR_3];

        while (VAR_4->shape != VAR_0)
            VAR_4++;

        VAR_1[VAR_3] = (int)(VAR_4 - VAR_2[VAR_3]) + 1;
    }
}
