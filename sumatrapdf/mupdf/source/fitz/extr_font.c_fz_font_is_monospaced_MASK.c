
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_mono; } ;
struct TYPE_5__ {TYPE_1__ flags; } ;
typedef TYPE_2__ fz_font ;
typedef int fz_context ;



int FUNC_0(fz_context *VAR_0, fz_font *VAR_1)
{
 return VAR_1 ? VAR_1->flags.is_mono : 0;
}
