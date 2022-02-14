
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, char *VAR_1)
{
 int VAR_2;
 int VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 VAR_3 = FUNC_1(VAR_1);
 VAR_2 = FUNC_1(VAR_0);

 if (VAR_2 > VAR_3 && FUNC_0(VAR_0 + VAR_2 - VAR_3, VAR_1) == 0)
  VAR_0[VAR_2 - VAR_3] = '\0';
}
