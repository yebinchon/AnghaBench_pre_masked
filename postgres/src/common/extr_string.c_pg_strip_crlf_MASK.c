
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int
FUNC_1(char *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 while (VAR_1 > 0 && (VAR_0[VAR_1 - 1] == '\n' ||
        VAR_0[VAR_1 - 1] == '\r'))
  VAR_0[--VAR_1] = '\0';

 return VAR_1;
}
