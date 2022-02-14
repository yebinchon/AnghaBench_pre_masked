
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_5__ {scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* PRECT ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(HWND VAR_6, PRECT VAR_7)
{
    RECT VAR_8;

    if (FUNC_1(VAR_5)) {
        FUNC_3(VAR_5, VAR_2, 0, 0);
        FUNC_0(VAR_5, &VAR_8);
        VAR_7->top = VAR_8.bottom+3;
        VAR_7->bottom -= VAR_8.bottom+3;
    }
    if (FUNC_1(VAR_4)) {
        int VAR_9[] = {300, 500};

        FUNC_3(VAR_4, VAR_2, 0, 0);
        FUNC_3(VAR_4, VAR_0, 2, (LPARAM)&VAR_9);
        FUNC_0(VAR_4, &VAR_8);
        VAR_7->bottom -= VAR_8.bottom;
    }
    FUNC_2(VAR_3, VAR_7->left-1,VAR_7->top-1,VAR_7->right+2,VAR_7->bottom+1, VAR_1);
}
