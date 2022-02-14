
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char**,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_2 ;
 int * FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int *,int) ;
 int * FUNC_8 (int ,int *,char*) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int ,int *,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_16(char *VAR_4, pdf_obj *VAR_5)
{
 if (VAR_4 && VAR_4[0])
 {
  char *VAR_6 = FUNC_2(&VAR_4, VAR_0);
  if (VAR_6 && VAR_6[0])
  {
   if (!FUNC_15(VAR_6, "*"))
   {
    int VAR_7, VAR_8;
    char VAR_9[1000];
    if (FUNC_10(VAR_1, VAR_5))
    {
     VAR_8 = FUNC_6(VAR_1, VAR_5);
     for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7)
     {
      if (VAR_4)
      {
       FUNC_1(VAR_9, VAR_4, sizeof VAR_9);
       FUNC_16(VAR_9, FUNC_5(VAR_1, VAR_5, VAR_7));
      }
      else
       FUNC_16(((void*)0), FUNC_5(VAR_1, VAR_5, VAR_7));
     }
    }
    else if (FUNC_11(VAR_1, VAR_5))
    {
     VAR_8 = FUNC_9(VAR_1, VAR_5);
     for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7)
     {
      if (VAR_4)
      {
       FUNC_1(VAR_9, VAR_4, sizeof VAR_9);
       FUNC_16(VAR_9, FUNC_7(VAR_1, VAR_5, VAR_7));
      }
      else
       FUNC_16(((void*)0), FUNC_7(VAR_1, VAR_5, VAR_7));
     }
    }
    else
    {
     FUNC_3(VAR_1, VAR_2, "null\n");
    }
   }
   else if (FUNC_4(VAR_6) && FUNC_10(VAR_1, VAR_5))
    FUNC_16(VAR_4, FUNC_5(VAR_1, VAR_5, FUNC_0(VAR_6)-1));
   else
    FUNC_16(VAR_4, FUNC_8(VAR_1, VAR_5, VAR_6));
  }
  else
   FUNC_3(VAR_1, VAR_2, "null\n");
 }
 else
 {
  if (FUNC_12(VAR_1, VAR_5))
   FUNC_14(VAR_5);
  else
  {
   FUNC_13(VAR_1, VAR_2, VAR_5, VAR_3, 0);
   FUNC_3(VAR_1, VAR_2, "\n");
  }
 }
}
