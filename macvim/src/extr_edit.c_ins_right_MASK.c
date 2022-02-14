
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ml_line_count; } ;
struct TYPE_8__ {TYPE_1__ b_ml; } ;
struct TYPE_6__ {scalar_t__ lnum; scalar_t__ col; } ;
struct TYPE_7__ {TYPE_2__ w_cursor; void* w_set_curswant; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int * FUNC_9 (int ,char) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static void
FUNC_11()
{




    FUNC_7();
    if (FUNC_1() != VAR_2



     )
    {
 FUNC_5(&VAR_5->w_cursor);
 VAR_5->w_set_curswant = VAR_3;





 {





  ++VAR_5->w_cursor.col;
 }






    }


    else if (FUNC_9(VAR_8, ']') != ((void*)0)
     && VAR_5->w_cursor.lnum < VAR_4->b_ml.ml_line_count)
    {
 FUNC_5(&VAR_5->w_cursor);
 VAR_5->w_set_curswant = VAR_3;
 ++VAR_5->w_cursor.lnum;
 VAR_5->w_cursor.col = 0;
    }
    else
 FUNC_8();
}
