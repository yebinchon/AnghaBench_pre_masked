
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; int digest; } ;
typedef TYPE_1__ KDF_HKDF ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static size_t FUNC_3(KDF_HKDF *VAR_4)
{
    int VAR_5;
    const EVP_MD *VAR_6 = FUNC_2(&VAR_4->digest);

    if (VAR_4->mode != VAR_1)
        return VAR_3;

    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    VAR_5 = FUNC_1(VAR_6);
    if (VAR_5 < 0)
        return 0;

    return VAR_5;
}
