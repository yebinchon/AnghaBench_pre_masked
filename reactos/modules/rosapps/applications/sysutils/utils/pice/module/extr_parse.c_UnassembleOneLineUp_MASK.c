
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int LPSTR ;
typedef int LONG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_5(void)
{
    ULONG VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8;
    LONG VAR_9;
    LPSTR VAR_10;

    FUNC_0((0,"UnassembleOneLineUp()\n"));

    VAR_4 = VAR_3 = FUNC_3(VAR_2,VAR_1);

    FUNC_0((0,"UnassembleOneLineUp(): addrorg = %.8X\n",VAR_3));

    VAR_9 = 1;

    if((VAR_10 = FUNC_2(VAR_4-VAR_9,&VAR_6,&VAR_7)) )
    {
        VAR_9 = VAR_4 - VAR_6;
        FUNC_0((0,"UnassembleOneLineUp(): %s @ offset = %u\n",VAR_10,VAR_9));
    }
    else
    {

        VAR_9 = 15;
    }

    VAR_8 = VAR_4;


    VAR_3 = VAR_4 - VAR_9;
    do
    {
        FUNC_0((0,"UnassembleOneLineUp(): offset = %u addrorg %x addr %x\n",VAR_9,VAR_4,VAR_3));

        VAR_5 = VAR_3;
        VAR_0[0]=0;
     FUNC_1(&VAR_3,VAR_0);
        FUNC_0((0,"%.8X: %s\n",VAR_5,VAR_0));
    }while((VAR_3 != VAR_4) && (VAR_5 < VAR_4));

    if((VAR_4 - VAR_8)<=0)
        VAR_1--;
    else
        VAR_1 -= (VAR_4 - VAR_5);

    FUNC_0((0,"UnassembleOneLineUp(): new addr = %.4X:%.8X\n",VAR_2,VAR_1));

    FUNC_4();
}
