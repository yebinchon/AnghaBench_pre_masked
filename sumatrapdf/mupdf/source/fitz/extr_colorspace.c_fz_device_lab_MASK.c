
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* colorspace; } ;
typedef TYPE_2__ fz_context ;
typedef int fz_colorspace ;
struct TYPE_4__ {int * lab; } ;



fz_colorspace *FUNC_0(fz_context *VAR_0)
{
 return VAR_0->colorspace->lab;
}
