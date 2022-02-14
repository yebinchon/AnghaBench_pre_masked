
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ colnr_T ;
typedef int char_u ;
struct TYPE_4__ {int ml_line_count; } ;
struct TYPE_6__ {TYPE_1__ b_ml; } ;
struct TYPE_5__ {int w_cursor; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 TYPE_3__* VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_2 () ;
 void* VAR_11 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 () ;
 int VAR_14 ;

int
FUNC_6()
{
    if (VAR_8)
    {
 if (FUNC_5() == VAR_4)
 {
     VAR_8 = VAR_1;
     VAR_11 = VAR_1;
 }
 VAR_2 = VAR_10->w_cursor;
 VAR_3 = (colnr_T)FUNC_3(FUNC_4());
 VAR_7 = 0;







 FUNC_1();
 FUNC_0((char_u *)"1i");
 VAR_12 = 2;
    }
    else if (VAR_11)
    {
 if (FUNC_5() == VAR_4)
     VAR_11 = VAR_1;
    }






    return (VAR_8 || VAR_11 ? VAR_0 : VAR_4);
}
