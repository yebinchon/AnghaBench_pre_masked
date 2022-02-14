
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int USHORT ;
typedef int ULONG_PTR ;
typedef int* PUSHORT ;
typedef int* PUCHAR ;
typedef int PNIC_ADAPTER ;


 int FUNC_0 (int ,int*,int,int) ;
 int FUNC_1 (int ,int,int*,int) ;

VOID FUNC_2(
    PNIC_ADAPTER VAR_0,
    ULONG_PTR VAR_1,
    PUCHAR VAR_2,
    USHORT VAR_3)
{
    USHORT VAR_4;


    if (VAR_1 & 0x01) {

        FUNC_0(VAR_0, &VAR_4, VAR_1 - 1, 0x02);


        VAR_4 = (VAR_4 & 0x00FF) | (*VAR_2 << 8);


        FUNC_1(VAR_0, VAR_1 - 1, &VAR_4, 0x02);


        VAR_2 = (PUCHAR) ((ULONG_PTR) VAR_2 + 1);
        VAR_1 += 1;
        VAR_3--;
    }

    if (VAR_3 & 0x01) {

        VAR_4 = VAR_3 & 0xFFFE;
        FUNC_1(VAR_0, VAR_1, (PUSHORT)VAR_2, VAR_4);
        VAR_2 += VAR_4;
        VAR_1 += VAR_4;


        FUNC_0(VAR_0, &VAR_4, VAR_1, 0x02);


        VAR_4 = (VAR_4 & 0xFF00) | (*VAR_2);


        FUNC_1(VAR_0, VAR_1, &VAR_4, 0x02);
    } else

        FUNC_1(VAR_0, VAR_1, (PUSHORT)VAR_2, VAR_3);
}
