
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int group_alpha; int shape; int dest; } ;
typedef TYPE_1__ tile_record ;
typedef int fz_context ;


 size_t FUNC_0 (int *,int ) ;

size_t
FUNC_1(fz_context *VAR_0, tile_record *VAR_1)
{
 if (!VAR_1)
  return 0;
 return sizeof(*VAR_1) + FUNC_0(VAR_0, VAR_1->dest) + FUNC_0(VAR_0, VAR_1->shape) + FUNC_0(VAR_0, VAR_1->group_alpha);
}
