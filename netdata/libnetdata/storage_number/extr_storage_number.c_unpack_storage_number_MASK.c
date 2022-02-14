
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int storage_number ;
typedef int calculated_number ;


 scalar_t__ FUNC_0 (int) ;

calculated_number FUNC_1(storage_number VAR_0) {
    if(!VAR_0) return 0;

    int VAR_1 = 0, VAR_2 = 0;
    int VAR_3 = 10;


    if(FUNC_0(VAR_0 & (1 << 31)))
        VAR_1 = 1;


    if(FUNC_0(VAR_0 & (1 << 30)))
        VAR_2 = 1;


    if(FUNC_0(VAR_0 & (1 << 26)))
        VAR_3 = 100;





    int VAR_4 = (VAR_0 & ((1<<29)|(1<<28)|(1<<27))) >> 27;


    VAR_0 ^= VAR_0 & ((1<<31)|(1<<30)|(1<<29)|(1<<28)|(1<<27)|(1<<26)|(1<<25)|(1<<24));

    calculated_number VAR_5 = VAR_0;



    if(VAR_2) {
        for(; VAR_4; VAR_4--)
            VAR_5 *= VAR_3;
    }
    else {
        for( ; VAR_4 ; VAR_4--)
            VAR_5 /= 10;
    }

    if(VAR_1) VAR_5 = -VAR_5;
    return VAR_5;
}
