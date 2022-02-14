
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data_type; int data; int data_size; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int MD5_SHA1_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, const OSSL_PARAM VAR_4[])
{
    const OSSL_PARAM *VAR_5;
    MD5_SHA1_CTX *VAR_6 = (MD5_SHA1_CTX *)VAR_3;

    if (VAR_6 != ((void*)0) && VAR_4 != ((void*)0)) {
        VAR_5 = FUNC_0(VAR_4, VAR_1);
        if (VAR_5 != ((void*)0) && VAR_5->data_type == VAR_2)
            return FUNC_1(VAR_6, VAR_0, VAR_5->data_size,
                                 VAR_5->data);
    }
    return 0;
}
