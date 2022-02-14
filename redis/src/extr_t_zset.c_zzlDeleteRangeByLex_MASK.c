
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zlexrangespec ;


 unsigned char* FUNC_0 (unsigned char*,unsigned char**) ;
 unsigned char* FUNC_1 (unsigned char*,unsigned char*) ;
 unsigned char* FUNC_2 (unsigned char*,int *) ;
 scalar_t__ FUNC_3 (unsigned char*,int *) ;

unsigned char *FUNC_4(unsigned char *VAR_0, zlexrangespec *VAR_1, unsigned long *VAR_2) {
    unsigned char *VAR_3, *VAR_4;
    unsigned long VAR_5 = 0;

    if (VAR_2 != ((void*)0)) *VAR_2 = 0;

    VAR_3 = FUNC_2(VAR_0,VAR_1);
    if (VAR_3 == ((void*)0)) return VAR_0;



    while ((VAR_4 = FUNC_1(VAR_0,VAR_3)) != ((void*)0)) {
        if (FUNC_3(VAR_3,VAR_1)) {

            VAR_0 = FUNC_0(VAR_0,&VAR_3);
            VAR_0 = FUNC_0(VAR_0,&VAR_3);
            VAR_5++;
        } else {

            break;
        }
    }

    if (VAR_2 != ((void*)0)) *VAR_2 = VAR_5;
    return VAR_0;
}
