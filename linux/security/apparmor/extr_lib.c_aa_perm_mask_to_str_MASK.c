
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (char const*) ;

void FUNC_2(char *VAR_0, size_t VAR_1, const char *VAR_2, u32 VAR_3)
{
 unsigned int VAR_4, VAR_5 = 1;
 size_t VAR_6 = FUNC_1(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_5 <<= 1, VAR_4++) {
  if (VAR_3 & VAR_5) {

   if (FUNC_0(VAR_1 <= 1))
    break;

   *VAR_0++ = VAR_2[VAR_4];
   VAR_1--;
  }
 }
 *VAR_0 = '\0';
}
