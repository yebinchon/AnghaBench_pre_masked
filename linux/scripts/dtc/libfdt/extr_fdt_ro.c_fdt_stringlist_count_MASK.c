
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (void const*,int,char const*,int*) ;
 int FUNC_1 (char const*,int) ;

int FUNC_2(const void *VAR_1, int VAR_2, const char *VAR_3)
{
 const char *VAR_4, *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_6);
 if (!VAR_4)
  return VAR_6;

 VAR_5 = VAR_4 + VAR_6;

 while (VAR_4 < VAR_5) {
  VAR_6 = FUNC_1(VAR_4, VAR_5 - VAR_4) + 1;


  if (VAR_4 + VAR_6 > VAR_5)
   return -VAR_0;

  VAR_4 += VAR_6;
  VAR_7++;
 }

 return VAR_7;
}
