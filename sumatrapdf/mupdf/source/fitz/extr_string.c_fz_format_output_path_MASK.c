
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char) ;

void
FUNC_6(fz_context *VAR_1, char *VAR_2, size_t VAR_3, const char *VAR_4, int VAR_5)
{
 const char *VAR_6, *VAR_7;
 char VAR_8[40];
 int VAR_9, VAR_10;
 int VAR_11 = 0;

 for (VAR_9 = 0; VAR_5; VAR_5 /= 10)
  VAR_8[VAR_9++] = '0' + VAR_5 % 10;
 VAR_8[VAR_9] = 0;

 VAR_6 = VAR_7 = FUNC_3(VAR_4, '%');
 if (VAR_7)
 {
  ++VAR_7;
  while (*VAR_7 >= '0' && *VAR_7 <= '9')
   VAR_11 = VAR_11 * 10 + (*VAR_7++ - '0');
 }
 if (VAR_7 && *VAR_7 == 'd')
 {
  ++VAR_7;
 }
 else
 {
  VAR_6 = VAR_7 = FUNC_5(VAR_4, '.');
  if (!VAR_7)
   VAR_6 = VAR_7 = VAR_4 + FUNC_4(VAR_4);
 }

 if (VAR_11 < 1)
  VAR_11 = 1;
 while (VAR_9 < VAR_11 && VAR_9 < (int)sizeof VAR_8)
  VAR_8[VAR_9++] = '0';
 VAR_10 = VAR_6 - VAR_4;
 if (VAR_10 + VAR_9 + FUNC_4(VAR_7) >= VAR_3)
  FUNC_1(VAR_1, VAR_0, "path name buffer overflow");
 FUNC_2(VAR_2, VAR_4, VAR_10);
 while (VAR_9 > 0)
  VAR_2[VAR_10++] = VAR_8[--VAR_9];
 FUNC_0(VAR_2 + VAR_10, VAR_7, VAR_3 - VAR_10);
}
