
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_2__ {int ** def_val; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;

char_u *
FUNC_1()
{
    int VAR_2;

    VAR_2 = FUNC_0((char_u *)"hl");
    if (VAR_2 >= 0)
 return VAR_1[VAR_2].def_val[VAR_0];
    return (char_u *)((void*)0);
}
