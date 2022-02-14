
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(const char *VAR_1, int VAR_2, void *VAR_3)
{
    int *VAR_4 = (int *)VAR_3;
    char *VAR_5;
    const EVP_CIPHER *VAR_6;
    size_t VAR_7;

    if (VAR_2 == 0)
        return 1;
    if (VAR_3 == ((void*)0) || (VAR_5 = FUNC_3(VAR_1, VAR_2)) == ((void*)0))
        return 0;
    VAR_6 = FUNC_1(VAR_5);
    if (VAR_6 == ((void*)0))
        FUNC_5(VAR_0, "devcrypto: unknown cipher %s\n", VAR_5);
    else if ((VAR_7 = FUNC_4(FUNC_0(VAR_6))) != (size_t)-1)
        VAR_4[VAR_7] = 1;
    else
        FUNC_5(VAR_0, "devcrypto: cipher %s not available\n", VAR_5);
    FUNC_2(VAR_5);
    return 1;
}
