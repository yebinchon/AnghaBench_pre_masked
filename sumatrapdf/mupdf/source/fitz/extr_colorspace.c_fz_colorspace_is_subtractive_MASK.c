
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ fz_colorspace ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(fz_context *VAR_2, fz_colorspace *VAR_3)
{
 return VAR_3 && (VAR_3->type == VAR_0 || VAR_3->type == VAR_1);
}
