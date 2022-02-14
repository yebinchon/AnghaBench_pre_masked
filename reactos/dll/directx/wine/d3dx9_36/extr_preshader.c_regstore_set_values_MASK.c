
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_regstore {int const** tables; } ;
struct TYPE_2__ {unsigned int component_size; } ;
typedef int const BYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int const*,unsigned int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct d3dx_regstore *VAR_1, unsigned int VAR_2, const void *VAR_3,
        unsigned int VAR_4, unsigned int VAR_5)
{
    BYTE *VAR_6 = VAR_1->tables[VAR_2];
    const BYTE *VAR_7 = VAR_3;
    unsigned int VAR_8;

    VAR_6 += VAR_4 * VAR_0[VAR_2].component_size;
    VAR_8 = VAR_5 * VAR_0[VAR_2].component_size;
    FUNC_0((VAR_7 < VAR_6 && VAR_8 <= VAR_6 - VAR_7) || (VAR_7 > VAR_6 && VAR_8 <= VAR_7 - VAR_6));
    FUNC_1(VAR_6, VAR_7, VAR_8);
}
