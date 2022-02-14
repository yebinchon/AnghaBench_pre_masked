
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void const*) ;
 char* FUNC_1 (void const*,char const*,int) ;
 int FUNC_2 (void const*,char const*) ;
 int FUNC_3 (void const*,int,char const*,int) ;
 char* FUNC_4 (char const*,char,int) ;

int FUNC_5(const void *VAR_1, const char *VAR_2, int VAR_3)
{
 const char *VAR_4 = VAR_2 + VAR_3;
 const char *VAR_5 = VAR_2;
 int VAR_6 = 0;

 FUNC_0(VAR_1);


 if (*VAR_2 != '/') {
  const char *VAR_7 = FUNC_4(VAR_2, '/', VAR_4 - VAR_5);

  if (!VAR_7)
   VAR_7 = VAR_4;

  VAR_5 = FUNC_1(VAR_1, VAR_5, VAR_7 - VAR_5);
  if (!VAR_5)
   return -VAR_0;
  VAR_6 = FUNC_2(VAR_1, VAR_5);

  VAR_5 = VAR_7;
 }

 while (VAR_5 < VAR_4) {
  const char *VAR_8;

  while (*VAR_5 == '/') {
   VAR_5++;
   if (VAR_5 == VAR_4)
    return VAR_6;
  }
  VAR_8 = FUNC_4(VAR_5, '/', VAR_4 - VAR_5);
  if (! VAR_8)
   VAR_8 = VAR_4;

  VAR_6 = FUNC_3(VAR_1, VAR_6, VAR_5, VAR_8-VAR_5);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_5 = VAR_8;
 }

 return VAR_6;
}
