
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,char const*) ;
 scalar_t__ FUNC_1 (int) ;

float FUNC_2(const char *VAR_0)
{
 int VAR_1;
 float VAR_2 = 0;
 while (*VAR_0)
 {
  VAR_0 += FUNC_0(&VAR_1, VAR_0);
  VAR_2 += FUNC_1(VAR_1);
 }
 return VAR_2;
}
