
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int VAR_6 ;
 int * FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 char const* FUNC_4 (int *,int *) ;

const char *
FUNC_5(fz_context *VAR_7, pdf_annot *VAR_8)
{
 pdf_obj *VAR_9;
 FUNC_1(VAR_7, VAR_8, FUNC_0(VAR_1), VAR_6);
 VAR_9 = FUNC_2(VAR_7, VAR_8->obj, FUNC_0(VAR_1));
 if (!VAR_9)
 {
  pdf_obj *VAR_10 = FUNC_2(VAR_7, VAR_8->obj, FUNC_0(VAR_4));
  if (FUNC_3(VAR_7, VAR_10, FUNC_0(VAR_5)))
   return "Note";
  if (FUNC_3(VAR_7, VAR_10, FUNC_0(VAR_3)))
   return "Draft";
  if (FUNC_3(VAR_7, VAR_10, FUNC_0(VAR_0)))
   return "PushPin";
  if (FUNC_3(VAR_7, VAR_10, FUNC_0(VAR_2)))
   return "Speaker";
 }
 return FUNC_4(VAR_7, VAR_9);
}
