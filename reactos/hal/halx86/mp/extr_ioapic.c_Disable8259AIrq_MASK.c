
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int PUCHAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

VOID FUNC_2(ULONG VAR_0)
{
    UCHAR VAR_1;

    if (VAR_0 >= 8)
    {
       VAR_1 = FUNC_0((PUCHAR)0xA1);
       VAR_1 |= (1 << (VAR_0 - 8));
       FUNC_1((PUCHAR)0xA1, VAR_1);
    }
    else
    {
       VAR_1 = FUNC_0((PUCHAR)0x21);
       VAR_1 |= (1 << VAR_0);
       FUNC_1((PUCHAR)0x21, VAR_1);
    }
}
