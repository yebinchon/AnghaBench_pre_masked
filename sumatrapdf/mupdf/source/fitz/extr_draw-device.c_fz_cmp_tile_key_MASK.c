
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; scalar_t__ has_shape; scalar_t__ has_group_alpha; scalar_t__* ctm; scalar_t__ cs; } ;
typedef TYPE_1__ tile_key ;
typedef int fz_context ;



__attribute__((used)) static int
FUNC_0(fz_context *VAR_0, void *VAR_1, void *VAR_2)
{
 tile_key *VAR_3 = VAR_1;
 tile_key *VAR_4 = VAR_2;
 return VAR_3->id == VAR_4->id &&
  VAR_3->has_shape == VAR_4->has_shape &&
  VAR_3->has_group_alpha == VAR_4->has_group_alpha &&
  VAR_3->ctm[0] == VAR_4->ctm[0] &&
  VAR_3->ctm[1] == VAR_4->ctm[1] &&
  VAR_3->ctm[2] == VAR_4->ctm[2] &&
  VAR_3->ctm[3] == VAR_4->ctm[3] &&
  VAR_3->cs == VAR_4->cs;
}
