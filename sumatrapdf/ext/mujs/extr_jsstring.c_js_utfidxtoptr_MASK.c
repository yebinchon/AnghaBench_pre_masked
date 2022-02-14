
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char Rune ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char*,char const*) ;

const char *FUNC_1(const char *VAR_1, int VAR_2)
{
 Rune VAR_3;
 while (VAR_2-- > 0) {
  VAR_3 = *(unsigned char*)VAR_1;
  if (VAR_3 < VAR_0) {
   if (VAR_3 == 0)
    return ((void*)0);
   ++VAR_1;
  } else
   VAR_1 += FUNC_0(&VAR_3, VAR_1);
 }
 return VAR_1;
}
