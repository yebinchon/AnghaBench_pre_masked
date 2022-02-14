
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned int VAR_0, char* VAR_1)
{

    int VAR_2;
    for (VAR_2 = 3; VAR_2 >= 0; VAR_2--) {
        VAR_1[VAR_2] = (VAR_0 & 0x000000ff);
        VAR_0 = (VAR_0 >> 8);
    }
    VAR_1[4] = '\0';
}
