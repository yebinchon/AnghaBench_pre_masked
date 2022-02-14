
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwExStyle; } ;
struct TYPE_5__ {TYPE_1__ wi; int hWnd; } ;
typedef int PDWORD_PTR ;
typedef TYPE_2__* PDRAW_CONTEXT ;
typedef int LPCWSTR ;
typedef int * HICON ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static HICON
FUNC_3(PDRAW_CONTEXT VAR_9)
{
    HICON VAR_10 = ((void*)0);

    FUNC_2(VAR_9->hWnd, VAR_7, VAR_4, 0, VAR_6, 1000, (PDWORD_PTR)&VAR_10);

    if (!VAR_10)
        FUNC_2(VAR_9->hWnd, VAR_7, VAR_3, 0, VAR_6, 1000, (PDWORD_PTR)&VAR_10);

    if (!VAR_10)
        FUNC_2(VAR_9->hWnd, VAR_7, VAR_2, 0, VAR_6, 1000, (PDWORD_PTR)&VAR_10);

    if (!VAR_10)
        VAR_10 = (HICON)FUNC_0(VAR_9->hWnd, VAR_1);

    if (!VAR_10)
        VAR_10 = (HICON)FUNC_0(VAR_9->hWnd, VAR_0);


    if (!VAR_10 && !(VAR_9->wi.dwExStyle & VAR_8))
        VAR_10 = FUNC_1(((void*)0), (LPCWSTR)VAR_5);

    return VAR_10;
}
