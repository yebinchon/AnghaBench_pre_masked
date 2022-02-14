
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_6 ;

int FUNC_5(OSSL_PARAM VAR_7[], unsigned int VAR_8,
                              unsigned long VAR_9,
                              size_t VAR_10, size_t VAR_11, size_t VAR_12)
{
    OSSL_PARAM *VAR_13;

    VAR_13 = FUNC_1(VAR_7, VAR_5);
    if (VAR_13 != ((void*)0) && !FUNC_3(VAR_13, VAR_8)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    VAR_13 = FUNC_1(VAR_7, VAR_2);
    if (VAR_13 != ((void*)0) && !FUNC_4(VAR_13, VAR_9)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    VAR_13 = FUNC_1(VAR_7, VAR_4);
    if (VAR_13 != ((void*)0) && !FUNC_2(VAR_13, VAR_10 / 8)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    VAR_13 = FUNC_1(VAR_7, VAR_1);
    if (VAR_13 != ((void*)0) && !FUNC_2(VAR_13, VAR_11 / 8)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    VAR_13 = FUNC_1(VAR_7, VAR_3);
    if (VAR_13 != ((void*)0) && !FUNC_2(VAR_13, VAR_12 / 8)) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    return 1;
}
