
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int cipher; } ;


 int FUNC_0 (struct key_type const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(const struct key_type *VAR_1, bool VAR_2)
{
    FUNC_0(VAR_1);

    if (!VAR_2 && (FUNC_2(VAR_1->cipher)
                       || FUNC_1(VAR_1->cipher)))
    {
        FUNC_3(VAR_0, "--no-replay cannot be used with a CFB, OFB or AEAD mode cipher");
    }
}
