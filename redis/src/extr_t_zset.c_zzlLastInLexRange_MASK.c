
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zlexrangespec ;


 int FUNC_0 (int ) ;
 unsigned char* FUNC_1 (unsigned char*,int) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,int *) ;
 scalar_t__ FUNC_4 (unsigned char*,int *) ;
 scalar_t__ FUNC_5 (unsigned char*,int *) ;

unsigned char *FUNC_6(unsigned char *VAR_0, zlexrangespec *VAR_1) {
    unsigned char *VAR_2 = FUNC_1(VAR_0,-2), *VAR_3;


    if (!FUNC_3(VAR_0,VAR_1)) return ((void*)0);

    while (VAR_2 != ((void*)0)) {
        if (FUNC_5(VAR_2,VAR_1)) {

            if (FUNC_4(VAR_2,VAR_1))
                return VAR_2;
            return ((void*)0);
        }



        VAR_3 = FUNC_2(VAR_0,VAR_2);
        if (VAR_3 != ((void*)0))
            FUNC_0((VAR_2 = FUNC_2(VAR_0,VAR_3)) != ((void*)0));
        else
            VAR_2 = ((void*)0);
    }

    return ((void*)0);
}
