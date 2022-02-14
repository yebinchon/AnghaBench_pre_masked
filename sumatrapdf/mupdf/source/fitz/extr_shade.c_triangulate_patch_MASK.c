
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * color; int ** pole; } ;
typedef TYPE_1__ tensor_patch ;
struct TYPE_10__ {int p; } ;
typedef TYPE_2__ fz_vertex ;
typedef int fz_mesh_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,TYPE_2__*,int ) ;
 int FUNC_1 (int *,int *,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_mesh_processor *VAR_1, tensor_patch *VAR_2)
{
 fz_vertex VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_2->pole[0][0];
 VAR_4 = VAR_2->pole[0][3];
 VAR_5 = VAR_2->pole[3][3];
 VAR_6 = VAR_2->pole[3][0];

 FUNC_0(VAR_0, VAR_1, &VAR_3, VAR_2->color[0]);
 FUNC_0(VAR_0, VAR_1, &VAR_4, VAR_2->color[1]);
 FUNC_0(VAR_0, VAR_1, &VAR_5, VAR_2->color[2]);
 FUNC_0(VAR_0, VAR_1, &VAR_6, VAR_2->color[3]);

 FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_4, &VAR_5, &VAR_6);
}
