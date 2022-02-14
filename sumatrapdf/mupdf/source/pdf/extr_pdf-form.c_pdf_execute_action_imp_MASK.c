
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_5__ {scalar_t__ js; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int * FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int *,char const*,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_6(fz_context *VAR_6, pdf_document *VAR_7, pdf_obj *VAR_8, const char *VAR_9, pdf_obj *VAR_10)
{
 pdf_obj *VAR_11 = FUNC_1(VAR_6, VAR_10, FUNC_0(*VAR_11));
 if (FUNC_4(VAR_6, VAR_11, FUNC_0(VAR_3)))
 {
  if (VAR_7->js)
   FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, FUNC_1(VAR_6, VAR_10, FUNC_0(VAR_2)));
 }
 if (FUNC_4(VAR_6, VAR_11, FUNC_0(VAR_4)))
 {
  pdf_obj *VAR_12 = FUNC_1(VAR_6, VAR_10, FUNC_0(VAR_0));
  int VAR_13 = FUNC_2(VAR_6, VAR_10, FUNC_0(VAR_1));
  FUNC_5(VAR_6, VAR_7, VAR_12, VAR_13 & 1);
 }
}
