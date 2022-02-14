
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_6__ {int ah; int dl; } ;
struct TYPE_7__ {TYPE_1__ b; } ;
typedef TYPE_2__ REGS ;
typedef int BOOLEAN ;


 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (int,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (char*,int ) ;

BOOLEAN FUNC_3(UCHAR VAR_0)
{
    REGS VAR_1, VAR_2;

    FUNC_2("DiskResetController(0x%x) DISK OPERATION FAILED -- RESETTING CONTROLLER\n", VAR_0);
    VAR_1.b.ah = 0x00;
    VAR_1.b.dl = VAR_0;


    FUNC_1(0x13, &VAR_1, &VAR_2);

    return FUNC_0(VAR_2);
}
