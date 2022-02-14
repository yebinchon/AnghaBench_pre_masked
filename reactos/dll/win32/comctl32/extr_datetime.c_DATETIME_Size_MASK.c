
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ left; void* bottom; void* top; void* right; } ;
struct TYPE_7__ {scalar_t__ right; scalar_t__ left; void* bottom; void* top; } ;
struct TYPE_6__ {void* right; void* left; void* bottom; void* top; } ;
struct TYPE_9__ {int dwStyle; int hwndSelf; TYPE_3__ rcDraw; TYPE_2__ checkbox; TYPE_1__ calbutton; TYPE_3__ rcClient; int hUpdown; } ;
typedef int LRESULT ;
typedef void* INT ;
typedef TYPE_4__ DATETIME_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,void*,int ,int,void*,int) ;
 int FUNC_2 (char*,void*,void*) ;

__attribute__((used)) static LRESULT
FUNC_3 (DATETIME_INFO *VAR_4, INT VAR_5, INT VAR_6)
{

    VAR_4->rcClient.bottom = VAR_6;
    VAR_4->rcClient.right = VAR_5;

    FUNC_2("Height=%d, Width=%d\n", VAR_4->rcClient.bottom, VAR_4->rcClient.right);

    VAR_4->rcDraw = VAR_4->rcClient;

    if (VAR_4->dwStyle & VAR_0) {
        FUNC_1(VAR_4->hUpdown, ((void*)0),
            VAR_4->rcClient.right-14, 0,
            15, VAR_4->rcClient.bottom - VAR_4->rcClient.top,
            VAR_2 | VAR_3);
    }
    else {


        VAR_4->calbutton.top = VAR_4->rcDraw.top;
        VAR_4->calbutton.bottom= VAR_4->rcDraw.bottom;
        VAR_4->calbutton.left = VAR_4->rcDraw.right-15;
        VAR_4->calbutton.right = VAR_4->rcDraw.right;
    }



    VAR_4->checkbox.top = VAR_4->rcDraw.top;
    VAR_4->checkbox.bottom = VAR_4->rcDraw.bottom;
    VAR_4->checkbox.left = VAR_4->rcDraw.left;
    VAR_4->checkbox.right = VAR_4->rcDraw.left + 10;

    FUNC_0(VAR_4->hwndSelf, ((void*)0), VAR_1);

    return 0;
}
