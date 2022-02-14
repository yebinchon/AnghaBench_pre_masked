
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const UCHAR *VAR_2, ULONG VAR_3, BOOL VAR_4)
{
    ULONG VAR_5;

    if (VAR_3 <= sizeof(WORD))
        return VAR_1;

    while (VAR_3 >= sizeof(WORD))
    {
        VAR_5 = (*(WORD *)VAR_2 & 0xFFF) + 1;
        if (VAR_3 < sizeof(WORD) + VAR_5)
            return VAR_1;
        if (!VAR_4)
            break;
        VAR_2 += sizeof(WORD) + VAR_5;
        VAR_3 -= sizeof(WORD) + VAR_5;
    }

    return VAR_0;
}
