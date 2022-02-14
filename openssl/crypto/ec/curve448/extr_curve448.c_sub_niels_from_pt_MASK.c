
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* niels_t ;
typedef int gf ;
typedef TYPE_2__* curve448_point_t ;
struct TYPE_6__ {int t; int y; int x; int z; } ;
struct TYPE_5__ {int c; int a; int b; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(curve448_point_t VAR_0, const niels_t VAR_1,
                              int VAR_2)
{
    gf VAR_3, VAR_4, VAR_5;

    FUNC_2(VAR_4, VAR_0->y, VAR_0->x);
    FUNC_1(VAR_3, VAR_1->b, VAR_4);
    FUNC_0(VAR_4, VAR_0->x, VAR_0->y);
    FUNC_1(VAR_0->y, VAR_1->a, VAR_4);
    FUNC_1(VAR_0->x, VAR_1->c, VAR_0->t);
    FUNC_0(VAR_5, VAR_3, VAR_0->y);
    FUNC_2(VAR_4, VAR_0->y, VAR_3);
    FUNC_0(VAR_0->y, VAR_0->z, VAR_0->x);
    FUNC_2(VAR_3, VAR_0->z, VAR_0->x);
    FUNC_1(VAR_0->z, VAR_3, VAR_0->y);
    FUNC_1(VAR_0->x, VAR_0->y, VAR_4);
    FUNC_1(VAR_0->y, VAR_3, VAR_5);
    if (!VAR_2)
        FUNC_1(VAR_0->t, VAR_4, VAR_5);
}
