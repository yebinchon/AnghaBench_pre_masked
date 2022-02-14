
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int bbox; int matrix; } ;
typedef TYPE_1__ fz_shade ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

fz_rect
FUNC_4(fz_context *VAR_2, fz_shade *VAR_3, fz_matrix VAR_4)
{
 VAR_4 = FUNC_1(VAR_3->matrix, VAR_4);
 if (VAR_3->type != VAR_0 && VAR_3->type != VAR_1)
 {
  fz_rect VAR_5 = FUNC_0(VAR_2, VAR_3);
  VAR_5 = FUNC_2(VAR_5, VAR_3->bbox);
  return FUNC_3(VAR_5, VAR_4);
 }
 return FUNC_3(VAR_3->bbox, VAR_4);
}
