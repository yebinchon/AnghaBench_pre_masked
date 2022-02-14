
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sds ;
typedef int scorebuf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,double) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 unsigned char* FUNC_3 (unsigned char*,unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_4 (unsigned char*,unsigned char*) ;
 unsigned char* FUNC_5 (unsigned char*,unsigned char*,int,int ) ;

unsigned char *FUNC_6(unsigned char *VAR_1, unsigned char *VAR_2, sds VAR_3, double VAR_4) {
    unsigned char *VAR_5;
    char VAR_6[128];
    int VAR_7;
    size_t VAR_8;

    VAR_7 = FUNC_0(VAR_6,sizeof(VAR_6),VAR_4);
    if (VAR_2 == ((void*)0)) {
        VAR_1 = FUNC_5(VAR_1,(unsigned char*)VAR_3,FUNC_1(VAR_3),VAR_0);
        VAR_1 = FUNC_5(VAR_1,(unsigned char*)VAR_6,VAR_7,VAR_0);
    } else {

        VAR_8 = VAR_2-VAR_1;
        VAR_1 = FUNC_3(VAR_1,VAR_2,(unsigned char*)VAR_3,FUNC_1(VAR_3));
        VAR_2 = VAR_1+VAR_8;


        FUNC_2((VAR_5 = FUNC_4(VAR_1,VAR_2)) != ((void*)0));
        VAR_1 = FUNC_3(VAR_1,VAR_5,(unsigned char*)VAR_6,VAR_7);
    }
    return VAR_1;
}
