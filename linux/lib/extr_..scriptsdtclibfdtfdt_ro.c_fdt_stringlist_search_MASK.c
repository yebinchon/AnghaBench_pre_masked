
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (void const*,int,char const*,int*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int) ;

int FUNC_4(const void *VAR_2, int VAR_3, const char *VAR_4,
     const char *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;
 const char *VAR_9, *VAR_10;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_6);
 if (!VAR_9)
  return VAR_6;

 VAR_7 = FUNC_2(VAR_5) + 1;
 VAR_10 = VAR_9 + VAR_6;

 while (VAR_9 < VAR_10) {
  VAR_6 = FUNC_3(VAR_9, VAR_10 - VAR_9) + 1;


  if (VAR_9 + VAR_6 > VAR_10)
   return -VAR_0;

  if (VAR_6 == VAR_7 && FUNC_1(VAR_9, VAR_5, VAR_6) == 0)
   return VAR_8;

  VAR_9 += VAR_6;
  VAR_8++;
 }

 return -VAR_1;
}
