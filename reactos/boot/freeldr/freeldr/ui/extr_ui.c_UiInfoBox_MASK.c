
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef size_t ULONG ;
typedef size_t SIZE_T ;
typedef char* PCSTR ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t,size_t,size_t,size_t,int ,int ,int ,int ,int ) ;
 int FUNC_2 (size_t,size_t,size_t,size_t,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_3 (char*) ;

VOID FUNC_4(PCSTR VAR_8)
{
    SIZE_T VAR_9;
    ULONG VAR_10;
    ULONG VAR_11;
    ULONG VAR_12;
    SIZE_T VAR_13;
    SIZE_T VAR_14;
    ULONG VAR_15;
    ULONG VAR_16;
    ULONG VAR_17;
    ULONG VAR_18;

    VAR_9 = FUNC_3(VAR_8);


    VAR_12 = 0;
    VAR_10 = 0;
    VAR_14 = 0;
    for (VAR_13=0; VAR_13<VAR_9; VAR_13++)
    {
        if (VAR_8[VAR_13] == '\n')
        {
            VAR_14 = VAR_13;
            VAR_12++;
        }
        else
        {
            if ((VAR_13 - VAR_14) > VAR_10)
            {
                VAR_10 = (ULONG)(VAR_13 - VAR_14);
            }
        }
    }


    VAR_10 += 6;
    VAR_11 = VAR_12 + 4;


    VAR_15 = (VAR_5 / 2) - (VAR_10 / 2);
    VAR_16 =(VAR_4 / 2) - (VAR_11 / 2);
    VAR_17 = (VAR_5 / 2) + (VAR_10 / 2);
    VAR_18 = (VAR_4 / 2) + (VAR_11 / 2);


    FUNC_1(VAR_15,
              VAR_16,
              VAR_17,
              VAR_18,
              VAR_7,
              VAR_0,
              VAR_1,
              VAR_1,
              FUNC_0(VAR_3, VAR_2)
              );


    FUNC_2(VAR_15, VAR_16, VAR_17, VAR_18, VAR_8, FUNC_0(VAR_6, VAR_2));
}
