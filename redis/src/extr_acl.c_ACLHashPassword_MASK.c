
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int SHA256_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,size_t) ;

sds FUNC_4(unsigned char *VAR_2, size_t VAR_3) {
    SHA256_CTX VAR_4;
    unsigned char VAR_5[VAR_1];
    char VAR_6[VAR_0];
    char *VAR_7 = "0123456789abcdef";

    FUNC_2(&VAR_4);
    FUNC_3(&VAR_4,(unsigned char*)VAR_2,VAR_3);
    FUNC_1(&VAR_4,VAR_5);

    for (int VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        VAR_6[VAR_8*2] = VAR_7[((VAR_5[VAR_8]&0xF0)>>4)];
        VAR_6[VAR_8*2+1] = VAR_7[(VAR_5[VAR_8]&0xF)];
    }
    return FUNC_0(VAR_6,VAR_0);
}
