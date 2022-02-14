
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(void *VAR_6, OSSL_PARAM VAR_7[])
{
    OSSL_PARAM *VAR_8;

    VAR_8 = FUNC_1(VAR_7, VAR_3);
    if (VAR_8 != ((void*)0) && !FUNC_2(VAR_8, VAR_0)) {
        FUNC_0(VAR_2, VAR_5);
        return 0;
    }
    VAR_8 = FUNC_1(VAR_7, VAR_4);
    if (VAR_8 != ((void*)0) && !FUNC_2(VAR_8, VAR_1)) {
        FUNC_0(VAR_2, VAR_5);
        return 0;
    }

    return 1;
}
