
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

void FUNC_5(ULONG VAR_3)
{
    ULONG VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;
    LONG VAR_11;
    LPSTR VAR_12;

    FUNC_0((0,"UnassembleOnePageUp()\n"));

    for(VAR_9=0;VAR_9<VAR_3;VAR_9++)
    {
        VAR_5 = VAR_4 = FUNC_3(VAR_2,VAR_1);

        FUNC_0((0,"UnassembleOnePageUp(): addrorg = %.8X\n",VAR_4));

        VAR_11 = 1;

        if((VAR_12 = FUNC_2(VAR_5-VAR_11,&VAR_7,&VAR_8)) )
        {
            VAR_11 = VAR_5 - VAR_7;
            FUNC_0((0,"UnassembleOnePageUp(): %s @ offset = %u\n",VAR_12,VAR_11));
        }
        else
        {

            VAR_11 = 15;
        }


        VAR_4 = VAR_5 - VAR_11;
        VAR_10 = VAR_5;
        do
        {
            FUNC_0((0,"UnassembleOnePageUp(): offset = %u addrorg %x addr %x\n",VAR_11,VAR_5,VAR_4));
            VAR_6 = VAR_4;

            VAR_0[0]=0;
         FUNC_1(&VAR_4,VAR_0);
            FUNC_0((0,"%.8X: %s\n",VAR_6,VAR_0));
        }while((VAR_4 != VAR_5) && (VAR_6 < VAR_5));

        if((VAR_5 - VAR_10)<=0)
            VAR_1--;
        else
            VAR_1 -= (VAR_5 - VAR_6);

    }

    FUNC_0((0,"UnassembleOnePageUp(): new addr = %.4X:%.8X\n",VAR_2,VAR_1));

    FUNC_4();
}
