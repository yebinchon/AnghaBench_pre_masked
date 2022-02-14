
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_4__ {int len; TYPE_1__* items; } ;
struct TYPE_3__ {int * v; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

pdf_obj *
FUNC_3(fz_context *VAR_0, pdf_obj *VAR_1, int VAR_2)
{
 FUNC_2(VAR_1);
 if (!FUNC_1(VAR_1))
  return ((void*)0);
 if (VAR_2 < 0 || VAR_2 >= FUNC_0(VAR_1)->len)
  return ((void*)0);
 return FUNC_0(VAR_1)->items[VAR_2].v;
}
