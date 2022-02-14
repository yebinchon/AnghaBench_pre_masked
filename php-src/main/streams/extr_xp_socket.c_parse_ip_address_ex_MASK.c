
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int) ;
 char* FUNC_2 (char const*,char,size_t) ;
 int * FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static inline char *FUNC_4(const char *VAR_0, size_t VAR_1, int *VAR_2, int VAR_3, zend_string **VAR_4)
{
 char *VAR_5;
 char *VAR_6 = ((void*)0);
 if (VAR_1) {
  VAR_5 = FUNC_2(VAR_0, ':', VAR_1 - 1);
 } else {
  VAR_5 = ((void*)0);
 }
 if (VAR_5) {
  *VAR_2 = FUNC_0(VAR_5 + 1);
  VAR_6 = FUNC_1(VAR_0, VAR_5 - VAR_0);
 } else {
  if (VAR_3) {
   *VAR_4 = FUNC_3(0, "Failed to parse address \"%s\"", VAR_0);
  }
  return ((void*)0);
 }

 return VAR_6;
}
