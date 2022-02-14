
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ linenr_T ;
typedef long colnr_T ;
struct TYPE_5__ {scalar_t__ ml_line_count; } ;
struct TYPE_8__ {TYPE_1__ b_ml; } ;
struct TYPE_6__ {scalar_t__ lnum; } ;
struct TYPE_7__ {scalar_t__ w_topline; scalar_t__ w_botline; TYPE_2__ w_cursor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 long FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int ,int ) ;

__attribute__((used)) static linenr_T
FUNC_3()
{
    linenr_T VAR_4 = 0;




    if (FUNC_2(VAR_3, VAR_0) == ((void*)0)
     && VAR_2->w_topline <= VAR_2->w_cursor.lnum
     && VAR_2->w_botline > VAR_2->w_cursor.lnum
     && VAR_2->w_botline <= VAR_1->b_ml.ml_line_count + 1)
    {
 linenr_T VAR_5;
 colnr_T VAR_6;
 long VAR_7 = 0;




 for (VAR_5 = VAR_2->w_topline; VAR_5 < VAR_2->w_botline; ++VAR_5)
 {
     VAR_6 = FUNC_1(VAR_5);
     if (VAR_6 > (colnr_T)VAR_7)
     {
  VAR_7 = VAR_6;
  VAR_4 = VAR_5;
     }
     else if (VAR_6 == (colnr_T)VAR_7
      && FUNC_0((int)(VAR_5 - VAR_2->w_cursor.lnum))
         < FUNC_0((int)(VAR_4 - VAR_2->w_cursor.lnum)))
  VAR_4 = VAR_5;
 }
    }
    else

 VAR_4 = VAR_2->w_cursor.lnum;

    return VAR_4;
}
