
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(uint32_t VAR_4, void *VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
    int VAR_8;
    uint8_t *VAR_9 = (uint8_t *)VAR_5;
    uint16_t VAR_10;


    FUNC_5(VAR_4);
    FUNC_3(VAR_4, VAR_3, VAR_2);
    FUNC_1(800);
    FUNC_6(VAR_4);


    FUNC_5(VAR_4);
    FUNC_3(VAR_4, VAR_3, VAR_2);
    FUNC_4(VAR_4, 0x03);
    FUNC_4(VAR_4, VAR_7);
    FUNC_4(VAR_4, VAR_6);
    FUNC_6(VAR_4);


    FUNC_1(1500);
    FUNC_5(VAR_4);
    FUNC_3(VAR_4, VAR_3, VAR_1);
    FUNC_1(30);
    for(VAR_8=0; VAR_8<VAR_6+2; VAR_8++)
 VAR_9[VAR_8] = FUNC_2(VAR_4,1);
    VAR_10 = FUNC_2(VAR_4,1);
    VAR_10 |= FUNC_2(VAR_4,0) << 8;
    FUNC_6(VAR_4);

    if(VAR_9[0] != 0x3 || VAR_9[1] != VAR_6)
 return -VAR_0;
    if(VAR_10 != FUNC_0(VAR_9,VAR_6+2))
 return -VAR_0;
    return 0;
}
