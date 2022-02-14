
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,char*) ;
 float FUNC_1 (int) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, char *VAR_1, float VAR_2, float VAR_3)
{
 int VAR_4;
 while (VAR_0 < VAR_1)
 {
  int VAR_5 = FUNC_0(&VAR_4, VAR_0);
  float VAR_6 = FUNC_1(VAR_4);
  if (VAR_2 + (VAR_6 / 2) >= VAR_3)
   return VAR_0;
  VAR_2 += VAR_6;
  VAR_0 += VAR_5;
 }
 return VAR_1;
}
