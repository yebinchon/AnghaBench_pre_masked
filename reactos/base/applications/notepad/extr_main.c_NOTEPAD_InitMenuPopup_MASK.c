
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_2__ {int hMainWnd; int hEdit; scalar_t__ bShowStatusBar; scalar_t__ bWrapLongLines; } ;
typedef int LPARAM ;
typedef int HMENU ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__ VAR_11 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static VOID FUNC_10(HMENU VAR_17, LPARAM VAR_18)
{
    int VAR_19;

    FUNC_9(VAR_18);

    FUNC_0(FUNC_3(VAR_11.hMainWnd), VAR_8,
        VAR_12 | (VAR_11.bWrapLongLines ? VAR_13 : VAR_16));
    if (!VAR_11.bWrapLongLines)
    {
        FUNC_0(FUNC_3(VAR_11.hMainWnd), VAR_6,
            VAR_12 | (VAR_11.bShowStatusBar ? VAR_13 : VAR_16));
    }
    FUNC_2(VAR_17, VAR_7,
        FUNC_8(VAR_11.hEdit, VAR_9, 0, 0) ? VAR_14 : VAR_15);
    FUNC_2(VAR_17, VAR_4,
        FUNC_6(VAR_0) ? VAR_14 : VAR_15);
    VAR_19 = (int) FUNC_8(VAR_11.hEdit, VAR_10, 0, 0);
    VAR_19 = (FUNC_5(VAR_19) == FUNC_7(VAR_19)) ? VAR_15 : VAR_14;
    FUNC_2(VAR_17, VAR_2, VAR_19);
    FUNC_2(VAR_17, VAR_1, VAR_19);
    FUNC_2(VAR_17, VAR_3, VAR_19);

    FUNC_2(VAR_17, VAR_5,
        FUNC_4(VAR_11.hEdit) ? VAR_14 : VAR_15);
    FUNC_1(VAR_11.hMainWnd);
}
