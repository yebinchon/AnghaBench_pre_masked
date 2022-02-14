
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const EVP_PKEY *VAR_0)
{
    int VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 >= 512)
        return 256;
    if (VAR_1 >= 384)
        return 192;
    if (VAR_1 >= 256)
        return 128;
    if (VAR_1 >= 224)
        return 112;
    if (VAR_1 >= 160)
        return 80;
    return VAR_1 / 2;
}
