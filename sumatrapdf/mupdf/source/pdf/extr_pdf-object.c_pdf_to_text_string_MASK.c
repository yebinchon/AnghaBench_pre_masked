
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_2__ {char const* text; int len; int buf; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 char const* FUNC_3 (int *,int ,int ) ;

const char *FUNC_4(fz_context *VAR_0, pdf_obj *VAR_1)
{
 FUNC_1(VAR_1);
 if (FUNC_0(VAR_1))
 {
  if (!FUNC_2(VAR_1)->text)
   FUNC_2(VAR_1)->text = FUNC_3(VAR_0, FUNC_2(VAR_1)->buf, FUNC_2(VAR_1)->len);
  return FUNC_2(VAR_1)->text;
 }
 return "";
}
