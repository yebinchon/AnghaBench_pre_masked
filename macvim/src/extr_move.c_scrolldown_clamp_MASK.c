
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ w_topfill; int w_topline; int w_wrow; scalar_t__ w_width; int w_cline_height; int w_virtcol; int w_height; int w_valid; int w_botline; scalar_t__ w_p_wrap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,int*,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void
FUNC_9()
{
    int VAR_6;





    if (VAR_4->w_topline <= 1



     )
 return;

    FUNC_7();






    VAR_6 = VAR_4->w_wrow;






    VAR_6 += FUNC_4(VAR_4->w_topline - 1);

    if (VAR_4->w_p_wrap



     )
    {
 FUNC_6();
 FUNC_8();
 VAR_6 += VAR_4->w_cline_height - 1 -
     VAR_4->w_virtcol / FUNC_0(VAR_4);
    }
    if (VAR_6 < VAR_4->w_height - VAR_5)
    {
 --VAR_4->w_topline;




 --VAR_4->w_botline;
 VAR_4->w_valid &= ~(VAR_3|VAR_2|VAR_1);
    }
}
