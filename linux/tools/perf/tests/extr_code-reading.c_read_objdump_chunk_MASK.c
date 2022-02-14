
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char) ;

__attribute__((used)) static size_t FUNC_4(const char **VAR_0, unsigned char **VAR_1,
     size_t *VAR_2)
{
 size_t VAR_3 = 0;
 unsigned char *VAR_4 = *VAR_1;


 while (*VAR_2 > 0) {
  char VAR_5, VAR_6;


  VAR_5 = *(*VAR_0)++;
  if (!FUNC_3(VAR_5))
   break;
  VAR_6 = *(*VAR_0)++;
  if (!FUNC_3(VAR_6))
   break;


  **VAR_1 = (FUNC_1(VAR_5) << 4) | FUNC_1(VAR_6);
  (*VAR_1)++;
  (*VAR_2)--;
  VAR_3++;


  if (FUNC_2(**VAR_0))
   break;
 }
 if (VAR_3 > 1 && !FUNC_0()) {
  unsigned char *VAR_7 = VAR_4 + VAR_3 - 1;
  unsigned char VAR_8;

  while (VAR_4 < VAR_7) {
   VAR_8 = *VAR_4;
   *VAR_4 = *VAR_7;
   *VAR_7 = VAR_8;
   VAR_4++;
   VAR_7--;
  }
 }

 return VAR_3;
}
