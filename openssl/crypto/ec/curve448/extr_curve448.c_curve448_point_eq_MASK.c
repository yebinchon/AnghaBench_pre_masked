
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mask_t ;
typedef int gf ;
typedef TYPE_1__* curve448_point_t ;
typedef int c448_bool_t ;
struct TYPE_4__ {int x; int y; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

c448_bool_t FUNC_3(const curve448_point_t VAR_0,
                              const curve448_point_t VAR_1)
{
    mask_t VAR_2;
    gf VAR_3, VAR_4;


    FUNC_1(VAR_3, VAR_0->y, VAR_1->x);
    FUNC_1(VAR_4, VAR_1->y, VAR_0->x);
    VAR_2 = FUNC_0(VAR_3, VAR_4);

    return FUNC_2(VAR_2);
}
