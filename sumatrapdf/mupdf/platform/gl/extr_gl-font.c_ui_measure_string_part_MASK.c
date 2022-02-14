
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,char const*) ;
 scalar_t__ FUNC_1 (int) ;

float FUNC_2(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;
 float VAR_3 = 0;
 while (VAR_0 < VAR_1)
 {
  VAR_0 += FUNC_0(&VAR_2, VAR_0);
  VAR_3 += FUNC_1(VAR_2);
 }
 return VAR_3;
}
