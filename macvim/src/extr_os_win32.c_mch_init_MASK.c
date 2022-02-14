
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_6__ {int wAttributes; } ;
struct TYPE_8__ {TYPE_1__ Info; } ;
struct TYPE_7__ {int wAttributes; } ;
typedef scalar_t__ PFNGCKLN ;
typedef TYPE_2__ CONSOLE_SCREEN_BUFFER_INFO ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int FUNC_11 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (int ,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_16 () ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int) ;
 int FUNC_20 () ;

void
FUNC_21(void)
{

    CONSOLE_SCREEN_BUFFER_INFO VAR_25;


    extern int VAR_26;



    VAR_2;



    FUNC_10(VAR_1);

    VAR_26 = VAR_0;
    FUNC_16();


    if (VAR_23 == 0)
 VAR_19 = FUNC_5(VAR_4);
    else
 FUNC_11();
    VAR_20 = FUNC_5(VAR_5);







    FUNC_2(VAR_20, &VAR_25);
    VAR_10 = VAR_11 = VAR_25.wAttributes;

    if (VAR_8 == 0)
 VAR_8 = (VAR_10 & 0xf) + 1;
    if (VAR_7 == 0)
 VAR_7 = ((VAR_10 >> 4) & 0xf) + 1;


    FUNC_19(VAR_10);

    FUNC_0(VAR_20, &VAR_13);
    FUNC_1(VAR_19, &VAR_14);
    FUNC_1(VAR_20, &VAR_15);
    FUNC_18();
    VAR_18 = VAR_6;
    VAR_24 =
 (PFNGCKLN) FUNC_4(FUNC_3("kernel32.dll"),
      "GetConsoleKeyboardLayoutNameA");
}
