
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_storable ;
struct TYPE_5__ {TYPE_3__* fn_vals; } ;
struct TYPE_6__ {TYPE_1__ f; } ;
struct TYPE_7__ {scalar_t__ type; int buffer; TYPE_2__ u; int colorspace; } ;
typedef TYPE_3__ fz_shade ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;

void
FUNC_3(fz_context *VAR_1, fz_storable *VAR_2)
{
 fz_shade *VAR_3 = (fz_shade *)VAR_2;

 FUNC_0(VAR_1, VAR_3->colorspace);
 if (VAR_3->type == VAR_0)
  FUNC_2(VAR_1, VAR_3->u.f.fn_vals);
 FUNC_1(VAR_1, VAR_3->buffer);
 FUNC_2(VAR_1, VAR_3);
}
