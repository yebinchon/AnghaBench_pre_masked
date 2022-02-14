
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* OPENSSL_CSTRING ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(const OPENSSL_CSTRING *VAR_1,
                            const OPENSSL_CSTRING *VAR_2)
{
    const char *VAR_3, *VAR_4;

    for (VAR_3 = VAR_1[VAR_0]; *VAR_3 == '0'; VAR_3++) ;
    for (VAR_4 = VAR_2[VAR_0]; *VAR_4 == '0'; VAR_4++) ;
    return FUNC_0(VAR_3, VAR_4);
}
