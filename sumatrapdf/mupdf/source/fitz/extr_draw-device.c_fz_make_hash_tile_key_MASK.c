
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int cs; int * ctm; int has_group_alpha; int has_shape; int id; } ;
typedef TYPE_3__ tile_key ;
struct TYPE_6__ {int ptr; int * m; int has_group_alpha; int has_shape; int id; } ;
struct TYPE_7__ {TYPE_1__ im; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
typedef TYPE_4__ fz_store_hash ;
typedef int fz_context ;



__attribute__((used)) static int
FUNC_0(fz_context *VAR_0, fz_store_hash *VAR_1, void *VAR_2)
{
 tile_key *VAR_3 = VAR_2;

 VAR_1->u.im.id = VAR_3->id;
 VAR_1->u.im.has_shape = VAR_3->has_shape;
 VAR_1->u.im.has_group_alpha = VAR_3->has_group_alpha;
 VAR_1->u.im.m[0] = VAR_3->ctm[0];
 VAR_1->u.im.m[1] = VAR_3->ctm[1];
 VAR_1->u.im.m[2] = VAR_3->ctm[2];
 VAR_1->u.im.m[3] = VAR_3->ctm[3];
 VAR_1->u.im.ptr = VAR_3->cs;
 return 1;
}
