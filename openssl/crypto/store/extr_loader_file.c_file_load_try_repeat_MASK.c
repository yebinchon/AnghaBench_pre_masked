
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UI_METHOD ;
struct TYPE_7__ {TYPE_1__* last_handler; int * last_handler_ctx; } ;
struct TYPE_8__ {TYPE_2__ file; } ;
struct TYPE_9__ {TYPE_3__ _; } ;
struct TYPE_6__ {int (* destroy_ctx ) (int **) ;int * (* try_decode ) (int *,int *,int *,int ,int **,int*,int const*,void*) ;} ;
typedef TYPE_4__ OSSL_STORE_LOADER_CTX ;
typedef int OSSL_STORE_INFO ;


 int * FUNC_0 (int *,int *,int *,int ,int **,int*,int const*,void*) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static OSSL_STORE_INFO *FUNC_2(OSSL_STORE_LOADER_CTX *VAR_0,
                                             const UI_METHOD *VAR_1,
                                             void *VAR_2)
{
    OSSL_STORE_INFO *VAR_3 = ((void*)0);
    int VAR_4 = 0;

    if (VAR_0->_.file.last_handler != ((void*)0)) {
        VAR_3 =
            VAR_0->_.file.last_handler->try_decode(((void*)0), ((void*)0), ((void*)0), 0,
                                                 &VAR_0->_.file.last_handler_ctx,
                                                 &VAR_4,
                                                 VAR_1, VAR_2);

        if (VAR_3 == ((void*)0)) {
            VAR_0->_.file.last_handler->destroy_ctx(&VAR_0->_.file.last_handler_ctx);
            VAR_0->_.file.last_handler_ctx = ((void*)0);
            VAR_0->_.file.last_handler = ((void*)0);
        }
    }
    return VAR_3;
}
