
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int *,int,int) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_6(pdf_obj *VAR_4)
{
 pdf_obj *VAR_5 = FUNC_3(VAR_0, VAR_4);
 int VAR_6 = FUNC_4(VAR_0, VAR_4);
 if (FUNC_1(VAR_0, VAR_4))
 {
  if (VAR_2)
  {
   FUNC_5(VAR_6);
  }
  else
  {
   if (VAR_3)
   {
    FUNC_0(VAR_0, VAR_1, "%d 0 obj ", VAR_6);
    FUNC_2(VAR_0, VAR_1, VAR_5, 1, 1);
    FUNC_0(VAR_0, VAR_1, " stream\n");
   }
   else
   {
    FUNC_0(VAR_0, VAR_1, "%d 0 obj\n", VAR_6);
    FUNC_2(VAR_0, VAR_1, VAR_5, 0, 1);
    FUNC_0(VAR_0, VAR_1, "\nstream\n");
    FUNC_5(VAR_6);
    FUNC_0(VAR_0, VAR_1, "endstream\n");
    FUNC_0(VAR_0, VAR_1, "endobj\n");
   }
  }
 }
 else
 {
  if (VAR_3)
  {
   FUNC_0(VAR_0, VAR_1, "%d 0 obj ", VAR_6);
   FUNC_2(VAR_0, VAR_1, VAR_5, 1, 1);
   FUNC_0(VAR_0, VAR_1, "\n");
  }
  else
  {
   FUNC_0(VAR_0, VAR_1, "%d 0 obj\n", VAR_6);
   FUNC_2(VAR_0, VAR_1, VAR_5, 0, 1);
   FUNC_0(VAR_0, VAR_1, "\nendobj\n");
  }
 }
}
