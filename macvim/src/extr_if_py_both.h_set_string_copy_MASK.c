
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * v_string; } ;
struct TYPE_5__ {TYPE_1__ vval; } ;
typedef TYPE_2__ typval_T ;
typedef int char_u ;


 int FUNC_0 () ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(char_u *VAR_0, typval_T *VAR_1)
{
    VAR_1->vval.v_string = FUNC_1(VAR_0);
    if (VAR_1->vval.v_string == ((void*)0))
    {
 FUNC_0();
 return -1;
    }
    return 0;
}
