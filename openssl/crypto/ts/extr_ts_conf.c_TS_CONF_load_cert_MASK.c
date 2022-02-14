
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int * FUNC_2 (int *,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

X509 *FUNC_4(const char *VAR_2)
{
    BIO *VAR_3 = ((void*)0);
    X509 *VAR_4 = ((void*)0);

    if ((VAR_3 = FUNC_1(VAR_2, "r")) == ((void*)0))
        goto end;
    VAR_4 = FUNC_2(VAR_3, ((void*)0), ((void*)0), ((void*)0));
 end:
    if (VAR_4 == ((void*)0))
        FUNC_3(VAR_0, VAR_1);
    FUNC_0(VAR_3);
    return VAR_4;
}
