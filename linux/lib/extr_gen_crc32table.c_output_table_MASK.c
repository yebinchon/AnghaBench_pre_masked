
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(uint32_t (*VAR_1)[256], int VAR_2, int VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_6 = 0 ; VAR_6 < VAR_2; VAR_6++) {
  FUNC_0("{");
  for (VAR_5 = 0; VAR_5 < VAR_3 - 1; VAR_5++) {
   if (VAR_5 % VAR_0 == 0)
    FUNC_0("\n");
   FUNC_0("%s(0x%8.8xL), ", VAR_4, VAR_1[VAR_6][VAR_5]);
  }
  FUNC_0("%s(0x%8.8xL)},\n", VAR_4, VAR_1[VAR_6][VAR_3 - 1]);
 }
}
