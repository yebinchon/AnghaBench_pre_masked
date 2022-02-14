
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_4__ {TYPE_1__* items; } ;
struct TYPE_3__ {int * v; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,char const*) ;

pdf_obj *
FUNC_4(fz_context *VAR_0, pdf_obj *VAR_1, const char *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1);
 if (!FUNC_1(VAR_1))
  return ((void*)0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_3 >= 0)
  return FUNC_0(VAR_1)->items[VAR_3].v;
 return ((void*)0);
}
