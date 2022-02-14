
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void ASN1_OCTET_STRING ;


 int FUNC_0 (void*) ;
 void* FUNC_1 () ;
 int FUNC_2 (void*,unsigned char const*,long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void *FUNC_4(void *VAR_2, const unsigned char **VAR_3, long VAR_4)
{
    ASN1_OCTET_STRING *VAR_5, **VAR_6;
    VAR_6 = VAR_2;
    if (VAR_6 == ((void*)0) || *VAR_6 == ((void*)0)) {
        VAR_5 = FUNC_1();
        if (VAR_5 == ((void*)0))
            goto err;
    } else {
        VAR_5 = *VAR_6;
    }
    if (!FUNC_2(VAR_5, *VAR_3, VAR_4))
        goto err;

    *VAR_3 += VAR_4;

    if (VAR_6)
        *VAR_6 = VAR_5;
    return VAR_5;

 err:
    if ((VAR_6 == ((void*)0)) || (*VAR_6 != VAR_5))
        FUNC_0(VAR_5);
    FUNC_3(VAR_1, VAR_0);
    return ((void*)0);
}
