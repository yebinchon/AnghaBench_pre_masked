
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int) ;

char *
FUNC_1(int VAR_0)
{
 static char VAR_1[12];
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
 {
  VAR_1[VAR_2] = FUNC_0(VAR_0);
  VAR_0 >>= 6;
 }

 VAR_1[VAR_2] = '\0';
 return VAR_1;
}
