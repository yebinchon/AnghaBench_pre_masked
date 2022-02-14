
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zrangespec ;


 int FUNC_0 (int ) ;
 unsigned char* FUNC_1 (unsigned char*,int ) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_3 (double,int *) ;
 scalar_t__ FUNC_4 (double,int *) ;
 double FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*,int *) ;

unsigned char *FUNC_7(unsigned char *VAR_0, zrangespec *VAR_1) {
    unsigned char *VAR_2 = FUNC_1(VAR_0,0), *VAR_3;
    double VAR_4;


    if (!FUNC_6(VAR_0,VAR_1)) return ((void*)0);

    while (VAR_2 != ((void*)0)) {
        VAR_3 = FUNC_2(VAR_0,VAR_2);
        FUNC_0(VAR_3 != ((void*)0));

        VAR_4 = FUNC_5(VAR_3);
        if (FUNC_3(VAR_4,VAR_1)) {

            if (FUNC_4(VAR_4,VAR_1))
                return VAR_2;
            return ((void*)0);
        }


        VAR_2 = FUNC_2(VAR_0,VAR_3);
    }

    return ((void*)0);
}
