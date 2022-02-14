
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int len ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned int*,int) ;
 int FUNC_1 (unsigned char*) ;

int FUNC_2(unsigned char *VAR_1, unsigned int VAR_2) {
    if (VAR_1 != ((void*)0)) {
        VAR_1[0] = VAR_0;
        FUNC_0(VAR_1+1,&VAR_2,sizeof(VAR_2));
        FUNC_1(VAR_1+1);
    }
    return 1+sizeof(VAR_2);
}
