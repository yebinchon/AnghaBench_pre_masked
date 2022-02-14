
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tensor_patch ;
struct TYPE_4__ {int ncomp; } ;
typedef TYPE_1__ fz_mesh_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,int *,int) ;
 int FUNC_1 (int *,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_mesh_processor *VAR_1, tensor_patch *VAR_2, int VAR_3, int VAR_4)
{
 tensor_patch VAR_5, VAR_6;


 FUNC_1(VAR_2, &VAR_5, &VAR_6, VAR_1->ncomp);

 VAR_3--;
 if (VAR_3 == 0)
 {

  FUNC_0(VAR_0, VAR_1, &VAR_5, VAR_4);
  FUNC_0(VAR_0, VAR_1, &VAR_6, VAR_4);
 }
 else
 {

  FUNC_2(VAR_0, VAR_1, &VAR_5, VAR_3, VAR_4);
  FUNC_2(VAR_0, VAR_1, &VAR_6, VAR_3, VAR_4);
 }
}
