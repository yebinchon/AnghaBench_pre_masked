
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bottom; scalar_t__ right; } ;
struct TYPE_4__ {scalar_t__ zoomlevel; int * hdc2; int * hdc; int saved_pages_shown; int pages_shown; scalar_t__ pageCapacity; int * pageEnds; scalar_t__ page; TYPE_1__ window; } ;
typedef int HWND ;
typedef int HBITMAP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(HWND VAR_4)
{
    HWND VAR_5 = FUNC_4(VAR_4, VAR_1);
    VAR_3.window.right = 0;
    VAR_3.window.bottom = 0;
    VAR_3.page = 0;
    FUNC_6(FUNC_5(), 0, VAR_3.pageEnds);
    VAR_3.pageEnds = ((void*)0);
    VAR_3.pageCapacity = 0;
    if (VAR_3.zoomlevel > 0)
        VAR_3.pages_shown = VAR_3.saved_pages_shown;
    if(VAR_3.hdc) {
        HBITMAP VAR_6 = FUNC_3(VAR_3.hdc, VAR_2);
        FUNC_0(VAR_3.hdc);
        FUNC_1(VAR_6);
        VAR_3.hdc = ((void*)0);
    }
    if(VAR_3.hdc2) {
        HBITMAP VAR_7 = FUNC_3(VAR_3.hdc2, VAR_2);
        FUNC_0(VAR_3.hdc2);
        FUNC_1(VAR_7);
        VAR_3.hdc2 = ((void*)0);
    }

    FUNC_7(VAR_4, VAR_0);
    FUNC_2(VAR_5);
}
