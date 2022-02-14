
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef void DSA ;


 int FUNC_0 (void*) ;
 void* FUNC_1 () ;
 int FUNC_2 (void*,int const*) ;

__attribute__((used)) static void *FUNC_3(void *VAR_0, const OSSL_PARAM VAR_1[])
{
    DSA *VAR_2;

    if ((VAR_2 = FUNC_1()) == ((void*)0)
        || !FUNC_2(VAR_2, VAR_1)) {
        FUNC_0(VAR_2);
        VAR_2 = ((void*)0);
    }
    return VAR_2;
}
