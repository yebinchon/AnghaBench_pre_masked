
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef scalar_t__ gsize ;
typedef int gboolean ;
typedef int X509_STORE ;
typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char*,scalar_t__) ;
 int * FUNC_4 (int *,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*,scalar_t__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int *,int ) ;

__attribute__((used)) static gboolean
FUNC_11 (sqlite3_stmt *VAR_1, void *VAR_2)
{
    X509_STORE *VAR_3 = VAR_2;
    X509 *VAR_4 = ((void*)0);
    const char *VAR_5;
    char *VAR_6 = ((void*)0);
    BIO *VAR_7 = ((void*)0);
    gboolean VAR_8 = VAR_0;

    VAR_5 = (const char *)FUNC_10 (VAR_1, 0);

    gsize VAR_9;
    VAR_6 = (char *)FUNC_7 (VAR_5, &VAR_9);
    if (!VAR_6) {
        FUNC_9 ("Failed to decode base64.\n");
        goto out;
    }

    VAR_7 = FUNC_1 (FUNC_2());
    if (!VAR_7) {
        FUNC_9 ("Failed to alloc BIO\n");
        goto out;
    }

    if (FUNC_3 (VAR_7, VAR_6, VAR_9) != VAR_9) {
        FUNC_9 ("Failed to write pem to BIO\n");
        goto out;
    }

    VAR_4 = FUNC_4 (VAR_7, ((void*)0), 0, ((void*)0));
    if (!VAR_4) {
        FUNC_9 ("Failed to read PEM from BIO\n");
        goto out;
    }

    FUNC_5 (VAR_3, VAR_4);

out:
    FUNC_8 (VAR_6);
    if (VAR_7)
        FUNC_0 (VAR_7);
    if (VAR_4)
        FUNC_6 (VAR_4);

    return VAR_8;
}
