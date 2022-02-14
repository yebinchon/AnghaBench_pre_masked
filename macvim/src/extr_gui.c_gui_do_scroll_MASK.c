
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ lnum; } ;
struct TYPE_11__ {scalar_t__ w_topline; int w_topfill; scalar_t__ w_scbind_pos; scalar_t__ w_redr_type; TYPE_2__ w_cursor; scalar_t__ w_lines_valid; int w_buffer; int w_curswant; } ;
typedef TYPE_1__ win_T ;
typedef TYPE_2__ pos_T ;
typedef scalar_t__ linenr_T ;
struct TYPE_13__ {scalar_t__ dragged_sb; int * dragged_wp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (TYPE_2__,TYPE_2__) ;
 TYPE_1__* VAR_7 ;
 TYPE_4__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (long,int ) ;
 int FUNC_7 (long,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int
FUNC_11()
{
    win_T *VAR_11, *VAR_12;
    int VAR_13;
    long VAR_14;
    pos_T VAR_15;
    linenr_T VAR_16;




    for (VAR_11 = VAR_7, VAR_13 = 0; VAR_13 < VAR_5; VAR_11 = FUNC_0(VAR_11), VAR_13++)
 if (VAR_11 == ((void*)0))
     break;
    if (VAR_11 == ((void*)0))

 return VAR_0;




    VAR_14 = (long)VAR_10 + 1 - (long)VAR_11->w_topline;
    if (VAR_14 == 0)
 return VAR_0;

    VAR_12 = VAR_6;
    VAR_16 = VAR_11->w_topline;



    VAR_15 = VAR_11->w_cursor;
    VAR_6 = VAR_11;
    VAR_4 = VAR_11->w_buffer;
    if (VAR_14 < 0)
 FUNC_6(-VAR_14, VAR_8.dragged_wp == ((void*)0));
    else
 FUNC_7(VAR_14, VAR_8.dragged_wp == ((void*)0));



    if (VAR_8.dragged_sb == VAR_2)
 VAR_8.dragged_wp = ((void*)0);

    if (VAR_16 != VAR_11->w_topline



     )
    {
 if (VAR_9 != 0)
 {
     FUNC_2();
     FUNC_9();
 }
 if (VAR_15.lnum != VAR_11->w_cursor.lnum)
     FUNC_1(VAR_11->w_curswant);



    }


    FUNC_10();

    VAR_6 = VAR_12;
    VAR_4 = VAR_12->w_buffer;





    if (VAR_16 != VAR_11->w_topline
     || VAR_11->w_redr_type != 0



     )
    {
 int VAR_17 = VAR_3;
 if (VAR_11->w_redr_type < VAR_17)
     VAR_11->w_redr_type = VAR_17;
 FUNC_8(VAR_11);
    }







    return (VAR_11 == VAR_6 && !FUNC_3(VAR_6->w_cursor, VAR_15));
}
