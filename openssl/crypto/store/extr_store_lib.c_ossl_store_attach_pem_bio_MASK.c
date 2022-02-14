
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UI_METHOD ;
struct TYPE_7__ {int * post_process_data; int * post_process; void* ui_data; int const* ui_method; int * loader_ctx; TYPE_1__ const* loader; } ;
struct TYPE_6__ {int (* close ) (int *) ;} ;
typedef int OSSL_STORE_LOADER_CTX ;
typedef TYPE_1__ OSSL_STORE_LOADER ;
typedef TYPE_2__ OSSL_STORE_CTX ;
typedef int BIO ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

OSSL_STORE_CTX *FUNC_5(BIO *VAR_2, const UI_METHOD *VAR_3,
                                          void *VAR_4)
{
    OSSL_STORE_CTX *VAR_5 = ((void*)0);
    const OSSL_STORE_LOADER *VAR_6 = ((void*)0);
    OSSL_STORE_LOADER_CTX *VAR_7 = ((void*)0);

    if ((VAR_6 = FUNC_3("file")) == ((void*)0)
        || ((VAR_7 = FUNC_2(VAR_2)) == ((void*)0)))
        goto done;
    if ((VAR_5 = FUNC_0(sizeof(*VAR_5))) == ((void*)0)) {
        FUNC_1(VAR_1,
                     VAR_0);
        goto done;
    }

    VAR_5->loader = VAR_6;
    VAR_5->loader_ctx = VAR_7;
    VAR_7 = ((void*)0);
    VAR_5->ui_method = VAR_3;
    VAR_5->ui_data = VAR_4;
    VAR_5->post_process = ((void*)0);
    VAR_5->post_process_data = ((void*)0);

 done:
    if (VAR_7 != ((void*)0))





        (void)VAR_6->close(VAR_7);
    return VAR_5;
}
