
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;



__attribute__((used)) static ULONGLONG
FUNC_0(ULONGLONG VAR_0,
                ULONGLONG VAR_1,
                ULONGLONG *VAR_2)
{
    ULONG VAR_3, VAR_4, VAR_5, VAR_6;
    ULONG VAR_7, VAR_8;
    ULONGLONG VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_3 = (ULONG)(VAR_0 & 0xFFFFFFFFULL);
    VAR_4 = (ULONG)(VAR_0 >> 32);
    VAR_5 = (ULONG)(VAR_1 & 0xFFFFFFFFULL);
    VAR_6 = (ULONG)(VAR_1 >> 32);

    VAR_9 = (ULONGLONG)VAR_3 * (ULONGLONG)VAR_5;
    VAR_11 = (ULONGLONG)VAR_3 * (ULONGLONG)VAR_6;
    VAR_12 = (ULONGLONG)VAR_4 * (ULONGLONG)VAR_5;
    *VAR_2 = (ULONGLONG)VAR_4 * (ULONGLONG)VAR_6;

    VAR_10 = VAR_11 + VAR_12;
    if (VAR_10 < VAR_11) *VAR_2 += 1ULL << 32;

    VAR_7 = (ULONG)(VAR_10 & 0xFFFFFFFFULL);
    VAR_8 = (ULONG)(VAR_10 >> 32);

    VAR_9 += (ULONGLONG)VAR_7 << 32;
    if ((ULONG)(VAR_9 >> 32) < VAR_7) (*VAR_2)++;

    *VAR_2 += VAR_8;
    return VAR_9;
}
