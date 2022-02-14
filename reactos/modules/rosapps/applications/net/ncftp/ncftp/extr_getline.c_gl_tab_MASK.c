
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, int VAR_1, int *VAR_2, size_t VAR_3)

{
    int VAR_4, VAR_5, VAR_6;

    VAR_6 = (int) FUNC_0(VAR_0);
    VAR_5 = 8 - (VAR_1 + *VAR_2) % 8;
    for (VAR_4=VAR_6; VAR_4 >= *VAR_2; VAR_4--)
     if (VAR_4+VAR_5 < (int) VAR_3)
  VAR_0[VAR_4+VAR_5] = VAR_0[VAR_4];
    for (VAR_4=0; VAR_4 < VAR_5; VAR_4++)
     if (*VAR_2+VAR_4 < (int) VAR_3)
  VAR_0[*VAR_2+VAR_4] = ' ';
    VAR_4 = *VAR_2;
    *VAR_2 = VAR_4 + VAR_5;
    return VAR_4;
}
