
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
 int VAR_1 ;
 size_t VAR_2 ;

VOID FUNC_0(ULONG VAR_3, ULONG VAR_4, ULONG VAR_5, PCSTR VAR_6, UCHAR VAR_7)
{
    PUCHAR VAR_8 = (PUCHAR)VAR_1;
    ULONG VAR_9, VAR_10;


    for (VAR_9 = VAR_3, VAR_10 = 0; VAR_6[VAR_10] && VAR_9 < VAR_2 && (VAR_5 > 0 ? VAR_10 < VAR_5 : VAR_0); VAR_9++, VAR_10++)
    {
        VAR_8[((VAR_4*2)*VAR_2)+(VAR_9*2)] = (UCHAR)VAR_6[VAR_10];
        VAR_8[((VAR_4*2)*VAR_2)+(VAR_9*2)+1] = VAR_7;
    }
}
