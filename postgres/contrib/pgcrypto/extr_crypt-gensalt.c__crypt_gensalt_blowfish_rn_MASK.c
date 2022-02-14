
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_word ;


 int FUNC_0 (char*,int const*,int) ;

char *
FUNC_1(unsigned long VAR_0,
         const char *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
 if (VAR_2 < 16 || VAR_4 < 7 + 22 + 1 ||
  (VAR_0 && (VAR_0 < 4 || VAR_0 > 31)))
 {
  if (VAR_4 > 0)
   VAR_3[0] = '\0';
  return ((void*)0);
 }

 if (!VAR_0)
  VAR_0 = 5;

 VAR_3[0] = '$';
 VAR_3[1] = '2';
 VAR_3[2] = 'a';
 VAR_3[3] = '$';
 VAR_3[4] = '0' + VAR_0 / 10;
 VAR_3[5] = '0' + VAR_0 % 10;
 VAR_3[6] = '$';

 FUNC_0(&VAR_3[7], (const BF_word *) VAR_1, 16);
 VAR_3[7 + 22] = '\0';

 return VAR_3;
}
