
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_device ;
struct TYPE_3__ {int text_rendering_mode; int buf; } ;
typedef TYPE_1__ gstate ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_device *VAR_1, int VAR_2)
{
 gstate *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->text_rendering_mode == VAR_2)
  return;
 VAR_3->text_rendering_mode = VAR_2;
 FUNC_1(VAR_0, VAR_3->buf, "%d Tr\n", VAR_2);
}
