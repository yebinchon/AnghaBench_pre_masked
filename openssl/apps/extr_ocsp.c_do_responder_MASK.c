
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reqbuf ;
typedef int inbuf ;
typedef int OCSP_REQUEST ;
typedef int BIO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (char*,int) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int) ;
 int * FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,char*,...) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(OCSP_REQUEST **VAR_5, BIO **VAR_6, BIO *VAR_7,
                        int VAR_8)
{



    int VAR_9;
    OCSP_REQUEST *VAR_10 = ((void*)0);
    char VAR_11[2048], VAR_12[2048];
    char *VAR_13, *VAR_14;
    BIO *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    const char *VAR_18;

    *VAR_5 = ((void*)0);


    if (FUNC_0(VAR_7) <= 0)
        return 0;

    VAR_15 = FUNC_8(VAR_7);
    *VAR_6 = VAR_15;
    VAR_18 = FUNC_4(VAR_15);
    VAR_9 = FUNC_5(VAR_15, VAR_12, sizeof(VAR_12));
    if (VAR_9 <= 0)
        goto out;

    if (FUNC_14(VAR_12, "GET ", 4) == 0) {

        for (VAR_13 = VAR_12 + 4; *VAR_13 == ' '; ++VAR_13)
            continue;
        if (*VAR_13 != '/') {
            FUNC_13(VAR_3, "Invalid request -- bad URL: %s", VAR_18);
            goto out;
        }
        VAR_13++;


        for (VAR_14 = VAR_13; *VAR_14; VAR_14++)
            if (*VAR_14 == ' ')
                break;
        if (FUNC_14(VAR_14, " HTTP/1.", 8) != 0) {
            FUNC_13(VAR_3,
                        "Invalid request -- bad HTTP version: %s", VAR_18);
            goto out;
        }
        *VAR_14 = '\0';






        if (VAR_13[0] == '\0')
            goto out;

        VAR_9 = FUNC_15(VAR_13);
        if (VAR_9 <= 0) {
            FUNC_13(VAR_3,
                        "Invalid request -- bad URL encoding: %s", VAR_18);
            goto out;
        }
        if ((VAR_16 = FUNC_7(VAR_13, VAR_9)) == ((void*)0)
            || (VAR_17 = FUNC_6(FUNC_1())) == ((void*)0)) {
            FUNC_13(VAR_2, "Could not allocate base64 bio: %s", VAR_18);
            goto out;
        }
        FUNC_10(VAR_17, VAR_0);
        VAR_16 = FUNC_9(VAR_17, VAR_16);
    } else if (FUNC_14(VAR_12, "POST ", 5) != 0) {
        FUNC_13(VAR_3, "Invalid request -- bad HTTP verb: %s", VAR_18);
        goto out;
    }


    for (;;) {
        VAR_9 = FUNC_5(VAR_15, VAR_11, sizeof(VAR_11));
        if (VAR_9 <= 0)
            goto out;
        if ((VAR_11[0] == '\r') || (VAR_11[0] == '\n'))
            break;
    }
    if (VAR_16 != ((void*)0)) {
        VAR_10 = FUNC_12(VAR_16, ((void*)0));
        FUNC_2(VAR_16);
    } else {
        VAR_10 = FUNC_12(VAR_15, ((void*)0));
    }

    if (VAR_10 == ((void*)0))
        FUNC_13(VAR_2, "Error parsing OCSP request");

    *VAR_5 = VAR_10;

out:





    return 1;

}
