
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ctr ;
typedef int X509_ALGOR ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,size_t) ;
 int FUNC_4 (unsigned char**,int *,int *,size_t) ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char*,int) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_12 (unsigned char**,long*,int ) ;

__attribute__((used)) static int FUNC_13(int VAR_3, size_t VAR_4,
                                 const unsigned char *VAR_5, size_t VAR_6,
                                 unsigned char **VAR_7, size_t *VAR_8,
                                 unsigned char **VAR_9)
{
    unsigned char *VAR_10, *VAR_11 = ((void*)0);
    int VAR_12 = 0, VAR_13;
    long VAR_14;

    static unsigned char VAR_15[4] = { 0x00, 0x00, 0x00, 0x01 };
    X509_ALGOR *VAR_16 = ((void*)0);
    ASN1_OBJECT *VAR_17 = ((void*)0);
    ASN1_OCTET_STRING *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);


    VAR_16 = FUNC_10();
    VAR_17 = FUNC_6(FUNC_7(VAR_3));
    VAR_18 = FUNC_2();
    if (VAR_16 == ((void*)0)
        || VAR_17 == ((void*)0)
        || VAR_18 == ((void*)0)
        || !FUNC_3(VAR_18, VAR_15, sizeof(VAR_15))
        || !FUNC_11(VAR_16, VAR_17, VAR_1, VAR_18))
        goto err;

    VAR_17 = ((void*)0);
    VAR_18 = ((void*)0);


    if (VAR_5 != ((void*)0)) {
        VAR_19 = FUNC_2();
        if (VAR_19 == ((void*)0))
            goto err;
        FUNC_3(VAR_19, (unsigned char *)VAR_5, VAR_6);
    }

    VAR_13 = FUNC_4(&VAR_11, VAR_16, VAR_19, VAR_4);
    if (VAR_13 <= 0)
        goto err;


    VAR_10 = VAR_11;
    VAR_14 = (long)VAR_13;
    if (FUNC_12(&VAR_10, &VAR_14, VAR_2)
        && FUNC_12(&VAR_10, &VAR_14, VAR_2)
        && FUNC_12(&VAR_10, &VAR_14, VAR_0)
        && FUNC_12(&VAR_10, &VAR_14, VAR_1)
        && FUNC_5(VAR_10, VAR_15, 4) == 0) {
        *VAR_9 = VAR_10;
        *VAR_7 = VAR_11;
        *VAR_8 = (size_t)VAR_13;
        VAR_12 = 1;
    }
err:
    if (VAR_12 != 1)
        FUNC_8(VAR_11);
    FUNC_1(VAR_18);
    FUNC_1(VAR_19);
    FUNC_0(VAR_17);
    FUNC_9(VAR_16);
    return VAR_12;
}
