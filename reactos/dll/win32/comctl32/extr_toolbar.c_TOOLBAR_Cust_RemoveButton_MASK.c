
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int tbInfo; int tbHwnd; } ;
struct TYPE_8__ {int fsStyle; } ;
struct TYPE_9__ {TYPE_1__ btn; } ;
typedef TYPE_2__* PCUSTOMBUTTON ;
typedef int NMHDR ;
typedef int INT ;
typedef int HWND ;
typedef TYPE_3__ CUSTDLG_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(const CUSTDLG_INFO *VAR_7, HWND VAR_8, INT VAR_9)
{
    PCUSTOMBUTTON VAR_10;
    HWND VAR_11 = FUNC_1(VAR_8, VAR_1);

    FUNC_6("Remove: index %d\n", VAR_9);

    VAR_10 = (PCUSTOMBUTTON)FUNC_2(VAR_11, VAR_3, VAR_9, 0);


    if (FUNC_4(VAR_7->tbInfo, VAR_9, VAR_10))
    {
        NMHDR VAR_12;

        FUNC_2(VAR_11, VAR_2, VAR_9, 0);
        FUNC_2(VAR_11, VAR_4, VAR_9 , 0);

        FUNC_2(VAR_7->tbHwnd, VAR_6, VAR_9, 0);


        if (!(VAR_10->btn.fsStyle & VAR_0))
            FUNC_3(VAR_8, VAR_10);
        else
            FUNC_0(VAR_10);

        FUNC_5(&VAR_12, VAR_7->tbInfo, VAR_5);
    }
}
