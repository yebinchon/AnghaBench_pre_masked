
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gf ;
typedef TYPE_1__* curve448_point_t ;
struct TYPE_4__ {int t; int y; int z; int x; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(curve448_point_t VAR_1, const curve448_point_t VAR_2,
                                  int VAR_3)
{
    gf VAR_4, VAR_5, VAR_6, VAR_7;

    FUNC_2(VAR_6, VAR_2->x);
    FUNC_2(VAR_4, VAR_2->y);
    FUNC_0(VAR_7, VAR_6, VAR_4);
    FUNC_0(VAR_1->t, VAR_2->y, VAR_2->x);
    FUNC_2(VAR_5, VAR_1->t);
    FUNC_4(VAR_5, VAR_5, VAR_7, 3);
    FUNC_3(VAR_1->t, VAR_4, VAR_6);
    FUNC_2(VAR_1->x, VAR_2->z);
    FUNC_0(VAR_1->z, VAR_1->x, VAR_1->x);
    FUNC_4(VAR_4, VAR_1->z, VAR_1->t, 4);
    if (VAR_0 == 5)
        FUNC_5(VAR_4);
    FUNC_1(VAR_1->x, VAR_4, VAR_5);
    FUNC_1(VAR_1->z, VAR_1->t, VAR_4);
    FUNC_1(VAR_1->y, VAR_1->t, VAR_7);
    if (!VAR_3)
        FUNC_1(VAR_1->t, VAR_5, VAR_7);
}
