
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_9__ {TYPE_1__* base; int tint; int (* eval ) (int *,int ,float const*,int ,float*,int ) ;} ;
struct TYPE_10__ {TYPE_2__ separation; } ;
struct TYPE_11__ {TYPE_3__ u; int n; } ;
typedef TYPE_4__ fz_colorspace ;
struct TYPE_12__ {int (* convert_via ) (int *,TYPE_5__*,float*,float*) ;TYPE_4__* ss_via; } ;
typedef TYPE_5__ fz_color_converter ;
struct TYPE_8__ {int n; } ;


 int FUNC_0 (int *,int ,float const*,int ,float*,int ) ;
 int FUNC_1 (int *,TYPE_5__*,float*,float*) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, fz_color_converter *VAR_1, const float *VAR_2, float *VAR_3)
{
 fz_colorspace *VAR_4 = VAR_1->ss_via;
 float VAR_5[4];
 VAR_4->u.separation.eval(VAR_0, VAR_4->u.separation.tint, VAR_2, VAR_4->n, VAR_5, VAR_4->u.separation.base->n);
 VAR_1->convert_via(VAR_0, VAR_1, VAR_5, VAR_3);
}
