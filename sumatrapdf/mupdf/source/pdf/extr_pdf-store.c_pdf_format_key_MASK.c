
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *,char*,int,int*,int *,int,int ) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, char *VAR_1, int VAR_2, void *VAR_3)
{
 pdf_obj *VAR_4 = (pdf_obj *)VAR_3;
 if (FUNC_3(VAR_0, VAR_4))
  FUNC_1(VAR_1, VAR_2, "(%d 0 R)", FUNC_5(VAR_0, VAR_4));
 else
 {
  int VAR_5;
  char *VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2, &VAR_5, VAR_4, 1, 0);
  if (VAR_6 != VAR_1) {
   FUNC_2(VAR_1, VAR_6, VAR_2);
   FUNC_0(VAR_0, VAR_6);
  }
 }
}
