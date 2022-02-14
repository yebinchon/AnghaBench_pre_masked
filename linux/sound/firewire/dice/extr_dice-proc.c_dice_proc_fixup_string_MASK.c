
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 4)
  FUNC_0((u32 *)(VAR_0 + VAR_2));

 for (VAR_2 = 0; VAR_2 < VAR_1 - 2; ++VAR_2) {
  if (VAR_0[VAR_2] == '\0')
   return;
  if (VAR_0[VAR_2] == '\\' && VAR_0[VAR_2 + 1] == '\\') {
   VAR_0[VAR_2 + 2] = '\0';
   return;
  }
 }
 VAR_0[VAR_1 - 1] = '\0';
}
