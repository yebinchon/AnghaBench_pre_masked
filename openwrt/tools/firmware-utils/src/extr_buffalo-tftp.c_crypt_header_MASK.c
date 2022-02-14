
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, ssize_t VAR_1,
    const unsigned char *VAR_2, const unsigned char *VAR_3)
{
 ssize_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  unsigned int VAR_5;

  for (VAR_5 = 0; VAR_2[VAR_5]; VAR_5++)
   if (VAR_0[VAR_4] == VAR_2[VAR_5]) {
    VAR_0[VAR_4] = VAR_3[VAR_5];
    break;
   }
 }
}
