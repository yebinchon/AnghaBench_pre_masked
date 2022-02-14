
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ shade; scalar_t__ pattern; scalar_t__ colorspace; } ;
typedef TYPE_1__ pdf_material ;
typedef int fz_context ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static pdf_material *
FUNC_3(fz_context *VAR_0, pdf_material *VAR_1)
{
 if (VAR_1->colorspace)
  FUNC_0(VAR_0, VAR_1->colorspace);
 if (VAR_1->pattern)
  FUNC_2(VAR_0, VAR_1->pattern);
 if (VAR_1->shade)
  FUNC_1(VAR_0, VAR_1->shade);
 return VAR_1;
}
