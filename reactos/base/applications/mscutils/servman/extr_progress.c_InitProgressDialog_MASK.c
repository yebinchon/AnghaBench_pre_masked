
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_3__ {int hProgress; int hDlg; } ;
typedef TYPE_1__* PPROGRESS_DATA ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *,int ,int *,TYPE_1__*,int ,int *) ;

__attribute__((used)) static BOOL
FUNC_5(HWND VAR_7,
                   UINT VAR_8,
                   WPARAM VAR_9,
                   LPARAM VAR_10)
{
    PPROGRESS_DATA VAR_11 = (PPROGRESS_DATA)VAR_10;
    HANDLE VAR_12;

    VAR_11->hDlg = VAR_7;


    VAR_11->hProgress = FUNC_1(VAR_7,
                                         VAR_2);
    if (!VAR_11->hProgress)
        return VAR_1;


    FUNC_3(VAR_11->hProgress,
                 VAR_3,
                 0,
                 FUNC_2(0, VAR_5));


    FUNC_3(VAR_11->hProgress,
                 VAR_4,
                 (WPARAM)1,
                 0);


    VAR_12 = (HANDLE)FUNC_4(((void*)0), 0, &VAR_0, VAR_11, 0, ((void*)0));
    if (!VAR_12) return VAR_1;

    FUNC_0(VAR_12);

    return VAR_6;
}
