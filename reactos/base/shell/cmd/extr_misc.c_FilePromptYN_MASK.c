
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int AsciiChar; } ;
struct TYPE_7__ {char wVirtualKeyCode; int dwControlKeyState; TYPE_1__ uChar; } ;
struct TYPE_8__ {TYPE_2__ KeyEvent; } ;
struct TYPE_9__ {TYPE_3__ Event; } ;
typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int INT ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_8 (int ,int ,scalar_t__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 () ;
 int VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 scalar_t__ FUNC_10 (char) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int * FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_14 (scalar_t__*) ;
 int * FUNC_15 (int ) ;
 int * VAR_12 ;
 TYPE_4__ VAR_13 ;
 int VAR_14 ;

INT FUNC_16 (UINT VAR_15)
{
    TCHAR VAR_16[VAR_5];



    TCHAR VAR_17[10];
    LPTSTR VAR_18;

    if (VAR_15 != 0)
        FUNC_7 (VAR_15);


    FUNC_5(VAR_17, 10);
    FUNC_6(FUNC_10('\n'));

    FUNC_14 (VAR_17);
    for (VAR_18 = VAR_17; FUNC_11 (*VAR_18); VAR_18++)
        ;

    FUNC_8(VAR_0, VAR_7, VAR_16, FUNC_0(VAR_16));

    if (FUNC_13(VAR_18, &VAR_16[0], 1) == 0)
        return VAR_4;
    else if (FUNC_13(VAR_18, &VAR_16[1], 1) == 0)
        return VAR_3;





    return VAR_3;
}
