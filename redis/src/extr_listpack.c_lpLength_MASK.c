
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 unsigned char* FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,scalar_t__) ;

uint32_t FUNC_4(unsigned char *VAR_1) {
    uint32_t VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 != VAR_0) return VAR_2;



    uint32_t VAR_3 = 0;
    unsigned char *VAR_4 = FUNC_0(VAR_1);
    while(VAR_4) {
        VAR_3++;
        VAR_4 = FUNC_2(VAR_1,VAR_4);
    }



    if (VAR_3 < VAR_0) FUNC_3(VAR_1,VAR_3);
    return VAR_3;
}
