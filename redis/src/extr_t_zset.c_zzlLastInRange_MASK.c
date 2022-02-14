
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zrangespec ;


 int FUNC_0 (int ) ;
 unsigned char* FUNC_1 (unsigned char*,int) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char*) ;
 unsigned char* FUNC_3 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_4 (double,int *) ;
 scalar_t__ FUNC_5 (double,int *) ;
 double FUNC_6 (unsigned char*) ;
 int FUNC_7 (unsigned char*,int *) ;

unsigned char *FUNC_8(unsigned char *VAR_0, zrangespec *VAR_1) {
    unsigned char *VAR_2 = FUNC_1(VAR_0,-2), *VAR_3;
    double VAR_4;


    if (!FUNC_7(VAR_0,VAR_1)) return ((void*)0);

    while (VAR_2 != ((void*)0)) {
        VAR_3 = FUNC_2(VAR_0,VAR_2);
        FUNC_0(VAR_3 != ((void*)0));

        VAR_4 = FUNC_6(VAR_3);
        if (FUNC_5(VAR_4,VAR_1)) {

            if (FUNC_4(VAR_4,VAR_1))
                return VAR_2;
            return ((void*)0);
        }



        VAR_3 = FUNC_3(VAR_0,VAR_2);
        if (VAR_3 != ((void*)0))
            FUNC_0((VAR_2 = FUNC_3(VAR_0,VAR_3)) != ((void*)0));
        else
            VAR_2 = ((void*)0);
    }

    return ((void*)0);
}
