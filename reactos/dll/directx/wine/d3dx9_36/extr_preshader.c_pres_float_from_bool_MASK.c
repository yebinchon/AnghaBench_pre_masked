
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;



__attribute__((used)) static void FUNC_0(void *VAR_0, const void *VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3;
    const BOOL *VAR_4 = VAR_1;
    float *VAR_5 = VAR_0;

    for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
        VAR_5[VAR_3] = !!VAR_4[VAR_3];
}
