
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int member_0; int member_1; } ;
struct TYPE_6__ {int * pszText; void* mask; } ;
typedef TYPE_1__ TCITEM ;
typedef int TCHAR ;
typedef int LONG ;
typedef TYPE_2__ INITCOMMONCONTROLSEX ;
typedef int HWND ;
typedef int DLGPROC ;
typedef int BOOL ;


 void* FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (void*,int ) ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int,TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int ) ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_10(HWND VAR_16, LONG VAR_17)
{
    TCHAR VAR_18[256];
    TCITEM VAR_19;



    FUNC_2();






    VAR_15 = FUNC_1(VAR_16, VAR_1);
    VAR_12 = FUNC_0(VAR_11, FUNC_4(VAR_2), VAR_16, (DLGPROC)VAR_5);
    VAR_13 = FUNC_0(VAR_11, FUNC_4(VAR_3), VAR_16, (DLGPROC)VAR_6);
    VAR_14 = FUNC_0(VAR_11, FUNC_4(VAR_4), VAR_16, (DLGPROC)VAR_7);


    FUNC_8(VAR_18, FUNC_7("Page One"));
    FUNC_9(&VAR_19, 0, sizeof(TCITEM));
    VAR_19.mask = VAR_9;
    VAR_19.pszText = VAR_18;
    FUNC_6(VAR_15, 0, &VAR_19);
    FUNC_8(VAR_18, FUNC_7("Page Two"));
    FUNC_9(&VAR_19, 0, sizeof(TCITEM));
    VAR_19.mask = VAR_9;
    VAR_19.pszText = VAR_18;
    FUNC_6(VAR_15, 1, &VAR_19);
    FUNC_8(VAR_18, FUNC_7("Page Three"));
    FUNC_9(&VAR_19, 0, sizeof(TCITEM));
    VAR_19.mask = VAR_9;
    VAR_19.pszText = VAR_18;
    FUNC_6(VAR_15, 2, &VAR_19);

    FUNC_5(VAR_12, VAR_8);

    return VAR_10;
}
