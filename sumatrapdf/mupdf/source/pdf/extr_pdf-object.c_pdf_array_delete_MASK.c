
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_2__ {int len; scalar_t__* items; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;

void
FUNC_8(fz_context *VAR_1, pdf_obj *VAR_2, int VAR_3)
{
 FUNC_2(VAR_2);
 if (!FUNC_1(VAR_2))
  FUNC_3(VAR_1, VAR_0, "not an array (%s)", FUNC_6(VAR_2));
 if (VAR_3 < 0 || VAR_3 >= FUNC_0(VAR_2)->len)
  FUNC_3(VAR_1, VAR_0, "index out of bounds");
 FUNC_7(VAR_1, VAR_2, ((void*)0));
 FUNC_5(VAR_1, FUNC_0(VAR_2)->items[VAR_3]);
 FUNC_0(VAR_2)->items[VAR_3] = 0;
 FUNC_0(VAR_2)->len--;
 FUNC_4(FUNC_0(VAR_2)->items + VAR_3, FUNC_0(VAR_2)->items + VAR_3 + 1, (FUNC_0(VAR_2)->len - VAR_3) * sizeof(pdf_obj*));
}
