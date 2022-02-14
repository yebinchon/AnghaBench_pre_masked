
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int RelFileNode ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(StringInfo VAR_1, char *VAR_2, int VAR_3,
     RelFileNode *VAR_4)
{
 int VAR_5;

 if (VAR_3 > 0)
 {
  FUNC_0(VAR_1, "; %s:", VAR_2);
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  {
   char *VAR_6 = FUNC_2(VAR_4[VAR_5], VAR_0);

   FUNC_0(VAR_1, " %s", VAR_6);
   FUNC_1(VAR_6);
  }
 }
}
