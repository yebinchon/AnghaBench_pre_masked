
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refs; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;


 TYPE_1__* VAR_0 ;

int FUNC_0(fz_context *VAR_1, pdf_obj *VAR_2)
{
 if (VAR_2 < VAR_0)
  return 0;
 return VAR_2->refs;
}
