
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef size_t ULONG ;
typedef scalar_t__ UCHAR ;
typedef scalar_t__* PUCHAR ;
typedef scalar_t__* PCSTR ;


 int VAR_0 ;
 size_t VAR_1 ;

VOID FUNC_0(ULONG VAR_2, ULONG VAR_3, PCSTR VAR_4, UCHAR VAR_5)
{
    PUCHAR VAR_6 = (PUCHAR)VAR_0;
    ULONG VAR_7, VAR_8;


    for (VAR_7 = VAR_2, VAR_8 = 0; VAR_4[VAR_8] && VAR_7 < VAR_1; VAR_7++, VAR_8++)
    {
        VAR_6[((VAR_3*2)*VAR_1)+(VAR_7*2)] = (UCHAR)VAR_4[VAR_8];
        VAR_6[((VAR_3*2)*VAR_1)+(VAR_7*2)+1] = VAR_5;
    }
}
