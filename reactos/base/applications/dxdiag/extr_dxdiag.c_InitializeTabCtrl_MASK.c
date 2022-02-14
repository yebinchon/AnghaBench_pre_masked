
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {scalar_t__ NumSoundAdapter; scalar_t__ NumDisplayAdapter; void** hDialogs; int hTabCtrl; } ;
typedef TYPE_1__* PDXDIAG_CONTEXT ;
typedef int LPARAM ;
typedef int HWND ;


 void* FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_16 ;
 int VAR_17 ;

VOID
FUNC_8(HWND VAR_18, PDXDIAG_CONTEXT VAR_19)
{

    VAR_17 = FUNC_2(VAR_18, VAR_1);
    VAR_19->hTabCtrl = VAR_17;


    VAR_19->hDialogs[0] = FUNC_0(VAR_16, FUNC_6(VAR_6), VAR_19->hTabCtrl, VAR_15, (LPARAM)VAR_19); FUNC_1(VAR_19->hDialogs[0]);
    VAR_19->hDialogs[1] = FUNC_0(VAR_16, FUNC_6(VAR_4), VAR_19->hTabCtrl, VAR_13, (LPARAM)VAR_19); FUNC_1(VAR_19->hDialogs[1]);
    VAR_19->hDialogs[2] = FUNC_0(VAR_16, FUNC_6(VAR_3), VAR_19->hTabCtrl, VAR_12, (LPARAM)VAR_19); FUNC_1(VAR_19->hDialogs[2]);
    VAR_19->hDialogs[3] = FUNC_0(VAR_16, FUNC_6(VAR_5), VAR_19->hTabCtrl, VAR_14, (LPARAM)VAR_19); FUNC_1(VAR_19->hDialogs[3]);
    VAR_19->hDialogs[4] = FUNC_0(VAR_16, FUNC_6(VAR_2), VAR_19->hTabCtrl, VAR_0, (LPARAM)VAR_19); FUNC_1(VAR_19->hDialogs[4]);


    FUNC_5(VAR_17, 0, FUNC_6(VAR_11));
    FUNC_4(VAR_19);
    FUNC_3(VAR_19);
    FUNC_5(VAR_17, VAR_19->NumDisplayAdapter + VAR_19->NumSoundAdapter + 1, FUNC_6(VAR_9));
    FUNC_5(VAR_17, VAR_19->NumDisplayAdapter + VAR_19->NumSoundAdapter + 2, FUNC_6(VAR_8));
    FUNC_5(VAR_17, VAR_19->NumDisplayAdapter + VAR_19->NumSoundAdapter + 3, FUNC_6(VAR_10));
    FUNC_5(VAR_17, VAR_19->NumDisplayAdapter + VAR_19->NumSoundAdapter + 4, FUNC_6(VAR_7));
    FUNC_7(VAR_19);
}
