
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_VERIFY_PARAM ;
typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 () ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static X509_STORE *FUNC_12(const char *VAR_3, const char *VAR_4,
                                     const char *VAR_5, X509_VERIFY_PARAM *VAR_6)
{
    X509_STORE *VAR_7 = ((void*)0);
    X509_LOOKUP *VAR_8 = ((void*)0);

    VAR_7 = FUNC_9();
    FUNC_11(VAR_7, VAR_2);
    if (VAR_3 != ((void*)0)) {
        VAR_8 = FUNC_7(VAR_7, FUNC_3());
        if (VAR_8 == ((void*)0)) {
            FUNC_0(VAR_1, "memory allocation failure\n");
            goto err;
        }
        if (!FUNC_1(VAR_8, VAR_3, VAR_0)) {
            FUNC_0(VAR_1, "Error loading directory %s\n", VAR_3);
            goto err;
        }
    }

    if (VAR_4 != ((void*)0)) {
        VAR_8 = FUNC_7(VAR_7, FUNC_2());
        if (VAR_8 == ((void*)0)) {
            FUNC_0(VAR_1, "memory allocation failure\n");
            goto err;
        }
        if (!FUNC_4(VAR_8, VAR_4, VAR_0)) {
            FUNC_0(VAR_1, "Error loading file %s\n", VAR_4);
            goto err;
        }
    }

    if (VAR_5 != ((void*)0)) {
        VAR_8 = FUNC_7(VAR_7, FUNC_6());
        if (VAR_8 == ((void*)0)) {
            FUNC_0(VAR_1, "memory allocation failure\n");
            goto err;
        }
        if (!FUNC_5(VAR_8, VAR_5)) {
            FUNC_0(VAR_1, "Error loading store URI %s\n", VAR_5);
            goto err;
        }
    }

    if (VAR_6 != ((void*)0))
        FUNC_10(VAR_7, VAR_6);

    return VAR_7;

 err:
    FUNC_8(VAR_7);
    return ((void*)0);
}
