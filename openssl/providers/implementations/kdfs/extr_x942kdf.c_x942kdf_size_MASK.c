
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int digest; } ;
typedef TYPE_1__ KDF_X942 ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*) ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static size_t FUNC_3(KDF_X942 *VAR_2)
{
    int VAR_3;
    const EVP_MD *VAR_4 = FUNC_2(&VAR_2->digest);

    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_3 = FUNC_1(VAR_4);
    return (VAR_3 <= 0) ? 0 : (size_t)VAR_3;
}
