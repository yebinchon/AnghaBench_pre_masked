
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int group_alpha; int shape; int dest; } ;
typedef TYPE_1__ tile_record ;
typedef int fz_storable ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_storable *VAR_1)
{
 tile_record *VAR_2 = (tile_record *)VAR_1;
 FUNC_0(VAR_0, VAR_2->dest);
 FUNC_0(VAR_0, VAR_2->shape);
 FUNC_0(VAR_0, VAR_2->group_alpha);
 FUNC_1(VAR_0, VAR_2);
}
