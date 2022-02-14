
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rgb; } ;
typedef TYPE_1__ fz_default_colorspaces ;
typedef int fz_context ;
struct TYPE_7__ {scalar_t__ type; int n; } ;
typedef TYPE_2__ fz_colorspace ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;

void FUNC_2(fz_context *VAR_1, fz_default_colorspaces *VAR_2, fz_colorspace *VAR_3)
{
 if (VAR_3->type == VAR_0 && VAR_3->n == 3)
 {
  FUNC_0(VAR_1, VAR_2->rgb);
  VAR_2->rgb = FUNC_1(VAR_1, VAR_3);
 }
}
