
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_widget ;
typedef int pdf_obj ;
struct TYPE_2__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int ,int ,int ,int ,int *) ;
 char* FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(fz_context *VAR_8, pdf_widget *VAR_9)
{
 pdf_annot *VAR_10 = (pdf_annot *)VAR_9;
 int VAR_11 = VAR_4;
 pdf_obj *VAR_12 = FUNC_2(VAR_8, VAR_10->obj, FUNC_0(VAR_0), FUNC_0(VAR_1), FUNC_0(VAR_2), ((void*)0));
 if (VAR_12)
 {
  char *VAR_13 = FUNC_3(VAR_8, VAR_12);
  if (FUNC_4(VAR_13, "AFNumber_Format"))
   VAR_11 = VAR_5;
  else if (FUNC_4(VAR_13, "AFSpecial_Format"))
   VAR_11 = VAR_6;
  else if (FUNC_4(VAR_13, "AFDate_FormatEx"))
   VAR_11 = VAR_3;
  else if (FUNC_4(VAR_13, "AFTime_FormatEx"))
   VAR_11 = VAR_7;
  FUNC_1(VAR_8, VAR_13);
 }

 return VAR_11;
}
