
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* pniels_t ;
typedef TYPE_3__* curve448_point_t ;
struct TYPE_8__ {int z; int t; int y; int x; } ;
struct TYPE_7__ {int z; TYPE_1__* n; } ;
struct TYPE_6__ {int c; int b; int a; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(pniels_t VAR_1, const curve448_point_t VAR_2)
{
    FUNC_2(VAR_1->n->a, VAR_2->y, VAR_2->x);
    FUNC_0(VAR_1->n->b, VAR_2->x, VAR_2->y);
    FUNC_1(VAR_1->n->c, VAR_2->t, 2 * VAR_0);
    FUNC_0(VAR_1->z, VAR_2->z, VAR_2->z);
}
