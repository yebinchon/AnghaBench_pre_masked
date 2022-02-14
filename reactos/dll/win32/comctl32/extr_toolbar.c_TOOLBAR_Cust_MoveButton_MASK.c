
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int tbInfo; int tbHwnd; } ;
struct TYPE_6__ {int hdr; scalar_t__ iItem; } ;
struct TYPE_5__ {int btn; } ;
typedef TYPE_1__* PCUSTOMBUTTON ;
typedef TYPE_2__ NMTOOLBARW ;
typedef int NMHDR ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef TYPE_3__ CUSTDLG_INFO ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_5(const CUSTDLG_INFO *VAR_15, HWND VAR_16, INT VAR_17, INT VAR_18)
{
    NMTOOLBARW VAR_19;

 FUNC_4("index from %d, index to %d\n", VAR_17, VAR_18);

    if (VAR_17 == VAR_18)
        return;



    VAR_19.iItem = VAR_17;
    if (FUNC_3(&VAR_19.hdr, VAR_15->tbInfo, VAR_10))
    {
        PCUSTOMBUTTON VAR_20;
        NMHDR VAR_21;
        HWND VAR_22 = FUNC_1(VAR_16, VAR_3);
        int VAR_23 = FUNC_2(VAR_22, VAR_5, 0, 0);

        VAR_20 = (PCUSTOMBUTTON)FUNC_2(VAR_22, VAR_6, VAR_17, 0);

        FUNC_2(VAR_22, VAR_4, VAR_17, 0);
        FUNC_2(VAR_22, VAR_7, VAR_18, 0);
        FUNC_2(VAR_22, VAR_9, VAR_18, (LPARAM)VAR_20);
        FUNC_2(VAR_22, VAR_8, VAR_18, 0);

        if (VAR_18 <= 0)
            FUNC_0(FUNC_1(VAR_16,VAR_2), VAR_0);
        else
            FUNC_0(FUNC_1(VAR_16,VAR_2), VAR_14);


        if (VAR_18 >= (VAR_23 - 2))
            FUNC_0(FUNC_1(VAR_16,VAR_1), VAR_0);
        else
            FUNC_0(FUNC_1(VAR_16,VAR_1), VAR_14);

        FUNC_2(VAR_15->tbHwnd, VAR_12, VAR_17, 0);
        FUNC_2(VAR_15->tbHwnd, VAR_13, VAR_18, (LPARAM)&(VAR_20->btn));

        FUNC_3(&VAR_21, VAR_15->tbInfo, VAR_11);
    }
}
