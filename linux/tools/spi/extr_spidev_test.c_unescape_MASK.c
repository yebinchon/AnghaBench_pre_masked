
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 char *VAR_5 = VAR_1;
 char *VAR_6 = VAR_0;
 unsigned int VAR_7;

 while (*VAR_5) {
  if (*VAR_5 == '\\' && *(VAR_5+1) == 'x') {
   VAR_4 = FUNC_1(VAR_5 + 2, "%2x", &VAR_7);
   if (!VAR_4)
    FUNC_0("malformed input string");

   VAR_5 += 4;
   *VAR_6++ = (unsigned char)VAR_7;
  } else {
   *VAR_6++ = *VAR_5++;
  }
  VAR_3++;
 }
 return VAR_3;
}
