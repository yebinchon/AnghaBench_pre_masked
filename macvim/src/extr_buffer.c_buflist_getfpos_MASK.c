
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ col; int lnum; } ;
typedef TYPE_2__ pos_T ;
struct TYPE_5__ {scalar_t__ coladd; scalar_t__ col; int lnum; } ;
struct TYPE_7__ {int w_set_curswant; TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_3()
{
    pos_T *VAR_4;

    VAR_4 = FUNC_0(VAR_1);

    VAR_2->w_cursor.lnum = VAR_4->lnum;
    FUNC_2();

    if (VAR_3)
 VAR_2->w_cursor.col = 0;
    else
    {
 VAR_2->w_cursor.col = VAR_4->col;
 FUNC_1();



 VAR_2->w_set_curswant = VAR_0;
    }
}
