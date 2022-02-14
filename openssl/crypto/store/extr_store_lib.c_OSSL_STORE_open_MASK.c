
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int scheme_copy ;
typedef int UI_METHOD ;
struct TYPE_8__ {void* post_process_data; int post_process; void* ui_data; int const* ui_method; int * loader_ctx; TYPE_1__ const* loader; } ;
struct TYPE_7__ {int (* close ) (int *) ;int * (* open ) (TYPE_1__ const*,char const*,int const*,void*) ;} ;
typedef int OSSL_STORE_post_process_info_fn ;
typedef int OSSL_STORE_LOADER_CTX ;
typedef TYPE_1__ OSSL_STORE_LOADER ;
typedef TYPE_2__ OSSL_STORE_CTX ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*,int) ;
 TYPE_2__* FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int ,char*,char const*,void*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 int * FUNC_12 (TYPE_1__ const*,char const*,int const*,void*) ;
 int FUNC_13 (int *) ;

OSSL_STORE_CTX *FUNC_14(const char *VAR_3, const UI_METHOD *VAR_4,
                                void *VAR_5,
                                OSSL_STORE_post_process_info_fn VAR_6,
                                void *VAR_7)
{
    const OSSL_STORE_LOADER *VAR_8 = ((void*)0);
    OSSL_STORE_LOADER_CTX *VAR_9 = ((void*)0);
    OSSL_STORE_CTX *VAR_10 = ((void*)0);
    char VAR_11[256], *VAR_12, *VAR_13[2];
    size_t VAR_14 = 0;
    size_t VAR_15;






    VAR_13[VAR_14++] = "file";
    FUNC_3(VAR_11, VAR_3, sizeof(VAR_11));
    if ((VAR_12 = FUNC_10(VAR_11, ':')) != ((void*)0)) {
        *VAR_12++ = '\0';
        if (FUNC_9(VAR_11, "file") != 0) {
            if (FUNC_11(VAR_12, "//", 2) == 0)
                VAR_14--;
            VAR_13[VAR_14++] = VAR_11;
        }
    }

    FUNC_2();


    for (VAR_15 = 0; VAR_9 == ((void*)0) && VAR_15 < VAR_14; VAR_15++) {
        FUNC_6(VAR_2, "Looking up scheme %s\n", VAR_13[VAR_15]);
        if ((VAR_8 = FUNC_8(VAR_13[VAR_15])) != ((void*)0)) {
            FUNC_6(VAR_2, "Found loader for scheme %s\n", VAR_13[VAR_15]);
            VAR_9 = VAR_8->open(VAR_8, VAR_3, VAR_4, VAR_5);
            FUNC_7(VAR_2, "Opened %s => %p\n", VAR_3, (void *)VAR_9);
        }
    }

    if (VAR_9 == ((void*)0))
        goto err;

    if ((VAR_10 = FUNC_4(sizeof(*VAR_10))) == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        goto err;
    }

    VAR_10->loader = VAR_8;
    VAR_10->loader_ctx = VAR_9;
    VAR_10->ui_method = VAR_4;
    VAR_10->ui_data = VAR_5;
    VAR_10->post_process = VAR_6;
    VAR_10->post_process_data = VAR_7;






    FUNC_1();

    return VAR_10;

 err:
    FUNC_0();
    if (VAR_9 != ((void*)0)) {





        (void)VAR_8->close(VAR_9);
    }
    return ((void*)0);
}
