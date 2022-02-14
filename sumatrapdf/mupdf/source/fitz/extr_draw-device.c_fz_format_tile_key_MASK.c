
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int has_group_alpha; int has_shape; int cs; int * ctm; int id; } ;
typedef TYPE_1__ tile_key ;
typedef int fz_context ;


 int FUNC_0 (char*,int,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, char *VAR_1, int VAR_2, void *VAR_3)
{
 tile_key *VAR_4 = (tile_key *)VAR_3;
 FUNC_0(VAR_1, VAR_2, "(tile id=%x, ctm=%g %g %g %g, cs=%x, shape=%d, ga=%d)",
   VAR_4->id, VAR_4->ctm[0], VAR_4->ctm[1], VAR_4->ctm[2], VAR_4->ctm[3], VAR_4->cs,
   VAR_4->has_shape, VAR_4->has_group_alpha);
}
