
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;



__attribute__((used)) static
WORD
FUNC_0(
    WORD VAR_0,
    WORD VAR_1)
{
    WORD VAR_2[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (VAR_0 == 2 && VAR_1 % 4 == 0 && VAR_1 % 400 != 0)
        return 29;

    return VAR_2[VAR_0];
}
