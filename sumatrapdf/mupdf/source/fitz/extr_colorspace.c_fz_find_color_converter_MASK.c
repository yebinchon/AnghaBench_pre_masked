
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_15__ {TYPE_4__* base; } ;
struct TYPE_14__ {TYPE_4__* base; } ;
struct TYPE_16__ {TYPE_2__ separation; TYPE_1__ indexed; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_3__ u; } ;
typedef TYPE_4__ fz_colorspace ;
typedef int fz_color_params ;
struct TYPE_18__ {TYPE_4__* ss; int convert; int convert_via; TYPE_4__* ss_via; int * link; TYPE_4__* ds; } ;
typedef TYPE_5__ fz_color_converter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_5__*,TYPE_4__*,TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_2(fz_context *VAR_5, fz_color_converter *VAR_6, fz_colorspace *VAR_7, fz_colorspace *VAR_8, fz_colorspace *VAR_9, fz_color_params VAR_10)
{
 VAR_6->ds = VAR_8;




 if (VAR_8->type == VAR_0)
  FUNC_1(VAR_5, VAR_2, "Cannot convert into Indexed colorspace.");
 if (VAR_8->type == VAR_1)
  FUNC_1(VAR_5, VAR_2, "Cannot convert into Separation colorspace.");

 if (VAR_7->type == VAR_0)
 {
  VAR_6->ss = VAR_7->u.indexed.base;
  VAR_6->ss_via = VAR_7;
  FUNC_0(VAR_5, VAR_6, VAR_7->u.indexed.base, VAR_8, VAR_9, VAR_10);
  VAR_6->convert_via = VAR_6->convert;
  VAR_6->convert = VAR_3;
 }
 else if (VAR_7->type == VAR_1)
 {
  VAR_6->ss = VAR_7->u.separation.base;
  VAR_6->ss_via = VAR_7;
  FUNC_0(VAR_5, VAR_6, VAR_7->u.separation.base, VAR_8, VAR_9, VAR_10);
  VAR_6->convert_via = VAR_6->convert;
  VAR_6->convert = VAR_4;
 }
 else
 {
  VAR_6->ss = VAR_7;
  FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 }
}
