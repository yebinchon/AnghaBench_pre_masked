
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;
typedef int ASN1_INTEGER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;

int FUNC_4(BIGNUM *VAR_3, ASN1_INTEGER *VAR_4)
{
    BIGNUM *VAR_5;
    int VAR_6 = 0;

    VAR_5 = VAR_3 == ((void*)0) ? FUNC_1() : VAR_3;
    if (VAR_5 == ((void*)0))
        return 0;

    if (!FUNC_2(VAR_5, VAR_2, VAR_1, VAR_0))
        goto error;
    if (VAR_4 && !FUNC_3(VAR_5, VAR_4))
        goto error;

    VAR_6 = 1;

 error:

    if (VAR_5 != VAR_3)
        FUNC_0(VAR_5);

    return VAR_6;
}
