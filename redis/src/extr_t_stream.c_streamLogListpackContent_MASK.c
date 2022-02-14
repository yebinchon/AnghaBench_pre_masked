
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned char*,scalar_t__*,unsigned char*) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (int ,char*,int,int,unsigned char*) ;

void FUNC_4(unsigned char *VAR_2) {
    unsigned char *VAR_3 = FUNC_0(VAR_2);
    while(VAR_3) {
        unsigned char VAR_4[VAR_1];
        int64_t VAR_5;
        unsigned char *VAR_6 = FUNC_1(VAR_3,&VAR_5,VAR_4);
        FUNC_3(VAR_0,"- [%d] '%.*s'", (int)VAR_5, (int)VAR_5, VAR_6);
        VAR_3 = FUNC_2(VAR_2,VAR_3);
    }
}
