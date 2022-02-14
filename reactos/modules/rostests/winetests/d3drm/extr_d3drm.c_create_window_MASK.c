
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_2; int member_3; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int,int ,int ,scalar_t__,scalar_t__,int *,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HWND FUNC_2(void)
{
    RECT VAR_4 = {0, 0, 640, 480};

    FUNC_0(&VAR_4, VAR_2 | VAR_3, VAR_1);

    return FUNC_1("static", "d3drm_test", VAR_2 | VAR_3,
            VAR_0, VAR_0, VAR_4.right - VAR_4.left, VAR_4.bottom - VAR_4.top, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
}
