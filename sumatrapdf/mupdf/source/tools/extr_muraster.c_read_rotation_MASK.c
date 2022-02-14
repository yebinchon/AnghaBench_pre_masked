
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1)
{
 int VAR_2;

 if (FUNC_2(VAR_1, "auto"))
 {
  return -1;
 }

 VAR_2 = FUNC_1(VAR_1);

 VAR_2 = VAR_2 % 360;
 if (VAR_2 % 90 != 0)
 {
  FUNC_0(VAR_0, "Ignoring invalid rotation\n");
  VAR_2 = 0;
 }

 return VAR_2;
}
