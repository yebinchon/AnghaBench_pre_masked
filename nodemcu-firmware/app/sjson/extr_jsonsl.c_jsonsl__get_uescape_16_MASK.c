
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
    int VAR_1 = 0;
    int VAR_2;






    VAR_2 = FUNC_0(VAR_0[0]); if (VAR_2 == -1) { return -1; } VAR_1 |= (VAR_2 << (12 - (0 * 4)));;
    VAR_2 = FUNC_0(VAR_0[1]); if (VAR_2 == -1) { return -1; } VAR_1 |= (VAR_2 << (12 - (1 * 4)));;
    VAR_2 = FUNC_0(VAR_0[2]); if (VAR_2 == -1) { return -1; } VAR_1 |= (VAR_2 << (12 - (2 * 4)));;
    VAR_2 = FUNC_0(VAR_0[3]); if (VAR_2 == -1) { return -1; } VAR_1 |= (VAR_2 << (12 - (3 * 4)));;

    return VAR_1;
}
