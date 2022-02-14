
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4(void)
{
    ULONG VAR_3,VAR_4;

    FUNC_0((0,"UnassembleOneLineDown()\n"));

    VAR_4 = VAR_3 = FUNC_2(VAR_2,VAR_1);

    FUNC_0((0,"UnassembleOneLineDown(): addr = %.8X\n",VAR_3));

    VAR_0[0]=0;
 FUNC_1(&VAR_3,VAR_0);

    FUNC_0((0,"UnassembleOneLineDown(): addr after = %.8X\n",VAR_3));

    VAR_1 += (VAR_3 - VAR_4);
    FUNC_3();
}
