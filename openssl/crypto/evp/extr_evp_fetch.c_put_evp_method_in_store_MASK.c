
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct evp_method_data_st {int destruct_method; int refcnt_up_method; } ;
typedef int OSSL_PROVIDER ;
typedef int OSSL_NAMEMAP ;
typedef int OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (void*,int const*,int ,char const*,void*,int ,int ) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (char const*,int ) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(OPENSSL_CTX *VAR_1, void *VAR_2,
                                   void *VAR_3, const OSSL_PROVIDER *VAR_4,
                                   int VAR_5, const char *VAR_6,
                                   const char *VAR_7, void *VAR_8)
{
    struct evp_method_data_st *VAR_9 = VAR_8;
    OSSL_NAMEMAP *VAR_10;
    int VAR_11;
    uint32_t VAR_12;
    size_t VAR_13 = 0;







    if (VAR_6 != ((void*)0)) {
        const char *VAR_14 = FUNC_5(VAR_6, VAR_0);

        VAR_13 = (VAR_14 == ((void*)0) ? FUNC_6(VAR_6) : (size_t)(VAR_14 - VAR_6));
    }

    if ((VAR_10 = FUNC_4(VAR_1)) == ((void*)0)
        || (VAR_11 = FUNC_3(VAR_10, VAR_6, VAR_13)) == 0
        || (VAR_12 = FUNC_0(VAR_5, VAR_11)) == 0)
        return 0;

    if (VAR_2 == ((void*)0)
        && (VAR_2 = FUNC_1(VAR_1)) == ((void*)0))
        return 0;

    return FUNC_2(VAR_2, VAR_4, VAR_12, VAR_7, VAR_3,
                                 VAR_9->refcnt_up_method,
                                 VAR_9->destruct_method);
}
