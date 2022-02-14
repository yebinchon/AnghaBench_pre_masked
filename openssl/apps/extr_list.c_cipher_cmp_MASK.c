
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER ;


 int FUNC_0 (int const* const) ;
 int FUNC_1 (int const* const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(const EVP_CIPHER * const *VAR_0,
                      const EVP_CIPHER * const *VAR_1)
{
    int VAR_2 = FUNC_0(*VAR_0) - FUNC_0(*VAR_1);

    if (VAR_2 == 0)
        VAR_2 = FUNC_3(FUNC_2(FUNC_1(*VAR_0)),
                     FUNC_2(FUNC_1(*VAR_1)));

    return VAR_2;
}
