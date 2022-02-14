
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_rect ;
struct TYPE_4__ {int (* bound_page ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ fz_page ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

fz_rect
FUNC_1(fz_context *VAR_1, fz_page *VAR_2)
{
 if (VAR_2 && VAR_2->bound_page)
  return VAR_2->bound_page(VAR_1, VAR_2);
 return VAR_0;
}
