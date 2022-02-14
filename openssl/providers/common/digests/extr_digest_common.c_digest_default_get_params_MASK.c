
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
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_4 ;

int FUNC_4(OSSL_PARAM VAR_5[], size_t VAR_6, size_t VAR_7,
                              unsigned long VAR_8)
{
    OSSL_PARAM *VAR_9 = ((void*)0);

    VAR_9 = FUNC_1(VAR_5, VAR_1);
    if (VAR_9 != ((void*)0) && !FUNC_2(VAR_9, VAR_6)) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }
    VAR_9 = FUNC_1(VAR_5, VAR_3);
    if (VAR_9 != ((void*)0) && !FUNC_2(VAR_9, VAR_7)) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }
    VAR_9 = FUNC_1(VAR_5, VAR_2);
    if (VAR_9 != ((void*)0) && !FUNC_3(VAR_9, VAR_8)) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }
    return 1;
}
