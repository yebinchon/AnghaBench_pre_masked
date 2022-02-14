
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int linenr_T ;
struct TYPE_7__ {int ml_line_count; } ;
struct TYPE_10__ {TYPE_1__ b_ml; } ;
struct TYPE_8__ {int lnum; } ;
struct TYPE_9__ {int w_topline; int w_height; int w_botline; int w_topfill; int w_filler_rows; int w_valid; TYPE_2__ w_cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int,int*,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;

void
FUNC_6()
{
    int VAR_9 = 0;
    linenr_T VAR_10;
    int VAR_11 = 0;
    linenr_T VAR_12;
    int VAR_13, VAR_14;
    linenr_T VAR_15;
    int VAR_16;





    VAR_13 = VAR_8;
    VAR_14 = VAR_8;







    if (VAR_6->w_topline == 1)
    {
 VAR_13 = 0;
 VAR_16 = VAR_6->w_height / 2;
 if (VAR_14 > VAR_16)
     VAR_14 = VAR_16;
    }
    FUNC_5();
    if (VAR_6->w_botline == VAR_5->b_ml.ml_line_count + 1



     )
    {
 VAR_14 = 0;
 VAR_16 = (VAR_6->w_height - 1) / 2;
 if (VAR_13 > VAR_16)
     VAR_13 = VAR_16;
    }





    VAR_15 = VAR_6->w_cursor.lnum;
    if (VAR_15 >= VAR_6->w_topline + VAR_13
     && VAR_15 < VAR_6->w_botline - VAR_14



     )
 return;







    VAR_10 = VAR_6->w_topline;
    VAR_12 = VAR_6->w_botline - 1;





    while ((VAR_9 < VAR_13 || VAR_11 < VAR_14) && VAR_10 < VAR_12)
    {
 if (VAR_11 < VAR_14 && (VAR_11 <= VAR_9 || VAR_9 >= VAR_13))
 {





  VAR_11 += FUNC_3(VAR_12);
     --VAR_12;
 }
 if (VAR_9 < VAR_13 && (VAR_9 < VAR_11 || VAR_11 >= VAR_14))
 {






  VAR_9 += FUNC_3(VAR_10);







     ++VAR_10;
 }
    }
    if (VAR_10 == VAR_12 || VAR_12 == 0)
 VAR_6->w_cursor.lnum = VAR_10;
    else if (VAR_10 > VAR_12)
 VAR_6->w_cursor.lnum = VAR_12;
    else
    {
 if (VAR_15 < VAR_10 && VAR_6->w_topline > 1)
 {
     VAR_6->w_cursor.lnum = VAR_10;
     VAR_6->w_valid &=
       ~(VAR_4|VAR_3|VAR_0|VAR_1);
 }
 if (VAR_15 > VAR_12 && VAR_6->w_botline <= VAR_5->b_ml.ml_line_count)
 {
     VAR_6->w_cursor.lnum = VAR_12;
     VAR_6->w_valid &=
       ~(VAR_4|VAR_3|VAR_0|VAR_1);
 }
    }
    VAR_6->w_valid |= VAR_2;
}
