
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_ATTRIBUTE ;
typedef int ASN1_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int,void const*,int) ;
 int FUNC_3 (int *,int const*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

X509_ATTRIBUTE *FUNC_5(X509_ATTRIBUTE **VAR_2,
                                             const ASN1_OBJECT *VAR_3,
                                             int VAR_4, const void *VAR_5,
                                             int VAR_6)
{
    X509_ATTRIBUTE *VAR_7;

    if ((VAR_2 == ((void*)0)) || (*VAR_2 == ((void*)0))) {
        if ((VAR_7 = FUNC_1()) == ((void*)0)) {
            FUNC_4(VAR_1,
                    VAR_0);
            return ((void*)0);
        }
    } else
        VAR_7 = *VAR_2;

    if (!FUNC_3(VAR_7, VAR_3))
        goto err;
    if (!FUNC_2(VAR_7, VAR_4, VAR_5, VAR_6))
        goto err;

    if ((VAR_2 != ((void*)0)) && (*VAR_2 == ((void*)0)))
        *VAR_2 = VAR_7;
    return VAR_7;
 err:
    if ((VAR_2 == ((void*)0)) || (VAR_7 != *VAR_2))
        FUNC_0(VAR_7);
    return ((void*)0);
}
