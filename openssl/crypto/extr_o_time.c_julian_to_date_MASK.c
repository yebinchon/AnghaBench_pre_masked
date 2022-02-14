
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(long VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
    long VAR_4 = VAR_0 + 68569;
    long VAR_5 = (4 * VAR_4) / 146097;
    long VAR_6, VAR_7;

    VAR_4 = VAR_4 - (146097 * VAR_5 + 3) / 4;
    VAR_6 = (4000 * (VAR_4 + 1)) / 1461001;
    VAR_4 = VAR_4 - (1461 * VAR_6) / 4 + 31;
    VAR_7 = (80 * VAR_4) / 2447;
    *VAR_3 = VAR_4 - (2447 * VAR_7) / 80;
    VAR_4 = VAR_7 / 11;
    *VAR_2 = VAR_7 + 2 - (12 * VAR_4);
    *VAR_1 = 100 * (VAR_5 - 49) + VAR_6 + VAR_4;
}
