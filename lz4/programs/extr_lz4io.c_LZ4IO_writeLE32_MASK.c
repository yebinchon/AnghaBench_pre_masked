
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0 (void* VAR_0, unsigned VAR_1)
{
    unsigned char* const VAR_2 = (unsigned char*)VAR_0;
    VAR_2[0] = (unsigned char)VAR_1;
    VAR_2[1] = (unsigned char)(VAR_1 >> 8);
    VAR_2[2] = (unsigned char)(VAR_1 >> 16);
    VAR_2[3] = (unsigned char)(VAR_1 >> 24);
}
