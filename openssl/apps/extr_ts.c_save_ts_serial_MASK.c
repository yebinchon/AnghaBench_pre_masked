
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, ASN1_INTEGER *VAR_2)
{
    int VAR_3 = 0;
    BIO *VAR_4 = ((void*)0);

    if ((VAR_4 = FUNC_1(VAR_1, "w")) == ((void*)0))
        goto err;
    if (FUNC_4(VAR_4, VAR_2) <= 0)
        goto err;
    if (FUNC_3(VAR_4, "\n") <= 0)
        goto err;
    VAR_3 = 1;
 err:
    if (!VAR_3)
        FUNC_2(VAR_0, "could not save serial number to %s\n",
                   VAR_1);
    FUNC_0(VAR_4);
    return VAR_3;
}
