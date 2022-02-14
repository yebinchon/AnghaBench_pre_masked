
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned char uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int ,unsigned char*,size_t) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(unsigned char *VAR_3, size_t VAR_4) {
    unsigned char *VAR_5;
    uint16_t VAR_6;
    uint64_t VAR_7;


    if (VAR_4 < 10) return VAR_0;
    VAR_5 = VAR_3+(VAR_4-10);


    VAR_6 = (VAR_5[1] << 8) | VAR_5[0];
    if (VAR_6 > VAR_2) return VAR_0;


    VAR_7 = FUNC_0(0,VAR_3,VAR_4-8);
    FUNC_2(&VAR_7);
    return (FUNC_1(&VAR_7,VAR_5+2,8) == 0) ? VAR_1 : VAR_0;
}
