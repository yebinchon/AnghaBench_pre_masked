
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ coladd; scalar_t__ col; int lnum; } ;
typedef TYPE_1__ pos_T ;
typedef scalar_t__ colnr_T ;
struct TYPE_10__ {TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 TYPE_7__* VAR_4 ;
 int FUNC_1 (TYPE_1__,TYPE_1__) ;
 scalar_t__ FUNC_2 (TYPE_1__,TYPE_1__) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int) ;
 char* VAR_5 ;

__attribute__((used)) static int
FUNC_5()
{
    pos_T *VAR_6;

    if (*VAR_5 == 'e' && !FUNC_1(VAR_2, VAR_4->w_cursor))
    {
 if (FUNC_2(VAR_2, VAR_4->w_cursor))
     VAR_6 = &VAR_4->w_cursor;
 else
     VAR_6 = &VAR_2;





 if (VAR_6->col > 0)
 {
     --VAR_6->col;



 }
 else if (VAR_6->lnum > 1)
 {
     --VAR_6->lnum;
     VAR_6->col = (colnr_T)FUNC_0(FUNC_4(VAR_6->lnum));
     return VAR_1;
 }
    }
    return VAR_0;
}
