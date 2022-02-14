
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbuf ;


 unsigned int FUNC_0 (char*,int,long long) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*,unsigned char**,unsigned int*,long long*) ;

int FUNC_4(unsigned char *VAR_0, unsigned char *VAR_1, unsigned int VAR_2) {
    unsigned char *VAR_3;
    unsigned int VAR_4;
    long long VAR_5;
    unsigned char VAR_6[32];
    int VAR_7, VAR_8;

    FUNC_2(FUNC_3(VAR_0,&VAR_3,&VAR_4,&VAR_5));
    if (VAR_3 == ((void*)0)) {

        VAR_4 = FUNC_0((char*)VAR_6,sizeof(VAR_6),VAR_5);
        VAR_3 = VAR_6;
    }

    VAR_7 = (VAR_4 < VAR_2) ? VAR_4 : VAR_2;
    VAR_8 = FUNC_1(VAR_3,VAR_1,VAR_7);
    if (VAR_8 == 0) return VAR_4-VAR_2;
    return VAR_8;
}
