
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct evp_method_data_st {int name_id; char* names; int (* refcnt_up_method ) (void*) ;int propquery; int operation_id; } ;
typedef int OSSL_NAMEMAP ;
typedef int OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (void*,int ,int ,void**) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (char const*,int ) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static void *FUNC_8(OPENSSL_CTX *VAR_1, void *VAR_2,
                                       void *VAR_3)
{
    struct evp_method_data_st *VAR_4 = VAR_3;
    void *VAR_5 = ((void*)0);
    int VAR_6;
    uint32_t VAR_7;






    if ((VAR_6 = VAR_4->name_id) == 0) {
        OSSL_NAMEMAP *VAR_8 = FUNC_4(VAR_1);
        const char *VAR_9 = VAR_4->names;
        const char *VAR_10 = FUNC_5(VAR_9, VAR_0);
        size_t VAR_11 = (VAR_10 == ((void*)0) ? FUNC_6(VAR_9) : (size_t)(VAR_10 - VAR_9));

        if (VAR_8 == 0)
            return ((void*)0);
        VAR_6 = FUNC_3(VAR_8, VAR_9, VAR_11);
    }

    if (VAR_6 == 0
        || (VAR_7 = FUNC_0(VAR_4->operation_id, VAR_6)) == 0)
        return ((void*)0);

    if (VAR_2 == ((void*)0)
        && (VAR_2 = FUNC_1(VAR_1)) == ((void*)0))
        return ((void*)0);

    (void)FUNC_2(VAR_2, VAR_7, VAR_4->propquery,
                                  &VAR_5);

    if (VAR_5 != ((void*)0)
        && !VAR_4->refcnt_up_method(VAR_5)) {
        VAR_5 = ((void*)0);
    }
    return VAR_5;
}
