
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int tbInfo; int tbHwnd; } ;
struct TYPE_7__ {int iItem; int hdr; } ;
struct TYPE_6__ {int btn; } ;
typedef TYPE_1__* PCUSTOMBUTTON ;
typedef TYPE_2__ NMTOOLBARW ;
typedef int NMHDR ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef int CUSTOMBUTTON ;
typedef TYPE_3__ CUSTDLG_INFO ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static void FUNC_5(const CUSTDLG_INFO *VAR_11, HWND VAR_12, INT VAR_13, INT VAR_14)
{
    NMTOOLBARW VAR_15;

    FUNC_4("Add: nIndexAvail %d, nIndexTo %d\n", VAR_13, VAR_14);



    VAR_15.iItem = VAR_13;
    if (FUNC_3(&VAR_15.hdr, VAR_11->tbInfo, VAR_8))
    {
        PCUSTOMBUTTON VAR_16;
        NMHDR VAR_17;
        HWND VAR_18 = FUNC_1(VAR_12, VAR_1);
        HWND VAR_19 = FUNC_1(VAR_12, VAR_0);
        int VAR_20 = FUNC_2(VAR_19, VAR_3, 0, 0);

        VAR_16 = (PCUSTOMBUTTON)FUNC_2(VAR_19, VAR_4, VAR_13, 0);

        if (VAR_13 != 0)
        {

            FUNC_2(VAR_19, VAR_2, VAR_13, 0);
            if (VAR_13 == VAR_20-1)
                FUNC_2(VAR_19, VAR_6, VAR_13-1 , 0);
            else
                FUNC_2(VAR_19, VAR_6, VAR_13 , 0);
        }
        else
        {
            PCUSTOMBUTTON VAR_21;


            VAR_21 = FUNC_0(sizeof(CUSTOMBUTTON));
            *VAR_21 = *VAR_16;
            VAR_16 = VAR_21;
        }


        FUNC_2(VAR_18, VAR_5, VAR_14, 0);
        FUNC_2(VAR_18, VAR_7, VAR_14, (LPARAM)VAR_16);

        FUNC_2(VAR_11->tbHwnd, VAR_10, VAR_14, (LPARAM)&(VAR_16->btn));

        FUNC_3(&VAR_17, VAR_11->tbInfo, VAR_9);
    }
}
