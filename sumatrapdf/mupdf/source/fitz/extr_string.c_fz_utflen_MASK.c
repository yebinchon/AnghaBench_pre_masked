
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*,char const*) ;

int
FUNC_1(const char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 VAR_3 = 0;
 for(;;) {
  VAR_2 = *(const unsigned char*)VAR_1;
  if(VAR_2 < VAR_0) {
   if(VAR_2 == 0)
    return VAR_3;
   VAR_1++;
  } else
   VAR_1 += FUNC_0(&VAR_4, VAR_1);
  VAR_3++;
 }
 return 0;
}
