
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509V3_EXT_METHOD ;
typedef int BIO ;


 int FUNC_0 (int *,void*) ;
 scalar_t__ FUNC_1 (int *,char*,int,char*) ;

__attribute__((used)) static int FUNC_2(const X509V3_EXT_METHOD *VAR_0, void *VAR_1,
                            BIO *VAR_2, int VAR_3)
{
    if (FUNC_1(VAR_2, "%*s", VAR_3, "") <= 0)
        return 0;
    if (!FUNC_0(VAR_2, VAR_1))
        return 0;
    return 1;
}
