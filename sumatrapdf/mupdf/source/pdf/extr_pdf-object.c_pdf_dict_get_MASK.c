
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
 int * VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *) ;

pdf_obj *
FUNC_7(fz_context *VAR_1, pdf_obj *VAR_2, pdf_obj *VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_2);
 if (!FUNC_1(VAR_2))
  return ((void*)0);
 if (!FUNC_2(VAR_3))
  return ((void*)0);

 if (VAR_3 < VAR_0)
  VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_5(VAR_1, VAR_2, FUNC_6(VAR_1, VAR_3));
 if (VAR_4 >= 0)
  return FUNC_0(VAR_2)->items[VAR_4].v;
 return ((void*)0);
}
