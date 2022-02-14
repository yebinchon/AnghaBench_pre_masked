
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char* FUNC_0 (unsigned char*,int *,int *,int *,int *) ;
 unsigned char* FUNC_1 (unsigned char*) ;

unsigned int FUNC_2(unsigned char *VAR_1) {
    unsigned int VAR_2 = 0;
    if (VAR_1[0] < VAR_0) {
        VAR_2 = VAR_1[0];
    } else {
        unsigned char *VAR_3 = FUNC_1(VAR_1);
        while((VAR_3 = FUNC_0(VAR_3,((void*)0),((void*)0),((void*)0),((void*)0))) != ((void*)0)) VAR_2++;


        if (VAR_2 < VAR_0) VAR_1[0] = VAR_2;
    }
    return VAR_2;
}
