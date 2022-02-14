
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ long_i ;
typedef int char_u ;
struct TYPE_4__ {scalar_t__ in_use; scalar_t__ starting; } ;
struct TYPE_3__ {int flags; int ** def_val; } ;


 int VAR_0 ;
 long VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_3 ;
 long FUNC_1 () ;
 long FUNC_2 () ;
 TYPE_1__* VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;

void
FUNC_3()
{
    int VAR_7;
    long VAR_8;






    VAR_7 = FUNC_0((char_u *)"title");
    if (VAR_7 >= 0 && !(VAR_4[VAR_7].flags & VAR_0))
    {





     VAR_8 = FUNC_2();
 VAR_4[VAR_7].def_val[VAR_2] = (char_u *)(long_i)VAR_8;
 VAR_6 = VAR_8;
    }
    VAR_7 = FUNC_0((char_u *)"icon");
    if (VAR_7 >= 0 && !(VAR_4[VAR_7].flags & VAR_0))
    {





     VAR_8 = FUNC_1();
 VAR_4[VAR_7].def_val[VAR_2] = (char_u *)(long_i)VAR_8;
 VAR_5 = VAR_8;
    }
}
