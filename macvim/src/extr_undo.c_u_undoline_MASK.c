
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int long_u ;
typedef int linenr_T ;
typedef int colnr_T ;
typedef int char_u ;
struct TYPE_5__ {scalar_t__ ml_line_count; } ;
struct TYPE_8__ {scalar_t__ b_u_line_lnum; int b_u_line_colnr; int * b_u_line_ptr; TYPE_1__ b_ml; } ;
struct TYPE_6__ {scalar_t__ lnum; int col; } ;
struct TYPE_7__ {TYPE_2__ w_cursor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 int * FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *) ;

void
FUNC_8()
{
    colnr_T VAR_6;
    char_u *VAR_7;

    if (VAR_5)
 return;

    if (VAR_3->b_u_line_ptr == ((void*)0)
   || VAR_3->b_u_line_lnum > VAR_3->b_ml.ml_line_count)
    {
 FUNC_0();
 return;
    }


    if (FUNC_6(VAR_3->b_u_line_lnum - 1,
         VAR_3->b_u_line_lnum + 1, (linenr_T)0, VAR_1) == VAR_0)
 return;
    VAR_7 = FUNC_5(VAR_3->b_u_line_lnum);
    if (VAR_7 == ((void*)0))
    {
 FUNC_3((long_u)0);
 return;
    }
    FUNC_4(VAR_3->b_u_line_lnum, VAR_3->b_u_line_ptr, VAR_2);
    FUNC_1(VAR_3->b_u_line_lnum, 0);
    FUNC_7(VAR_3->b_u_line_ptr);
    VAR_3->b_u_line_ptr = VAR_7;

    VAR_6 = VAR_3->b_u_line_colnr;
    if (VAR_4->w_cursor.lnum == VAR_3->b_u_line_lnum)
 VAR_3->b_u_line_colnr = VAR_4->w_cursor.col;
    VAR_4->w_cursor.col = VAR_6;
    VAR_4->w_cursor.lnum = VAR_3->b_u_line_lnum;
    FUNC_2();
}
