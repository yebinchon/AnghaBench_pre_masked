
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


struct TYPE_12__ {int m; } ;
struct TYPE_11__ {int m; } ;
struct TYPE_10__ {int m; } ;
struct TYPE_9__ {int m; } ;
struct matrix4 {TYPE_4__ t; TYPE_3__ z; TYPE_2__ y; TYPE_1__ x; } ;
struct TYPE_15__ {float w; int m; } ;
struct TYPE_14__ {float w; int m; } ;
struct TYPE_13__ {float w; int m; } ;
struct TYPE_16__ {float w; int m; } ;
struct matrix3 {TYPE_7__ t; TYPE_6__ z; TYPE_5__ y; TYPE_8__ x; } ;



void FUNC_0(struct matrix3 *VAR_0, const struct matrix4 *VAR_1)
{
 VAR_0->x.m = VAR_1->x.m;
 VAR_0->y.m = VAR_1->y.m;
 VAR_0->z.m = VAR_1->z.m;
 VAR_0->t.m = VAR_1->t.m;
 VAR_0->x.w = 0.0f;
 VAR_0->y.w = 0.0f;
 VAR_0->z.w = 0.0f;
 VAR_0->t.w = 0.0f;
}
