
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_3__ {int * obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 float FUNC_4 (int *,int *) ;

float
FUNC_5(fz_context *VAR_3, pdf_annot *VAR_4)
{
 pdf_obj *VAR_5, *VAR_6, *VAR_7;
 VAR_5 = FUNC_2(VAR_3, VAR_4->obj, FUNC_0(VAR_0));
 VAR_6 = FUNC_2(VAR_3, VAR_5, FUNC_0(VAR_2));
 if (FUNC_3(VAR_3, VAR_6))
  return FUNC_4(VAR_3, VAR_6);
 VAR_7 = FUNC_2(VAR_3, VAR_4->obj, FUNC_0(VAR_1));
 VAR_6 = FUNC_1(VAR_3, VAR_7, 2);
 if (FUNC_3(VAR_3, VAR_6))
  return FUNC_4(VAR_3, VAR_6);
 return 1;
}
