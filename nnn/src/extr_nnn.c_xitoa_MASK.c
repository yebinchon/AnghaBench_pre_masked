
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;



__attribute__((used)) static char *FUNC_0(uint VAR_0)
{
 static char VAR_1[32] = {0};
 int VAR_2 = 30;

 if (!VAR_0)
  return "0";

 for (; VAR_0 && VAR_2; --VAR_2, VAR_0 /= 10)
  VAR_1[VAR_2] = '0' + (VAR_0 % 10);

 return &VAR_1[++VAR_2];
}
