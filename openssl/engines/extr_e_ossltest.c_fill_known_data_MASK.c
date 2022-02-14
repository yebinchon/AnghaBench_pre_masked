
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, unsigned int VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2=0; VAR_2<VAR_1; VAR_2++) {
        VAR_0[VAR_2] = (unsigned char)(VAR_2 & 0xff);
    }
}
