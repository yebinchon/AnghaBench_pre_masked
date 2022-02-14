
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_5__ fz_rect ;
struct TYPE_12__ {int y; int x; } ;
struct TYPE_11__ {int y; int x; } ;
struct TYPE_10__ {int y; int x; } ;
struct TYPE_9__ {int y; int x; } ;
struct TYPE_14__ {TYPE_4__ ur; TYPE_3__ ul; TYPE_2__ lr; TYPE_1__ ll; } ;
typedef TYPE_6__ fz_quad ;


 void* FUNC_0 (int ,int ,int ,int ) ;
 void* FUNC_1 (int ,int ,int ,int ) ;

fz_rect
FUNC_2(fz_quad VAR_0)
{
 fz_rect VAR_1;
 VAR_1.x0 = FUNC_1(VAR_0.ll.x, VAR_0.lr.x, VAR_0.ul.x, VAR_0.ur.x);
 VAR_1.y0 = FUNC_1(VAR_0.ll.y, VAR_0.lr.y, VAR_0.ul.y, VAR_0.ur.y);
 VAR_1.x1 = FUNC_0(VAR_0.ll.x, VAR_0.lr.x, VAR_0.ul.x, VAR_0.ur.x);
 VAR_1.y1 = FUNC_0(VAR_0.ll.y, VAR_0.lr.y, VAR_0.ul.y, VAR_0.ur.y);
 return VAR_1;
}
