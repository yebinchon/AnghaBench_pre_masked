
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline char *FUNC_0(char *VAR_0, char *VAR_1, size_t VAR_2)
{
 char *VAR_3, *VAR_4;

 VAR_3 = VAR_0;
 VAR_4 = VAR_0 + VAR_2 - 1;

 for (; VAR_3 < VAR_4 && *VAR_1; ++VAR_3, ++VAR_1) {
  if (* (unsigned char *) VAR_1 < ' ' || * (unsigned char *) VAR_1 > '\x7f') {
   *VAR_3 = '.';
  } else {
   *VAR_3 = *VAR_1;
  }
 }

 *VAR_3 = '\0';

 return VAR_3;
}
