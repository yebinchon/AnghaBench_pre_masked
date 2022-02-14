
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, char *VAR_1, int *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 while (VAR_0 < VAR_1 && (VAR_4 = FUNC_0(VAR_0)) == 1 && FUNC_1(VAR_0, '_'))
  VAR_0 += VAR_4;

 VAR_3 = VAR_0;
 if (VAR_3 >= VAR_1)
  return ((void*)0);

 while (VAR_3 < VAR_1 && !((VAR_4 = FUNC_0(VAR_3)) == 1 && FUNC_1(VAR_3, '_')))
  VAR_3 += VAR_4;

 *VAR_2 = VAR_3 - VAR_0;
 return VAR_0;
}
