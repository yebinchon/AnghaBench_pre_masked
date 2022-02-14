
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int PNIC_ADAPTER ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,int*,int ,int) ;
 int FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static BOOLEAN FUNC_2(
    PNIC_ADAPTER VAR_0,
    ULONG VAR_1)







{
    USHORT VAR_2;
    USHORT VAR_3;


    FUNC_0(VAR_0, &VAR_2, VAR_1, 0x02);


    VAR_2 ^= 0xFFFF;


    FUNC_1(VAR_0, VAR_1, &VAR_2, 0x02);


    FUNC_0(VAR_0, &VAR_3, VAR_1, 0x02);

    return (VAR_2 == VAR_3);
}
