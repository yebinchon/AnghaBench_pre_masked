
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int r; int i; int ptr; } ;
struct TYPE_7__ {TYPE_1__ pir; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
typedef TYPE_3__ fz_store_hash ;
struct TYPE_9__ {int rect; int l2factor; int image; } ;
typedef TYPE_4__ fz_image_key ;
typedef int fz_context ;



__attribute__((used)) static int
FUNC_0(fz_context *VAR_0, fz_store_hash *VAR_1, void *VAR_2)
{
 fz_image_key *VAR_3 = (fz_image_key *)VAR_2;
 VAR_1->u.pir.ptr = VAR_3->image;
 VAR_1->u.pir.i = VAR_3->l2factor;
 VAR_1->u.pir.r = VAR_3->rect;
 return 1;
}
