
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page; } ;
typedef TYPE_1__ fz_stext_device ;
typedef int fz_matrix ;
typedef int fz_image ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_color_params ;


 int FUNC_0 (int *,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_device *VAR_1, fz_image *VAR_2, fz_matrix VAR_3, float VAR_4, fz_color_params VAR_5)
{
 fz_stext_device *VAR_6 = (fz_stext_device*)VAR_1;


 if (VAR_4 < 0.5f)
  return;

 FUNC_0(VAR_0, VAR_6->page, VAR_3, VAR_2);
}
