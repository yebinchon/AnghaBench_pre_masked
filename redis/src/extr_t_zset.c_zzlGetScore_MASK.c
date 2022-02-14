
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char*,unsigned int) ;
 int FUNC_1 (int ) ;
 double FUNC_2 (char*,int *) ;
 int FUNC_3 (unsigned char*,unsigned char**,unsigned int*,long long*) ;

double FUNC_4(unsigned char *VAR_0) {
    unsigned char *VAR_1;
    unsigned int VAR_2;
    long long VAR_3;
    char VAR_4[128];
    double VAR_5;

    FUNC_1(VAR_0 != ((void*)0));
    FUNC_1(FUNC_3(VAR_0,&VAR_1,&VAR_2,&VAR_3));

    if (VAR_1) {
        FUNC_0(VAR_4,VAR_1,VAR_2);
        VAR_4[VAR_2] = '\0';
        VAR_5 = FUNC_2(VAR_4,((void*)0));
    } else {
        VAR_5 = VAR_3;
    }

    return VAR_5;
}
