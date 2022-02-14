
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int guicolor_T ;
struct TYPE_3__ {int red; int green; int blue; } ;
typedef TYPE_1__ RGBColor ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

void
FUNC_4(guicolor_T VAR_0)
{
    RGBColor VAR_1;

    VAR_1.red = FUNC_3(VAR_0) * 0x0101;
    VAR_1.green = FUNC_1(VAR_0) * 0x0101;
    VAR_1.blue = FUNC_0(VAR_0) * 0x0101;

    FUNC_2(&VAR_1);
}
