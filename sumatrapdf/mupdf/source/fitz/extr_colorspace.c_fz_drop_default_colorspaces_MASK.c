
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int oi; int cmyk; int rgb; int gray; int refs; } ;
typedef TYPE_1__ fz_default_colorspaces ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void
FUNC_3(fz_context *VAR_0, fz_default_colorspaces *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1, &VAR_1->refs))
 {
  FUNC_0(VAR_0, VAR_1->gray);
  FUNC_0(VAR_0, VAR_1->rgb);
  FUNC_0(VAR_0, VAR_1->cmyk);
  FUNC_0(VAR_0, VAR_1->oi);
  FUNC_2(VAR_0, VAR_1);
 }
}
