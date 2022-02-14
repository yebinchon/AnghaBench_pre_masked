
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME_ENTRY ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int,unsigned char const*,int) ;
 int FUNC_3 (int *,int const*) ;

X509_NAME_ENTRY *FUNC_4(X509_NAME_ENTRY **VAR_0,
                                               const ASN1_OBJECT *VAR_1, int VAR_2,
                                               const unsigned char *VAR_3,
                                               int VAR_4)
{
    X509_NAME_ENTRY *VAR_5;

    if ((VAR_0 == ((void*)0)) || (*VAR_0 == ((void*)0))) {
        if ((VAR_5 = FUNC_1()) == ((void*)0))
            return ((void*)0);
    } else
        VAR_5 = *VAR_0;

    if (!FUNC_3(VAR_5, VAR_1))
        goto err;
    if (!FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4))
        goto err;

    if ((VAR_0 != ((void*)0)) && (*VAR_0 == ((void*)0)))
        *VAR_0 = VAR_5;
    return VAR_5;
 err:
    if ((VAR_0 == ((void*)0)) || (VAR_5 != *VAR_0))
        FUNC_0(VAR_5);
    return ((void*)0);
}
