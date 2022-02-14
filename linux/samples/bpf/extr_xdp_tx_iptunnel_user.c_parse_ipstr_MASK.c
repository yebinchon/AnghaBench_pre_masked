
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int,char const*,unsigned int*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(const char *VAR_4, unsigned int *VAR_5)
{
 if (FUNC_1(VAR_1, VAR_4, VAR_5) == 1) {
  return VAR_1;
 } else if (FUNC_1(VAR_0, VAR_4, VAR_5) == 1) {
  VAR_5[1] = VAR_5[2] = VAR_5[3] = 0;
  return VAR_0;
 }

 FUNC_0(VAR_3, "%s is an invalid IP\n", VAR_4);
 return VAR_2;
}
