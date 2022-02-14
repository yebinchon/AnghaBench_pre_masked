
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sds ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,int ) ;
 unsigned char* FUNC_3 (unsigned char*,int ) ;
 unsigned char* FUNC_4 (unsigned char*,unsigned char*) ;
 double FUNC_5 (unsigned char*) ;

unsigned char *FUNC_6(unsigned char *VAR_0, sds VAR_1, double *VAR_2) {
    unsigned char *VAR_3 = FUNC_3(VAR_0,0), *VAR_4;

    while (VAR_3 != ((void*)0)) {
        VAR_4 = FUNC_4(VAR_0,VAR_3);
        FUNC_1(VAR_4 != ((void*)0));

        if (FUNC_2(VAR_3,(unsigned char*)VAR_1,FUNC_0(VAR_1))) {

            if (VAR_2 != ((void*)0)) *VAR_2 = FUNC_5(VAR_4);
            return VAR_3;
        }


        VAR_3 = FUNC_4(VAR_0,VAR_4);
    }
    return ((void*)0);
}
