
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,char*,size_t) ;
 int FUNC_1 (char*) ;

OSSL_PARAM FUNC_2(const char *VAR_1, char *VAR_2,
                                            size_t VAR_3)
{
    if (VAR_2 != ((void*)0) && VAR_3 == 0)
        VAR_3 = FUNC_1(VAR_2) + 1;
    return FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3);
}
