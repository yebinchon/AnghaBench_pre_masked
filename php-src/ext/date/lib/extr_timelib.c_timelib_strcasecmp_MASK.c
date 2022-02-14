
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (unsigned char) ;

int FUNC_3(const char *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 size_t VAR_3 = FUNC_1(VAR_0);
 size_t VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6;

 if (VAR_0 == VAR_1) {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_3, VAR_4);
 while (VAR_2--) {
  VAR_5 = FUNC_2(*(unsigned char *)VAR_0++);
  VAR_6 = FUNC_2(*(unsigned char *)VAR_1++);
  if (VAR_5 != VAR_6) {
   return VAR_5 - VAR_6;
  }
 }

 return (int)(VAR_3 - VAR_4);
}
