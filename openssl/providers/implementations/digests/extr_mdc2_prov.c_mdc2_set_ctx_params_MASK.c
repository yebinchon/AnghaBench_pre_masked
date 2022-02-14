
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pad_type; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ MDC2_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int const*,int *) ;
 int * FUNC_2 (int const*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(void *VAR_3, const OSSL_PARAM VAR_4[])
{
    const OSSL_PARAM *VAR_5;
    MDC2_CTX *VAR_6 = (MDC2_CTX *)VAR_3;

    if (VAR_6 != ((void*)0) && VAR_4 != ((void*)0)) {
        VAR_5 = FUNC_2(VAR_4, VAR_1);
        if (VAR_5 != ((void*)0) && !FUNC_1(VAR_5, &VAR_6->pad_type)) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        return 1;
    }
    return 0;
}
