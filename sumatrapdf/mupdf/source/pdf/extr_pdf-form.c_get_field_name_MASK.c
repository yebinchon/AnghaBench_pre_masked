
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int *,int ) ;
 char* FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static char *FUNC_6(fz_context *VAR_2, pdf_obj *VAR_3, int VAR_4)
{
 char *VAR_5 = ((void*)0);
 pdf_obj *VAR_6 = FUNC_2(VAR_2, VAR_3, FUNC_0(VAR_0));
 const char *VAR_7 = FUNC_3(VAR_2, VAR_3, FUNC_0(VAR_1));
 int VAR_8 = (int)FUNC_5(VAR_7);





 if (VAR_8)
  VAR_4 += VAR_8+1;

 if (VAR_6)
 {
  VAR_5 = FUNC_6(VAR_2, VAR_6, VAR_4);
 }
 else
 {
  VAR_5 = FUNC_1(VAR_2, VAR_4+1);
  VAR_5[0] = 0;
 }

 if (VAR_8)
 {
  if (VAR_5[0])
   FUNC_4(VAR_5, ".");

  FUNC_4(VAR_5, VAR_7);
 }

 return VAR_5;
}
