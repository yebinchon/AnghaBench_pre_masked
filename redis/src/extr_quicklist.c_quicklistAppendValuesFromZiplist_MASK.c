
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quicklist ;
typedef int longstr ;


 unsigned int FUNC_0 (char*,int,long long) ;
 int FUNC_1 (int *,unsigned char*,unsigned int) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char**,unsigned int*,long long*) ;
 unsigned char* FUNC_4 (unsigned char*,int ) ;
 unsigned char* FUNC_5 (unsigned char*,unsigned char*) ;

quicklist *FUNC_6(quicklist *VAR_0,
                                            unsigned char *VAR_1) {
    unsigned char *VAR_2;
    unsigned int VAR_3;
    long long VAR_4;
    char VAR_5[32] = {0};

    unsigned char *VAR_6 = FUNC_4(VAR_1, 0);
    while (FUNC_3(VAR_6, &VAR_2, &VAR_3, &VAR_4)) {
        if (!VAR_2) {

            VAR_3 = FUNC_0(VAR_5, sizeof(VAR_5), VAR_4);
            VAR_2 = (unsigned char *)VAR_5;
        }
        FUNC_1(VAR_0, VAR_2, VAR_3);
        VAR_6 = FUNC_5(VAR_1, VAR_6);
    }
    FUNC_2(VAR_1);
    return VAR_0;
}
