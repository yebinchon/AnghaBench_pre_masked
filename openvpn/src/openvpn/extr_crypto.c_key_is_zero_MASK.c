
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int cipher_length; } ;
struct key {scalar_t__* cipher; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static bool
FUNC_1(struct key *VAR_1, const struct key_type *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->cipher_length; ++VAR_3)
    {
        if (VAR_1->cipher[VAR_3])
        {
            return 0;
        }
    }
    FUNC_0(VAR_0, "CRYPTO INFO: WARNING: zero key detected");
    return 1;
}
