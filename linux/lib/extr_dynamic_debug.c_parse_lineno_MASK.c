
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int,unsigned int*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static inline int FUNC_3(const char *VAR_1, unsigned int *VAR_2)
{
 FUNC_0(VAR_1 == ((void*)0));
 if (*VAR_1 == '\0') {
  *VAR_2 = 0;
  return 0;
 }
 if (FUNC_1(VAR_1, 10, VAR_2) < 0) {
  FUNC_2("bad line-number: %s\n", VAR_1);
  return -VAR_0;
 }
 return 0;
}
