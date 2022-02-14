
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * (* get_output_intent ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int * FUNC_0 (int *,TYPE_1__*) ;

fz_colorspace *
FUNC_1(fz_context *VAR_0, fz_document *VAR_1)
{
 if (VAR_1 && VAR_1->get_output_intent)
  return VAR_1->get_output_intent(VAR_0, VAR_1);
 return ((void*)0);
}
