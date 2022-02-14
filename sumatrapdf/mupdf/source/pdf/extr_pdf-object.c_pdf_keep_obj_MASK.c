
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int refs; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;

pdf_obj *
FUNC_1(fz_context *VAR_1, pdf_obj *VAR_2)
{
 if (VAR_2 >= VAR_0)
  return FUNC_0(VAR_1, VAR_2, &VAR_2->refs);
 return VAR_2;
}
