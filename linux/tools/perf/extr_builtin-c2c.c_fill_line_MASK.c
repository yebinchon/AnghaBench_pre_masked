
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = FUNC_1(VAR_0);
 char *VAR_5;

 VAR_5 = FUNC_2(VAR_1 + 1);
 if (!VAR_5)
  return ((void*)0);

 VAR_3 = VAR_1 / 2 - VAR_4 / 2;

 for (VAR_2 = 0; VAR_2 < VAR_3 - 1; VAR_2++)
  VAR_5[VAR_2] = '-';

 VAR_5[VAR_2++] = ' ';

 FUNC_0(VAR_5 + VAR_2, VAR_0);

 VAR_2 += VAR_4;

 VAR_5[VAR_2++] = ' ';

 for (; VAR_2 < VAR_1; VAR_2++)
  VAR_5[VAR_2] = '-';

 return VAR_5;
}
