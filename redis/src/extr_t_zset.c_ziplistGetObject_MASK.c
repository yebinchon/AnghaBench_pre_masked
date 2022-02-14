
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int FUNC_0 (long long) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*,unsigned char**,unsigned int*,long long*) ;

sds FUNC_4(unsigned char *VAR_0) {
    unsigned char *VAR_1;
    unsigned int VAR_2;
    long long VAR_3;

    FUNC_2(VAR_0 != ((void*)0));
    FUNC_2(FUNC_3(VAR_0,&VAR_1,&VAR_2,&VAR_3));

    if (VAR_1) {
        return FUNC_1((char*)VAR_1,VAR_2);
    } else {
        return FUNC_0(VAR_3);
    }
}
