
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int * FUNC_2 (int *,int *,int *,int *) ;

__attribute__((used)) static DH *FUNC_3(const char *VAR_0)
{
    DH *VAR_1 = ((void*)0);
    BIO *VAR_2;

    if ((VAR_2 = FUNC_1(VAR_0, "r")) == ((void*)0))
        goto err;
    VAR_1 = FUNC_2(VAR_2, ((void*)0), ((void*)0), ((void*)0));
 err:
    FUNC_0(VAR_2);
    return VAR_1;
}
