
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_8__ {int bx; int cx; } ;
struct TYPE_7__ {int ah; int dl; } ;
struct TYPE_9__ {TYPE_2__ w; TYPE_1__ b; } ;
typedef TYPE_3__ REGS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOLEAN FUNC_4(UCHAR VAR_2)
{
    static UCHAR VAR_3 = 0xff;
    static BOOLEAN VAR_4;
    REGS VAR_5, VAR_6;

    FUNC_3("DiskInt13ExtensionsSupported()\n");

    if (VAR_2 == VAR_3)
    {
        FUNC_3("Using cached value %s for drive 0x%x\n",
              VAR_4 ? "TRUE" : "FALSE", VAR_2);
        return VAR_4;
    }
    if (VAR_2 >= 0x8A)
    {
        VAR_4 = VAR_1;
        return VAR_1;
    }

    VAR_3 = VAR_2;
    VAR_5.b.ah = 0x41;
    VAR_5.w.bx = 0x55AA;
    VAR_5.b.dl = VAR_2;


    FUNC_2(0x13, &VAR_5, &VAR_6);

    if (!FUNC_1(VAR_6))
    {

        VAR_4 = VAR_0;
        return VAR_0;
    }

    if (VAR_6.w.bx != 0xAA55)
    {

        VAR_4 = VAR_0;
        return VAR_0;
    }

    if (!(VAR_6.w.cx & 0x0001))
    {




        FUNC_0("Suspicious API subset support bitmap 0x%x on device 0x%lx\n",
                 VAR_6.w.cx, VAR_2);
        VAR_4 = VAR_0;
        return VAR_0;
    }

    VAR_4 = VAR_1;
    return VAR_1;
}
