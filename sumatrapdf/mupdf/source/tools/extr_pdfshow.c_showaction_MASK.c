
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int VAR_2 ;
 int * FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 char* FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int *,int,int) ;
 int * FUNC_7 (int ,int *) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9(pdf_obj *VAR_3, const char *VAR_4)
{
 if (VAR_3)
 {
  pdf_obj *VAR_5 = FUNC_3(VAR_1, VAR_3, FUNC_0(VAR_0));
  if (VAR_5)
  {
   char *VAR_6 = FUNC_5(VAR_1, VAR_5);
   FUNC_2(VAR_1, VAR_2, "    %s: {\n", VAR_4);
   FUNC_8(VAR_6, 1);
   FUNC_2(VAR_1, VAR_2, "    }\n", VAR_4);
   FUNC_1(VAR_1, VAR_6);
  }
  else
  {
   FUNC_2(VAR_1, VAR_2, "    %s: ", VAR_4);
   if (FUNC_4(VAR_1, VAR_3))
    VAR_3 = FUNC_7(VAR_1, VAR_3);
   FUNC_6(VAR_1, VAR_2, VAR_3, 1, 1);
   FUNC_2(VAR_1, VAR_2, "\n");
  }
 }
}
