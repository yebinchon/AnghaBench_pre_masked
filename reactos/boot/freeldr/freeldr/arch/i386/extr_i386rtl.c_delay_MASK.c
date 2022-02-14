
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int cx; unsigned int dx; } ;
struct TYPE_6__ {int ah; } ;
struct TYPE_8__ {TYPE_2__ w; TYPE_1__ b; } ;
typedef TYPE_3__ REGS ;


 int FUNC_0 (int,TYPE_3__*,TYPE_3__*) ;

void FUNC_1(unsigned VAR_0)
{
    REGS VAR_1;
    unsigned VAR_2;
    unsigned VAR_3;
    while (VAR_0)
    {
        VAR_3 = VAR_0;

        if (VAR_3 > 4000)
        {
            VAR_3 = 4000;
        }

        VAR_2 = VAR_3 * 1000;

        VAR_1.b.ah = 0x86;
        VAR_1.w.cx = VAR_2 >> 16;
        VAR_1.w.dx = VAR_2 & 0xffff;
        FUNC_0(0x15, &VAR_1, &VAR_1);

        VAR_0 -= VAR_3;
    }
}
