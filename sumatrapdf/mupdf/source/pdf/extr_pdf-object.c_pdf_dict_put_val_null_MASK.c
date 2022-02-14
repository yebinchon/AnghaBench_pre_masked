
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_4__ {int len; TYPE_1__* items; } ;
struct TYPE_3__ {int v; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;

void
FUNC_7(fz_context *VAR_2, pdf_obj *VAR_3, int VAR_4)
{
 FUNC_2(VAR_3);
 if (!FUNC_1(VAR_3))
  FUNC_3(VAR_2, VAR_0, "not a dict (%s)", FUNC_5(VAR_3));
 if (VAR_4 < 0 || VAR_4 >= FUNC_0(VAR_3)->len)
  FUNC_3(VAR_2, VAR_0, "index out of bounds");

 FUNC_6(VAR_2, VAR_3, ((void*)0));
 FUNC_4(VAR_2, FUNC_0(VAR_3)->items[VAR_4].v);
 FUNC_0(VAR_3)->items[VAR_4].v = VAR_1;
}
