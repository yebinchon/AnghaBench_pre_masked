
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; } ;
typedef TYPE_2__ pdf_obj ;
typedef int fz_context ;
struct TYPE_8__ {float f; float i; } ;
struct TYPE_10__ {TYPE_1__ u; } ;


 TYPE_6__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;

float FUNC_2(fz_context *VAR_3, pdf_obj *VAR_4)
{
 FUNC_1(VAR_4);
 if (VAR_4 < VAR_1)
  return 0;
 if (VAR_4->kind == VAR_2)
  return FUNC_0(VAR_4)->u.f;
 if (VAR_4->kind == VAR_0)
  return FUNC_0(VAR_4)->u.i;
 return 0;
}
