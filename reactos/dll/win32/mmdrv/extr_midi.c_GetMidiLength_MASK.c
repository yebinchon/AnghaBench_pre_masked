
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l; } ;
typedef TYPE_1__* PMIDIALLOC ;
typedef int BYTE ;



__attribute__((used)) static int FUNC_0(PMIDIALLOC VAR_0, BYTE VAR_1)
{
    if (VAR_1 >= 0xF8)
    {

        return 1;
    }

    switch (VAR_1)
    {
        case 0xF0: case 0xF4: case 0xF5: case 0xF6: case 0xF7:
            VAR_0->l = 1;
            return VAR_0->l;

        case 0xF1: case 0xF3:
            VAR_0->l = 2;
            return VAR_0->l;

        case 0xF2:
            VAR_0->l = 3;
            return VAR_0->l;
    }

    switch (VAR_1 & 0xF0)
    {
        case 0x80: case 0x90: case 0xA0: case 0xB0: case 0xE0:
            VAR_0->l = 3;
            return VAR_0->l;

        case 0xC0: case 0xD0:
            VAR_0->l = 2;
            return VAR_0->l;
    }

    return (VAR_0->l - 1);
}
