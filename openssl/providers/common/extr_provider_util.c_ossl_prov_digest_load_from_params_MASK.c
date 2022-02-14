
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ data_type; int data; } ;
struct TYPE_8__ {int * md; int * alloc_md; int engine; } ;
typedef TYPE_1__ PROV_DIGEST ;
typedef TYPE_2__ OSSL_PARAM ;
typedef int OPENSSL_CTX ;


 int * FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_3 (TYPE_2__ const*,int ) ;
 int FUNC_4 (TYPE_2__ const*,char const**,int *) ;

int FUNC_5(PROV_DIGEST *VAR_2,
                                      const OSSL_PARAM VAR_3[],
                                      OPENSSL_CTX *VAR_4)
{
    const OSSL_PARAM *VAR_5;
    const char *VAR_6;

    if (!FUNC_4(VAR_3, &VAR_6, &VAR_2->engine))
        return 0;


    VAR_5 = FUNC_3(VAR_3, VAR_0);
    if (VAR_5 == ((void*)0))
        return 1;
    if (VAR_5->data_type != VAR_1)
        return 0;

    FUNC_1(VAR_2->alloc_md);
    VAR_2->md = VAR_2->alloc_md = FUNC_0(VAR_4, VAR_5->data, VAR_6);


    if (VAR_2->md == ((void*)0))
        VAR_2->md = FUNC_2(VAR_5->data);

    return VAR_2->md != ((void*)0);
}
