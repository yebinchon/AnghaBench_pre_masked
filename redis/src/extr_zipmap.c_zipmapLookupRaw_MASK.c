
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned char*) ;
 unsigned int FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static unsigned char *FUNC_3(unsigned char *VAR_1, unsigned char *VAR_2, unsigned int VAR_3, unsigned int *VAR_4) {
    unsigned char *VAR_5 = VAR_1+1, *VAR_6 = ((void*)0);
    unsigned int VAR_7,VAR_8;

    while(*VAR_5 != VAR_0) {
        unsigned char VAR_9;


        VAR_7 = FUNC_1(VAR_5);
        VAR_8 = FUNC_2(((void*)0),VAR_7);
        if (VAR_2 != ((void*)0) && VAR_6 == ((void*)0) && VAR_7 == VAR_3 && !FUNC_0(VAR_5+VAR_8,VAR_2,VAR_7)) {


            if (VAR_4 != ((void*)0)) {
                VAR_6 = VAR_5;
            } else {
                return VAR_5;
            }
        }
        VAR_5 += VAR_8+VAR_7;

        VAR_7 = FUNC_1(VAR_5);
        VAR_5 += FUNC_2(((void*)0),VAR_7);
        VAR_9 = VAR_5[0];
        VAR_5 += VAR_7+1+VAR_9;
    }
    if (VAR_4 != ((void*)0)) *VAR_4 = (unsigned int)(VAR_5-VAR_1)+1;
    return VAR_6;
}
