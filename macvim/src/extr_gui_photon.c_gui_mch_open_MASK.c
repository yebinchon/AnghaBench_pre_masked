
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vimWindow; int back_pixel; int def_back_pixel; int norm_pixel; int def_norm_pixel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int
FUNC_5(void)
{
    VAR_4.norm_pixel = VAR_2;
    VAR_4.back_pixel = VAR_3;

    FUNC_4();

    FUNC_1();
    VAR_4.def_norm_pixel = VAR_4.norm_pixel;
    VAR_4.def_back_pixel = VAR_4.back_pixel;

    FUNC_3();

    if (VAR_5 != -1 && VAR_6 != -1)
 FUNC_2(VAR_5, VAR_6);

    return (FUNC_0(VAR_4.vimWindow) == 0) ? VAR_1 : VAR_0;
}
