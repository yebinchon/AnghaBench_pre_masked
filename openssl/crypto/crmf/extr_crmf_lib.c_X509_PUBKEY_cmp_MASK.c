
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_PUBKEY ;
typedef int X509_ALGOR ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int **,int *) ;

__attribute__((used)) static int FUNC_4(X509_PUBKEY *VAR_0, X509_PUBKEY *VAR_1)
{
    X509_ALGOR *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    int VAR_4 = 0;

    if (VAR_0 == VAR_1)
        return 0;
    if (VAR_0 == ((void*)0) || !FUNC_3(((void*)0), ((void*)0), ((void*)0), &VAR_2, VAR_0)
            || VAR_2 == ((void*)0))
        return -1;
    if (VAR_1 == ((void*)0) || !FUNC_3(((void*)0), ((void*)0), ((void*)0), &VAR_3, VAR_1)
            || VAR_3 == ((void*)0))
        return 1;
    if ((VAR_4 = FUNC_1(VAR_2, VAR_3)) != 0)
        return VAR_4;
    return FUNC_0(FUNC_2(VAR_0), FUNC_2(VAR_1));
}
