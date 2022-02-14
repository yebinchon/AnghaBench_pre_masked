
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zrangespec ;


 unsigned char* FUNC_0 (unsigned char*,unsigned char**) ;
 unsigned char* FUNC_1 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_2 (double,int *) ;
 unsigned char* FUNC_3 (unsigned char*,int *) ;
 double FUNC_4 (unsigned char*) ;

unsigned char *FUNC_5(unsigned char *VAR_0, zrangespec *VAR_1, unsigned long *VAR_2) {
    unsigned char *VAR_3, *VAR_4;
    double VAR_5;
    unsigned long VAR_6 = 0;

    if (VAR_2 != ((void*)0)) *VAR_2 = 0;

    VAR_3 = FUNC_3(VAR_0,VAR_1);
    if (VAR_3 == ((void*)0)) return VAR_0;



    while ((VAR_4 = FUNC_1(VAR_0,VAR_3)) != ((void*)0)) {
        VAR_5 = FUNC_4(VAR_4);
        if (FUNC_2(VAR_5,VAR_1)) {

            VAR_0 = FUNC_0(VAR_0,&VAR_3);
            VAR_0 = FUNC_0(VAR_0,&VAR_3);
            VAR_6++;
        } else {

            break;
        }
    }

    if (VAR_2 != ((void*)0)) *VAR_2 = VAR_6;
    return VAR_0;
}
