
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lnum; } ;
typedef TYPE_1__ pos_T ;
typedef int colnr_T ;
typedef int char_u ;
struct TYPE_6__ {int b_p_inde; } ;
struct TYPE_5__ {int w_set_curswant; int w_curswant; TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5()
{
    int VAR_8;
    pos_T VAR_9;
    colnr_T VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13 = FUNC_4((char_u *)"indentexpr",
           VAR_1);



    VAR_9 = VAR_5->w_cursor;
    VAR_10 = VAR_5->w_curswant;
    VAR_11 = VAR_5->w_set_curswant;
    FUNC_3(VAR_3, VAR_5->w_cursor.lnum);
    if (VAR_13)
 ++VAR_6;
    ++VAR_7;
    VAR_8 = FUNC_1(VAR_4->b_p_inde);
    if (VAR_13)
 --VAR_6;
    --VAR_7;




    VAR_12 = VAR_2;
    VAR_2 = VAR_0;
    VAR_5->w_cursor = VAR_9;
    VAR_5->w_curswant = VAR_10;
    VAR_5->w_set_curswant = VAR_11;
    FUNC_0();
    VAR_2 = VAR_12;


    if (VAR_8 < 0)
 VAR_8 = FUNC_2();

    return VAR_8;
}
