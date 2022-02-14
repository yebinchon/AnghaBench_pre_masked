
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned int) ;
 unsigned char* FUNC_1 (unsigned char*,unsigned char*,unsigned int,unsigned int*) ;
 unsigned int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (unsigned char*,unsigned int) ;

unsigned char *FUNC_4(unsigned char *VAR_1, unsigned char *VAR_2, unsigned int VAR_3, int *VAR_4) {
    unsigned int VAR_5, VAR_6;
    unsigned char *VAR_7 = FUNC_1(VAR_1,VAR_2,VAR_3,&VAR_5);
    if (VAR_7) {
        VAR_6 = FUNC_2(VAR_7);
        FUNC_0(VAR_7, VAR_7+VAR_6, VAR_5-((VAR_7-VAR_1)+VAR_6+1));
        VAR_1 = FUNC_3(VAR_1, VAR_5-VAR_6);


        if (VAR_1[0] < VAR_0) VAR_1[0]--;

        if (VAR_4) *VAR_4 = 1;
    } else {
        if (VAR_4) *VAR_4 = 0;
    }
    return VAR_1;
}
