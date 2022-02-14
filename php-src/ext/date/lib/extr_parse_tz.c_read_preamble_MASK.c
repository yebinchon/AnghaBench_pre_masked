
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_tzinfo ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char const*,char*,int) ;
 int FUNC_1 (unsigned char const**,int *) ;
 int FUNC_2 (unsigned char const**,int *) ;

__attribute__((used)) static int FUNC_3(const unsigned char **VAR_2, timelib_tzinfo *VAR_3, unsigned int *VAR_4)
{

 if (FUNC_0(*VAR_2, "PHP", 3) == 0) {
  *VAR_4 = VAR_0;
  return FUNC_1(VAR_2, VAR_3);
 } else if (FUNC_0(*VAR_2, "TZif", 4) == 0) {
  *VAR_4 = VAR_1;
  return FUNC_2(VAR_2, VAR_3);
 } else {
  return -1;
 }
}
