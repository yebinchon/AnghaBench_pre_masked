
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static void FUNC_1(const char *VAR_1, void *VAR_2)
{
    const EVP_MD **VAR_3 = VAR_2;

    if (*VAR_3 != ((void*)0))
        return;

    *VAR_3 = (const EVP_MD *)FUNC_0(VAR_1, VAR_0);
}
