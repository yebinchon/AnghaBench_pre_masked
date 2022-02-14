
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;

void FUNC_1(uint32 VAR_6, uint8 VAR_7, uint8 VAR_8, uint8 VAR_9)
{

    FUNC_0(VAR_4, 0);


    {
        uint32 VAR_10;


        FUNC_0(VAR_5, 0x80);


        VAR_10 = VAR_0 / VAR_6;
        FUNC_0(VAR_2, VAR_10 & 0xff);
        FUNC_0(VAR_3, (VAR_10 & 0xff00)>>8);


        FUNC_0(VAR_5, 0x0);
    }


    FUNC_0(VAR_1, VAR_7 | VAR_8 | VAR_9);
}
