
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_10__ {int ax; int bx; int cx; int dx; } ;
struct TYPE_9__ {int eflags; } ;
struct TYPE_8__ {int ah; } ;
struct TYPE_11__ {TYPE_3__ w; TYPE_2__ x; TYPE_1__ b; } ;
typedef TYPE_4__ REGS ;
typedef int PUCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__) ;
 int FUNC_1 (int,TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static
BOOLEAN
FUNC_5(ULONG* VAR_3 , ULONG* VAR_4 )
{
    REGS VAR_5;
    REGS VAR_6;

    FUNC_3("GetExtendedMemoryConfiguration()\n");

    *VAR_3 = 0;
    *VAR_4 = 0;
    VAR_5.w.ax = 0xE801;
    FUNC_1(0x15, &VAR_5, &VAR_6);

    FUNC_3("Int15h AX=E801h\n");
    FUNC_3("AX = 0x%x\n", VAR_6.w.ax);
    FUNC_3("BX = 0x%x\n", VAR_6.w.bx);
    FUNC_3("CX = 0x%x\n", VAR_6.w.cx);
    FUNC_3("DX = 0x%x\n", VAR_6.w.dx);
    FUNC_3("CF set = %s\n", (VAR_6.x.eflags & VAR_0) ? "TRUE" : "FALSE");

    if (FUNC_0(VAR_6))
    {

        if (VAR_6.w.ax == 0)
        {

            *VAR_4 = VAR_6.w.dx;
            *VAR_3 = VAR_6.w.cx;
            return VAR_2;
        }
        else
        {

            *VAR_4 = VAR_6.w.bx;
            *VAR_3 = VAR_6.w.ax;
            return VAR_2;
        }
    }
    VAR_5.b.ah = 0x88;
    FUNC_1(0x15, &VAR_5, &VAR_6);

    FUNC_3("Int15h AH=88h\n");
    FUNC_3("AX = 0x%x\n", VAR_6.w.ax);
    FUNC_3("CF set = %s\n", (VAR_6.x.eflags & VAR_0) ? "TRUE" : "FALSE");

    if (FUNC_0(VAR_6) && VAR_6.w.ax != 0)
    {
        *VAR_3 = VAR_6.w.ax;
        return VAR_2;
    }



    FUNC_4((PUCHAR)0x70, 0x31);
    *VAR_3 = FUNC_2((PUCHAR)0x71);
    *VAR_3 = (*VAR_3 & 0xFFFF);
    *VAR_3 = (*VAR_3 << 8);

    FUNC_3("Int15h Failed\n");
    FUNC_3("CMOS reports: 0x%lx\n", *VAR_3);

    if (*VAR_3 != 0)
    {
        return VAR_2;
    }

    return VAR_1;
}
