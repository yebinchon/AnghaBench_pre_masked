
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cipher_kt_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(const cipher_kt_t *VAR_1, int *VAR_2)
{
    if (VAR_1 && FUNC_0(VAR_1))
    {
        if (*VAR_2 == -1)
        {
            FUNC_1(VAR_0, "WARNING: cipher with small block size in use, "
                "reducing reneg-bytes to 64MB to mitigate SWEET32 attacks.");
            *VAR_2 = 64 * 1024 * 1024;
        }
    }
}
