
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char**,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static void FUNC_10(char *VAR_4)
{
 if (VAR_4)
 {
  char *VAR_5 = FUNC_2(&VAR_4, VAR_0);
  if (VAR_5 && VAR_5[0])
  {
   if (!FUNC_9(VAR_5, "*"))
   {
    int VAR_6, VAR_7;
    char VAR_8[1000];
    VAR_7 = FUNC_5(VAR_1, VAR_2);
    for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    {
     if (VAR_4)
     {
      FUNC_1(VAR_8, VAR_4, sizeof VAR_8);
      FUNC_8(VAR_8, FUNC_6(VAR_1, VAR_2, VAR_6));
     }
     else
      FUNC_8(((void*)0), FUNC_6(VAR_1, VAR_2, VAR_6));
    }
   }
   else if (FUNC_4(VAR_5))
    FUNC_8(VAR_4, FUNC_6(VAR_1, VAR_2, FUNC_0(VAR_5)-1));
   else
    FUNC_3(VAR_1, VAR_3, "null\n");
  }
  else
   FUNC_3(VAR_1, VAR_3, "null\n");
 }
 else
 {
  FUNC_7();
 }
}
