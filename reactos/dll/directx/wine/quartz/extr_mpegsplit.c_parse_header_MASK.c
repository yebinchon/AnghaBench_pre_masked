
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef int LONGLONG ;
typedef int HRESULT ;
typedef int BYTE ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int,int,int) ;
 scalar_t__ FUNC_2 (int*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int*** VAR_4 ;

__attribute__((used)) static HRESULT FUNC_3(BYTE *VAR_5, LONGLONG *VAR_6, LONGLONG *VAR_7)
{
    int VAR_8, VAR_9, VAR_10 = 1, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    LONGLONG VAR_16;

    if (FUNC_2(VAR_5) != VAR_1)
    {
        FUNC_1("Not a valid header: %02x:%02x:%02x:%02x\n", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
        return VAR_0;
    }

    VAR_11 = (VAR_5[1]>>4)&0x1;
    if (VAR_11)
        VAR_10 = ((VAR_5[1]>>3)&0x1)^1;

    VAR_12 = 4-((VAR_5[1]>>1)&0x3);
    VAR_8 = ((VAR_5[2]>>4)&0xf);
    VAR_9 = ((VAR_5[2]>>2)&0x3) + (VAR_11?(VAR_10*3):6);
    VAR_13 = ((VAR_5[2]>>1)&0x1);

    VAR_14 = VAR_4[VAR_10][VAR_12-1][VAR_8] * 1000;
    if (!VAR_14)
    {
        FUNC_1("Not a valid header: %02x:%02x:%02x:%02x\n", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
        return VAR_0;
    }

    if (VAR_12 == 1)
        VAR_15 = 4 * (12 * VAR_14 / VAR_3[VAR_9] + VAR_13);
    else if (VAR_12 == 2)
        VAR_15 = 144 * VAR_14 / VAR_3[VAR_9] + VAR_13;
    else if (VAR_12 == 3)
        VAR_15 = 144 * VAR_14 / (VAR_3[VAR_9]<<VAR_10) + VAR_13;
    else
    {
        FUNC_0("Impossible layer %d\n", VAR_12);
        return VAR_0;
    }

    VAR_16 = (ULONGLONG)10000000 * (ULONGLONG)(VAR_15) / (ULONGLONG)(VAR_14/8);
    *VAR_6 = VAR_15;
    if (VAR_7)
        *VAR_7 += VAR_16;
    return VAR_2;
}
