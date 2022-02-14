
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_REVOKED ;
typedef int ASN1_TIME ;
typedef int ASN1_OBJECT ;
typedef int ASN1_GENERALIZEDTIME ;
typedef int ASN1_ENUMERATED ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int *,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int **,int*,int **,int **,char const*) ;

__attribute__((used)) static int FUNC_10(X509_REVOKED *VAR_4, const char *VAR_5)
{
    char *VAR_6 = ((void*)0);
    int VAR_7 = -1;
    int VAR_8, VAR_9 = 0;
    ASN1_OBJECT *VAR_10 = ((void*)0);
    ASN1_GENERALIZEDTIME *VAR_11 = ((void*)0);
    ASN1_ENUMERATED *VAR_12 = ((void*)0);

    ASN1_TIME *VAR_13 = ((void*)0);

    VAR_8 = FUNC_9(&VAR_13, &VAR_7, &VAR_10, &VAR_11, VAR_5);

    if (VAR_8 == 0)
        goto end;

    if (VAR_4 && !FUNC_8(VAR_4, VAR_13))
        goto end;

    if (VAR_4 && (VAR_7 != VAR_3)) {
        VAR_12 = FUNC_1();
        if (VAR_12 == ((void*)0) || !FUNC_2(VAR_12, VAR_7))
            goto end;
        if (!FUNC_7(VAR_4, VAR_0, VAR_12, 0, 0))
            goto end;
    }

    if (VAR_4 && VAR_11) {
        if (!FUNC_7
            (VAR_4, VAR_2, VAR_11, 0, 0))
            goto end;
    }
    if (VAR_4 && VAR_10) {
        if (!FUNC_7
            (VAR_4, VAR_1, VAR_10, 0, 0))
            goto end;
    }

    if (VAR_7 != VAR_3)
        VAR_9 = 2;
    else
        VAR_9 = 1;

 end:

    FUNC_6(VAR_6);
    FUNC_4(VAR_10);
    FUNC_3(VAR_11);
    FUNC_0(VAR_12);
    FUNC_5(VAR_13);

    return VAR_9;
}
