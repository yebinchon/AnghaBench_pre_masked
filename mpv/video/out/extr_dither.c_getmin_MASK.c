
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ctx {unsigned int size2; scalar_t__* gaussmat; unsigned int* randomat; int avlfg; scalar_t__* calcmat; } ;
typedef unsigned int index_t ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static index_t FUNC_1(struct ctx *VAR_1)
{
    uint64_t VAR_2 = VAR_0;
    index_t VAR_3 = 0;
    unsigned int VAR_4 = VAR_1->size2;
    for (index_t VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        if (VAR_1->calcmat[VAR_5])
            continue;
        uint64_t VAR_6 = VAR_1->gaussmat[VAR_5];
        if (VAR_6 <= VAR_2) {
            if (VAR_6 != VAR_2) {
                VAR_2 = VAR_6;
                VAR_3 = 0;
            }
            VAR_1->randomat[VAR_3++] = VAR_5;
        }
    }
    if (VAR_3 == 1)
        return VAR_1->randomat[0];
    if (VAR_3 == VAR_4)
        return VAR_4 / 2;
    return VAR_1->randomat[FUNC_0(&VAR_1->avlfg) % VAR_3];
}
