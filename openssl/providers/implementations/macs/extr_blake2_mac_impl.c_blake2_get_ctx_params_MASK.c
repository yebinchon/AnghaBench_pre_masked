
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, OSSL_PARAM VAR_2[])
{
    OSSL_PARAM *VAR_3;

    if ((VAR_3 = FUNC_0(VAR_2, VAR_0)) != ((void*)0))
        return FUNC_1(VAR_3, FUNC_2(VAR_1));

    return 1;
}
