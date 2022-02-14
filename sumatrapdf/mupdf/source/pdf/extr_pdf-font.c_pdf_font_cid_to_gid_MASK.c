
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* font; } ;
typedef TYPE_2__ pdf_font_desc ;
typedef int fz_context ;
struct TYPE_5__ {scalar_t__ ft_face; } ;


 int FUNC_0 (TYPE_2__*,int) ;

int
FUNC_1(fz_context *VAR_0, pdf_font_desc *VAR_1, int VAR_2)
{
 if (VAR_1->font->ft_face)
  return FUNC_0(VAR_1, VAR_2);
 return VAR_2;
}
