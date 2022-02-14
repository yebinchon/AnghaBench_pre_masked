
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (unsigned char) ;

int FUNC_3(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 size_t VAR_4 = FUNC_1(VAR_0);
 size_t VAR_5 = FUNC_1(VAR_1);
 int VAR_6, VAR_7;

 if (VAR_0 == VAR_1) {
  return 0;
 }
 VAR_3 = FUNC_0(VAR_2, FUNC_0(VAR_4, VAR_5));
 while (VAR_3--) {
  VAR_6 = FUNC_2(*(unsigned char *)VAR_0++);
  VAR_7 = FUNC_2(*(unsigned char *)VAR_1++);
  if (VAR_6 != VAR_7) {
   return VAR_6 - VAR_7;
  }
 }

 return (int)(FUNC_0(VAR_2, VAR_4) - FUNC_0(VAR_2, VAR_5));
}
