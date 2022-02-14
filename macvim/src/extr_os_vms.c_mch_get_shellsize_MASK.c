
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; } ;
struct TYPE_6__ {TYPE_1__ y; } ;
struct TYPE_7__ {TYPE_2__ x; int width; } ;
typedef TYPE_3__ TT_MODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_0 () ;

int
FUNC_1(void)
{
    TT_MODE VAR_3;

    VAR_3 = FUNC_0();
    VAR_0 = VAR_3.width;
    VAR_2 = VAR_3.x.y.length;
    return VAR_1;
}
