
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int PUCHAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static
UCHAR
FUNC_2(UCHAR VAR_0)
{
    UCHAR VAR_1;

    FUNC_1((PUCHAR)0x70, 0x10);
    VAR_1 = FUNC_0((PUCHAR)0x71);

    if (VAR_0 == 0)
        return VAR_1 >> 4;
    else if (VAR_0 == 1)
        return VAR_1 & 0x0F;

    return 0;
}
