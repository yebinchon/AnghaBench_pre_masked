
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int matrix; int ** domain; } ;
struct TYPE_10__ {TYPE_1__ f; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
typedef TYPE_3__ fz_shade ;
struct TYPE_12__ {int y1; int x1; int y0; int x0; } ;
typedef TYPE_4__ fz_rect ;
typedef int fz_context ;


 TYPE_4__ FUNC_0 (TYPE_4__,int ) ;

__attribute__((used)) static fz_rect
FUNC_1(fz_context *VAR_0, fz_shade *VAR_1)
{
 fz_rect VAR_2;
 VAR_2.x0 = VAR_1->u.f.domain[0][0];
 VAR_2.y0 = VAR_1->u.f.domain[0][1];
 VAR_2.x1 = VAR_1->u.f.domain[1][0];
 VAR_2.y1 = VAR_1->u.f.domain[1][1];
 return FUNC_0(VAR_2, VAR_1->u.f.matrix);
}
