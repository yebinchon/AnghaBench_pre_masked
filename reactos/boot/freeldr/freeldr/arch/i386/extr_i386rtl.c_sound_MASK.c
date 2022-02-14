
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PUCHAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(int VAR_0)
{
    int VAR_1;

    if (VAR_0 == 0)
    {
        FUNC_1((PUCHAR)0x61, FUNC_0((PUCHAR)0x61) & ~3);
        return;
    }

    VAR_1 = 1193046 / VAR_0;
    FUNC_1((PUCHAR)0x43, 0xb6);
    FUNC_1((PUCHAR)0x42, VAR_1 & 0xff);
    FUNC_1((PUCHAR)0x42, VAR_1 >> 8);
    FUNC_1((PUCHAR)0x61, FUNC_0((PUCHAR)0x61) | 3);
}
