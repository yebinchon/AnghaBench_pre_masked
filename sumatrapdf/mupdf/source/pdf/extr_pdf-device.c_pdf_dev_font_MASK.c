
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ** cid_fonts; } ;
typedef TYPE_1__ pdf_device ;
struct TYPE_9__ {size_t font; float font_size; int buf; } ;
typedef TYPE_2__ gstate ;
typedef int fz_matrix ;
typedef int fz_font ;
typedef int fz_context ;
struct TYPE_10__ {scalar_t__ ft_substitute; } ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,char*,size_t,float) ;
 TYPE_5__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 float FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,char*) ;
 size_t FUNC_6 (int *,TYPE_1__*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_1, pdf_device *VAR_2, fz_font *VAR_3, fz_matrix VAR_4)
{
 gstate *VAR_5 = FUNC_0(VAR_2);
 float VAR_6 = FUNC_4(VAR_4);


 if (VAR_5->font >= 0 && VAR_2->cid_fonts[VAR_5->font] == VAR_3 && VAR_5->font_size == VAR_6)
  return;

 if (FUNC_3(VAR_1, VAR_3))
  FUNC_5(VAR_1, VAR_0, "pdf device does not support type 3 fonts");
 if (FUNC_2(VAR_3)->ft_substitute)
  FUNC_5(VAR_1, VAR_0, "pdf device does not support substitute fonts");
 if (!FUNC_7(VAR_3))
  FUNC_5(VAR_1, VAR_0, "pdf device does not support font types found in this file");

 VAR_5->font = FUNC_6(VAR_1, VAR_2, VAR_3);
 VAR_5->font_size = VAR_6;

 FUNC_1(VAR_1, VAR_5->buf, "/F%d %g Tf\n", VAR_5->font, VAR_5->font_size);
}
