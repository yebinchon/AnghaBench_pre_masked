
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int hash64 ;
typedef int SHA1_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,size_t) ;
 int FUNC_3 (int *,unsigned char*,int) ;

uint64_t FUNC_4(char *VAR_0, size_t VAR_1) {
    SHA1_CTX VAR_2;
    unsigned char VAR_3[20];

    FUNC_1(&VAR_2);
    FUNC_2(&VAR_2,(unsigned char*)VAR_0,VAR_1);
    FUNC_0(VAR_3,&VAR_2);
    uint64_t VAR_4;
    FUNC_3(&VAR_4,VAR_3,sizeof(VAR_4));
    return VAR_4;
}
