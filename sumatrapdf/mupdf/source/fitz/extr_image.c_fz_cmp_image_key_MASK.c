
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;
struct TYPE_4__ {scalar_t__ image; scalar_t__ l2factor; TYPE_1__ rect; } ;
typedef TYPE_2__ fz_image_key ;
typedef int fz_context ;



__attribute__((used)) static int
FUNC_0(fz_context *VAR_0, void *VAR_1, void *VAR_2)
{
 fz_image_key *VAR_3 = (fz_image_key *)VAR_1;
 fz_image_key *VAR_4 = (fz_image_key *)VAR_2;
 return VAR_3->image == VAR_4->image && VAR_3->l2factor == VAR_4->l2factor && VAR_3->rect.x0 == VAR_4->rect.x0 && VAR_3->rect.y0 == VAR_4->rect.y0 && VAR_3->rect.x1 == VAR_4->rect.x1 && VAR_3->rect.y1 == VAR_4->rect.y1;
}
