
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char const*,int ) ;
 int FUNC_7 () ;
 int * FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int VAR_2 ;

X509_STORE *FUNC_11(const char *VAR_3, int VAR_4,
                         const char *VAR_5, int VAR_6,
                         const char *VAR_7, int VAR_8)
{
    X509_STORE *VAR_9 = FUNC_10();
    X509_LOOKUP *VAR_10;

    if (VAR_9 == ((void*)0))
        goto end;

    if (VAR_3 != ((void*)0) || !VAR_4) {
        VAR_10 = FUNC_8(VAR_9, FUNC_4());
        if (VAR_10 == ((void*)0))
            goto end;
        if (VAR_3 != ((void*)0)) {
            if (!FUNC_6(VAR_10, VAR_3, VAR_1)) {
                FUNC_0(VAR_2, "Error loading file %s\n", VAR_3);
                goto end;
            }
        } else {
            FUNC_6(VAR_10, ((void*)0), VAR_0);
        }
    }

    if (VAR_5 != ((void*)0) || !VAR_6) {
        VAR_10 = FUNC_8(VAR_9, FUNC_5());
        if (VAR_10 == ((void*)0))
            goto end;
        if (VAR_5 != ((void*)0)) {
            if (!FUNC_2(VAR_10, VAR_5, VAR_1)) {
                FUNC_0(VAR_2, "Error loading directory %s\n", VAR_5);
                goto end;
            }
        } else {
            FUNC_2(VAR_10, ((void*)0), VAR_0);
        }
    }

    if (VAR_7 != ((void*)0) || !VAR_8) {
        VAR_10 = FUNC_8(VAR_9, FUNC_7());
        if (VAR_10 == ((void*)0))
            goto end;
        if (!FUNC_3(VAR_10, VAR_7)) {
            if (VAR_7 != ((void*)0))
                FUNC_0(VAR_2, "Error loading store URI %s\n", VAR_7);
            goto end;
        }
    }

    FUNC_1();
    return VAR_9;
 end:
    FUNC_9(VAR_9);
    return ((void*)0);
}
