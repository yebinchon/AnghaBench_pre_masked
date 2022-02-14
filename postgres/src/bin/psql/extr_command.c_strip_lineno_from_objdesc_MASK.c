
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_0)
{
 char *VAR_1;
 int VAR_2;

 if (!VAR_0 || VAR_0[0] == '\0')
  return -1;

 VAR_1 = VAR_0 + FUNC_5(VAR_0) - 1;
 while (VAR_1 > VAR_0 && FUNC_1((unsigned char) *VAR_1) && FUNC_3((unsigned char) *VAR_1))
  VAR_1--;


 if (VAR_1 == VAR_0 || !FUNC_1((unsigned char) *VAR_1) || !FUNC_2((unsigned char) *VAR_1))
  return -1;


 while (VAR_1 > VAR_0 && FUNC_1((unsigned char) *VAR_1) && FUNC_2((unsigned char) *VAR_1))
  VAR_1--;



 if (VAR_1 == VAR_0 || !FUNC_1((unsigned char) *VAR_1) ||
  !(FUNC_3((unsigned char) *VAR_1) || *VAR_1 == ')'))
  return -1;


 VAR_1++;
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 1)
 {
  FUNC_4("invalid line number: %s", VAR_1);
  return 0;
 }


 *VAR_1 = '\0';

 return VAR_2;
}
