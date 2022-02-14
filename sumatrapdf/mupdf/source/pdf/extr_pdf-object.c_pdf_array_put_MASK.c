
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_2__ {int len; int * items; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;

void
FUNC_9(fz_context *VAR_1, pdf_obj *VAR_2, int VAR_3, pdf_obj *VAR_4)
{
 FUNC_2(VAR_2);
 if (!FUNC_1(VAR_2))
  FUNC_3(VAR_1, VAR_0, "not an array (%s)", FUNC_7(VAR_2));
 if (VAR_3 == FUNC_0(VAR_2)->len)
 {
  FUNC_4(VAR_1, VAR_2, VAR_4);
  return;
 }
 if (VAR_3 < 0 || VAR_3 > FUNC_0(VAR_2)->len)
  FUNC_3(VAR_1, VAR_0, "index out of bounds");
 FUNC_8(VAR_1, VAR_2, VAR_4);
 FUNC_5(VAR_1, FUNC_0(VAR_2)->items[VAR_3]);
 FUNC_0(VAR_2)->items[VAR_3] = FUNC_6(VAR_1, VAR_4);
}
