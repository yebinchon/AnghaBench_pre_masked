
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0 (const void* VAR_0)
{
    const unsigned char* const VAR_1 = (const unsigned char*)VAR_0;
    unsigned VAR_2 = VAR_1[0];
    VAR_2 += (unsigned)VAR_1[1] << 8;
    VAR_2 += (unsigned)VAR_1[2] << 16;
    VAR_2 += (unsigned)VAR_1[3] << 24;
    return VAR_2;
}
