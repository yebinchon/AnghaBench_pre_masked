
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_RESP_CTX ;
typedef int CONF ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 char* FUNC_1 (int *,char const*,int ) ;
 int * FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*,int ) ;

int FUNC_6(CONF *VAR_1, const char *VAR_2,
                           const char *VAR_3, TS_RESP_CTX *VAR_4)
{
    int VAR_5 = 0;
    ASN1_OBJECT *VAR_6 = ((void*)0);

    if (VAR_3 == ((void*)0))
        VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
    if (VAR_3 == ((void*)0)) {
        FUNC_5(VAR_2, VAR_0);
        goto err;
    }
    if ((VAR_6 = FUNC_2(VAR_3, 0)) == ((void*)0)) {
        FUNC_4(VAR_2, VAR_0);
        goto err;
    }
    if (!FUNC_3(VAR_4, VAR_6))
        goto err;

    VAR_5 = 1;
 err:
    FUNC_0(VAR_6);
    return VAR_5;
}
