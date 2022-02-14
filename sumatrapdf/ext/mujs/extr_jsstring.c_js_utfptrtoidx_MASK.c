
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Rune ;


 unsigned char VAR_0 ;
 int FUNC_0 (int *,char const*) ;

int FUNC_1(const char *VAR_1, const char *VAR_2)
{
 Rune VAR_3;
 int VAR_4 = 0;
 while (VAR_1 < VAR_2) {
  if (*(unsigned char *)VAR_1 < VAR_0)
   ++VAR_1;
  else
   VAR_1 += FUNC_0(&VAR_3, VAR_1);
  ++VAR_4;
 }
 return VAR_4;
}
