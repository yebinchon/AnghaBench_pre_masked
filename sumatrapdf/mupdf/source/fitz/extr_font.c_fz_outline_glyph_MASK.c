
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_path ;
typedef int fz_matrix ;
struct TYPE_4__ {int ft_face; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;


 int * FUNC_0 (int *,TYPE_1__*,int,int ) ;

fz_path *
FUNC_1(fz_context *VAR_0, fz_font *VAR_1, int VAR_2, fz_matrix VAR_3)
{
 if (!VAR_1->ft_face)
  return ((void*)0);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
