
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHA1_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,size_t) ;

void FUNC_3(unsigned char *VAR_0, void *VAR_1, size_t VAR_2) {
    SHA1_CTX VAR_3;
    unsigned char VAR_4[20], *VAR_5 = VAR_1;
    int VAR_6;

    FUNC_1(&VAR_3);
    FUNC_2(&VAR_3,VAR_5,VAR_2);
    FUNC_0(VAR_4,&VAR_3);

    for (VAR_6 = 0; VAR_6 < 20; VAR_6++)
        VAR_0[VAR_6] ^= VAR_4[VAR_6];
}
