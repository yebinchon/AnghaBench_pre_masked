
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {float w; int m; } ;
struct TYPE_16__ {int m; } ;
struct TYPE_14__ {int m; } ;
struct TYPE_12__ {int m; } ;
struct matrix4 {TYPE_3__ t; TYPE_8__ z; TYPE_6__ y; TYPE_4__ x; } ;
struct TYPE_10__ {int m; } ;
struct TYPE_9__ {int m; } ;
struct TYPE_15__ {int m; } ;
struct TYPE_13__ {int m; } ;
struct matrix3 {TYPE_2__ t; TYPE_1__ z; TYPE_7__ y; TYPE_5__ x; } ;



void FUNC_0(struct matrix4 *VAR_0, const struct matrix3 *VAR_1)
{
 VAR_0->x.m = VAR_1->x.m;
 VAR_0->y.m = VAR_1->y.m;
 VAR_0->z.m = VAR_1->z.m;
 VAR_0->t.m = VAR_1->t.m;
 VAR_0->t.w = 1.0f;
}
