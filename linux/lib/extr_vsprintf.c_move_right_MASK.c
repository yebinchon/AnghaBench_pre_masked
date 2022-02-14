
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (char*,char,unsigned int) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, char *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 size_t VAR_4;
 if (VAR_0 >= VAR_1)
  return;
 VAR_4 = VAR_1 - VAR_0;
 if (VAR_4 <= VAR_3) {
  FUNC_1(VAR_0, ' ', VAR_4);
  return;
 }
 if (VAR_2) {
  if (VAR_2 > VAR_4 - VAR_3)
   VAR_2 = VAR_4 - VAR_3;
  FUNC_0(VAR_0 + VAR_3, VAR_0, VAR_2);
 }
 FUNC_1(VAR_0, ' ', VAR_3);
}
