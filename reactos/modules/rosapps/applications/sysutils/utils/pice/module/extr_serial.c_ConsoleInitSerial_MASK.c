
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int FlushKeyboardQueue; int (* GetKeyPolled ) () ;} ;
struct TYPE_3__ {int SetBackgroundColor; int SetForegroundColor; int HideCursor; int ShowCursor; int RestoreGraphicsState; int SaveGraphicsState; int PrintCursor; int PrintLogo; int HatchLine; int InvertLine; int ClrLine; int Flush; int PrintGraf; int CopyLineTo; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 () ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_2__ VAR_21 ;
 TYPE_1__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;

BOOLEAN FUNC_8(void)
{
 BOOLEAN VAR_25 = VAR_2;

    FUNC_1();

    VAR_22.CopyLineTo = VAR_1;
    VAR_22.PrintGraf = VAR_13;
    VAR_22.Flush = VAR_5;
    VAR_22.ClrLine = VAR_0;
    VAR_22.InvertLine = VAR_10;
    VAR_22.HatchLine = VAR_8;
    VAR_22.PrintLogo = VAR_14;
    VAR_22.PrintCursor = VAR_12;
    VAR_22.SaveGraphicsState = VAR_16;
    VAR_22.RestoreGraphicsState = VAR_15;
    VAR_22.ShowCursor = VAR_19;
    VAR_22.HideCursor = VAR_9;
    VAR_22.SetForegroundColor = VAR_18;
    VAR_22.SetBackgroundColor = VAR_17;

    VAR_21.GetKeyPolled = FUNC_3;
    VAR_21.FlushKeyboardQueue = VAR_4;

    FUNC_6(VAR_24);

    VAR_7 = 80;
    VAR_6 = 60;

 VAR_23 = FUNC_5(VAR_3, VAR_11);

    if(VAR_23)
    {
     VAR_25 = VAR_20;

        FUNC_2();

        FUNC_7(1,115200);


        VAR_25 = FUNC_0(VAR_7,VAR_6);

        if(VAR_25)
        {
            FUNC_3();
        }
    }

    FUNC_4();

 return VAR_25;
}
