
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ctx {int* calcmat; int size2; int gauss_middle; int * gauss; int * gaussmat; } ;
typedef size_t index_t ;


 int FUNC_0 (struct ctx*,int) ;

__attribute__((used)) static void FUNC_1(struct ctx *VAR_0, index_t VAR_1)
{
    if (VAR_0->calcmat[VAR_1])
        return;
    VAR_0->calcmat[VAR_1] = 1;
    uint64_t *VAR_2 = VAR_0->gaussmat;
    uint64_t *VAR_3 = VAR_0->gaussmat + VAR_0->size2;
    uint64_t *VAR_4 = VAR_0->gauss + FUNC_0(VAR_0, VAR_0->gauss_middle + VAR_0->size2 - VAR_1);
    uint64_t *VAR_5 = VAR_0->gauss + VAR_0->size2;
    while (VAR_4 < VAR_5)
        *VAR_2++ += *VAR_4++;
    VAR_4 = VAR_0->gauss;
    while (VAR_2 < VAR_3)
        *VAR_2++ += *VAR_4++;
}
