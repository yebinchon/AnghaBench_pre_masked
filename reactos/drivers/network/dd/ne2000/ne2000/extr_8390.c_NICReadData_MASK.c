
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int USHORT ;
typedef int ULONG_PTR ;
typedef scalar_t__ UCHAR ;
typedef int* PUSHORT ;
typedef scalar_t__* PUCHAR ;
typedef int PNIC_ADAPTER ;


 int FUNC_0 (int ,int*,int,int) ;

VOID FUNC_1(
    PNIC_ADAPTER VAR_0,
    PUCHAR VAR_1,
    ULONG_PTR VAR_2,
    USHORT VAR_3)
{
    USHORT VAR_4;


    if (VAR_2 & 0x01) {

        FUNC_0(VAR_0, &VAR_4, VAR_2 - 1, 0x02);
        *VAR_1 = (UCHAR)(VAR_4 >> 8);
        VAR_2++;
        VAR_1++;
        VAR_3--;
    }

    if (VAR_3 & 0x01) {

        VAR_4 = VAR_3 & 0xFFFE;
        FUNC_0(VAR_0, (PUSHORT)VAR_1, VAR_2, VAR_4);
        VAR_2 += VAR_4;
        VAR_1 = (PUCHAR)((ULONG_PTR) VAR_1 + VAR_4);


        FUNC_0(VAR_0, &VAR_4, VAR_2, 0x02);
        *VAR_1 = (UCHAR)(VAR_4 & 0x00FF);
    } else

        FUNC_0(VAR_0, (PUSHORT)VAR_1, VAR_2, VAR_3);
}
