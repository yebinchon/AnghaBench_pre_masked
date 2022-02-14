
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_TST_INFO ;
typedef int TS_STATUS_INFO ;
typedef int TS_RESP ;
typedef int PKCS7 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int *) ;

__attribute__((used)) static TS_RESP *FUNC_11(BIO *VAR_1)
{
    int VAR_2 = 0;
    PKCS7 *VAR_3 = ((void*)0);
    TS_TST_INFO *VAR_4 = ((void*)0);
    TS_RESP *VAR_5 = ((void*)0);
    TS_STATUS_INFO *VAR_6 = ((void*)0);

    if ((VAR_3 = FUNC_10(VAR_1, ((void*)0))) == ((void*)0))
        goto end;
    if ((VAR_4 = FUNC_1(VAR_3)) == ((void*)0))
        goto end;
    if ((VAR_5 = FUNC_3()) == ((void*)0))
        goto end;
    if ((VAR_6 = FUNC_7()) == ((void*)0))
        goto end;
    if (!FUNC_8(VAR_6, VAR_0))
        goto end;
    if (!FUNC_4(VAR_5, VAR_6))
        goto end;
    FUNC_5(VAR_5, VAR_3, VAR_4);
    VAR_3 = ((void*)0);
    VAR_4 = ((void*)0);
    VAR_2 = 1;

 end:
    FUNC_0(VAR_3);
    FUNC_9(VAR_4);
    if (!VAR_2) {
        FUNC_2(VAR_5);
        VAR_5 = ((void*)0);
    }
    FUNC_6(VAR_6);
    return VAR_5;
}
