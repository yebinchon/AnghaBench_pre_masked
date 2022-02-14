
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_3__ {int len; int cap; int * items; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;

void
FUNC_8(fz_context *VAR_1, pdf_obj *VAR_2, pdf_obj *VAR_3)
{
 FUNC_2(VAR_2);
 if (!FUNC_1(VAR_2))
  FUNC_3(VAR_1, VAR_0, "not an array (%s)", FUNC_6(VAR_2));
 FUNC_7(VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_2)->len + 1 > FUNC_0(VAR_2)->cap)
  FUNC_4(VAR_1, FUNC_0(VAR_2));
 FUNC_0(VAR_2)->items[FUNC_0(VAR_2)->len] = FUNC_5(VAR_1, VAR_3);
 FUNC_0(VAR_2)->len++;
}
