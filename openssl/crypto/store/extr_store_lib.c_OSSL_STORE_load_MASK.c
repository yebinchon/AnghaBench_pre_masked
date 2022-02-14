
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int loading; scalar_t__ expected_type; TYPE_1__* loader; int post_process_data; int * (* post_process ) (int *,int ) ;int ui_data; int ui_method; int loader_ctx; } ;
struct TYPE_5__ {int * expect; int * (* load ) (int ,int ,int ) ;} ;
typedef int OSSL_STORE_INFO ;
typedef TYPE_2__ OSSL_STORE_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int ,int ,int ) ;
 int * FUNC_8 (int *,int ) ;

OSSL_STORE_INFO *FUNC_9(OSSL_STORE_CTX *VAR_2)
{
    OSSL_STORE_INFO *VAR_3 = ((void*)0);

    VAR_2->loading = 1;
 again:
    if (FUNC_3(VAR_2))
        return ((void*)0);

    FUNC_4(VAR_1, "Loading next object\n");
    VAR_3 = VAR_2->loader->load(VAR_2->loader_ctx, VAR_2->ui_method, VAR_2->ui_data);

    if (VAR_2->post_process != ((void*)0) && VAR_3 != ((void*)0)) {
        VAR_3 = VAR_2->post_process(VAR_3, VAR_2->post_process_data);





        if (VAR_3 == ((void*)0))
            goto again;
    }

    if (VAR_3 != ((void*)0) && VAR_2->expected_type != 0) {
        int VAR_4 = FUNC_1(VAR_3);

        if (VAR_4 != VAR_0 && VAR_4 != 0) {




            if (VAR_2->loader->expect != ((void*)0))
                FUNC_6(VAR_2->expected_type == VAR_4);

            if (VAR_2->expected_type != VAR_4) {
                FUNC_0(VAR_3);
                goto again;
            }
        }
    }

    if (VAR_3 != ((void*)0))
        FUNC_5(VAR_1, "Got a %s\n",
                    FUNC_2(FUNC_1(VAR_3)));

    return VAR_3;
}
