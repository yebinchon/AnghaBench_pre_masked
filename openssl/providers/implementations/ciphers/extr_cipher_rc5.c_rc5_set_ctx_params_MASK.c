
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int rounds; } ;
typedef TYPE_1__ PROV_RC5_CTX ;
typedef int OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int const*,unsigned int*) ;
 int * FUNC_2 (int const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (void*,int const*) ;

__attribute__((used)) static int FUNC_4(void *VAR_7, const OSSL_PARAM VAR_8[])
{
    PROV_RC5_CTX *VAR_9 = (PROV_RC5_CTX *)VAR_7;
    const OSSL_PARAM *VAR_10;

    if (!FUNC_3(VAR_7, VAR_8))
        return 0;

    VAR_10 = FUNC_2(VAR_8, VAR_1);
    if (VAR_10 != ((void*)0)) {
        unsigned int VAR_11;

        if (!FUNC_1(VAR_10, &VAR_11)) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        if (VAR_11 != VAR_6
            && VAR_11 != VAR_4
            && VAR_11 != VAR_5) {
            FUNC_0(VAR_0, VAR_3);
            return 0;
        }
        VAR_9->rounds = VAR_11;
    }
    return 1;
}
