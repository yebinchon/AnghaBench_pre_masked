
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int Asuchar; } ;
struct TYPE_13__ {TYPE_1__ u; } ;
struct TYPE_12__ {int FlushKeyboardQueue; int GetKeyPolled; } ;
struct TYPE_11__ {int SetBackgroundColor; int SetForegroundColor; int HideCursor; int ShowCursor; int RestoreGraphicsState; int SaveGraphicsState; int PrintCursor; int PrintLogo; int HatchLine; int InvertLine; int ClrLine; int PrintGraf; int CopyLineTo; } ;
struct TYPE_9__ {int LowPart; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
typedef scalar_t__ PUSHORT ;
typedef TYPE_3__ PHYSICAL_ADDRESS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 () ;
 void* FUNC_4 (TYPE_3__,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (void*,int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_6__ VAR_23 ;
 TYPE_5__ VAR_24 ;
 TYPE_4__ VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;

BOOLEAN FUNC_8(void)
{
 BOOLEAN VAR_31 = VAR_2;
    PUSHORT VAR_32;
 PHYSICAL_ADDRESS VAR_33;
 PHYSICAL_ADDRESS VAR_34;


    FUNC_1();

    VAR_25.CopyLineTo = VAR_1;
    VAR_25.PrintGraf = VAR_14;
    VAR_25.ClrLine = VAR_0;
    VAR_25.InvertLine = VAR_8;
    VAR_25.HatchLine = VAR_6;
    VAR_25.PrintLogo = VAR_15;
    VAR_25.PrintCursor = VAR_13;
    VAR_25.SaveGraphicsState = VAR_18;
    VAR_25.RestoreGraphicsState = VAR_16;
    VAR_25.ShowCursor = VAR_21;
    VAR_25.HideCursor = VAR_7;
    VAR_25.SetForegroundColor = VAR_20;
    VAR_25.SetBackgroundColor = VAR_19;

    VAR_24.GetKeyPolled = VAR_10;
    VAR_24.FlushKeyboardQueue = VAR_9;

    FUNC_7(VAR_30);

    VAR_5 = 80;

    VAR_4 = 25;




    VAR_23.u.Asuchar = 0x07;


 VAR_33.u.LowPart = 0xB8000;
 VAR_27 = FUNC_4(VAR_33,VAR_17,VAR_11);


 VAR_34.u.LowPart = 0xA0000;
 VAR_26 = FUNC_4(VAR_34,VAR_3,VAR_11);


 VAR_29 = FUNC_5(VAR_17,VAR_12);

 VAR_28 = FUNC_5(VAR_17,VAR_12);

 if(VAR_29)
 {
        FUNC_0((0,"VGA memory phys. 0x000b0000 mapped to virt. 0x%x\n",VAR_29));

        VAR_31 = VAR_22;

        VAR_32 = (PUSHORT)VAR_29;

  FUNC_6(VAR_29,0x0,VAR_17);

        FUNC_0((0,"VGA memory cleared!\n"));

        FUNC_2();

        FUNC_0((0,"ConsoleInitVga() SUCCESS!\n"));
 }

    FUNC_3();

 return VAR_31;
}
