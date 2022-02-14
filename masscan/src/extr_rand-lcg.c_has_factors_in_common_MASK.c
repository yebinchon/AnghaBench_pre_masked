
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int* PRIMEFACTORS ;



__attribute__((used)) static uint64_t
FUNC_0(uint64_t VAR_0, PRIMEFACTORS VAR_1)
{
    unsigned VAR_2;

    for (VAR_2=0; VAR_1[VAR_2]; VAR_2++) {
        if ((VAR_0 % VAR_1[VAR_2]) == 0)
            return VAR_1[VAR_2];
    }
    return 0;
}
