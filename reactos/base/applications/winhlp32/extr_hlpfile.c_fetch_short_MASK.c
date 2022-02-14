
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;



__attribute__((used)) static short FUNC_0(const BYTE** VAR_0)
{
    short VAR_1;

    if (*(*VAR_0) & 1)
    {
        VAR_1 = (*(const unsigned short*)(*VAR_0) - 0x8000) / 2;
        (*VAR_0) += 2;
    }
    else
    {
        VAR_1 = (*(const unsigned char*)(*VAR_0) - 0x80) / 2;
        (*VAR_0)++;
    }
    return VAR_1;
}
