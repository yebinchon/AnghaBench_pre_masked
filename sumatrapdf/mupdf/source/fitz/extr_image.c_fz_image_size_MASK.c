
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t (* get_size ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ fz_image ;
typedef int fz_context ;


 size_t FUNC_0 (int *,TYPE_1__*) ;

size_t FUNC_1(fz_context *VAR_0, fz_image *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return 0;

 return VAR_1->get_size(VAR_0, VAR_1);
}
