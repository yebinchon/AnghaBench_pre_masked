
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ colnr_T ;
struct TYPE_3__ {scalar_t__ col; } ;
struct TYPE_4__ {TYPE_1__ w_cursor; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 int VAR_9 ;

 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 ()
{
    int VAR_13;

    if (VAR_11->w_cursor.col != 0 &&
 (VAR_11->w_cursor.col + 1 == (colnr_T)FUNC_0(FUNC_4())))
 return;

    if (!VAR_11->w_cursor.col && VAR_12)
 return;

    if (VAR_12)
 FUNC_1();
    else
 FUNC_3();

    switch (FUNC_2())
    {
 case 138:
  VAR_13 = VAR_0;
  break;
 case 137:
  VAR_13 = VAR_1;
  break;
 case 130:
  VAR_13 = VAR_8;
  break;
 case 136:
  VAR_13 = VAR_2;
  break;
 case 129:
  VAR_13 = VAR_9;
  break;
 case 135:
  VAR_13 = VAR_3;
  break;
 case 128:
  VAR_13 = VAR_10;
  break;
 case 132:
  VAR_13 = VAR_7;
  break;
 case 134:
  VAR_13 = VAR_4;
  break;
 case 133:
  VAR_13 = VAR_5;
  break;
 case 131:
  VAR_13 = VAR_6;
  break;
 default:
  VAR_13 = 0;
    }

    if (VAR_13)
 FUNC_5(VAR_13);

    if (VAR_12)
 FUNC_3();
    else
 FUNC_1();
}
