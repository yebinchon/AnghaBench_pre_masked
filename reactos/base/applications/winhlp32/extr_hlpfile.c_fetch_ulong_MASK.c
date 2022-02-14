
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int BYTE ;



__attribute__((used)) static ULONG FUNC_0(const BYTE** VAR_0)
{
    ULONG VAR_1;

    if (*(*VAR_0) & 1)
    {
        VAR_1 = *(const ULONG*)(*VAR_0) / 2;
        (*VAR_0) += 4;
    }
    else
    {
        VAR_1 = *(const USHORT*)(*VAR_0) / 2;
        (*VAR_0) += 2;
    }
    return VAR_1;
}
