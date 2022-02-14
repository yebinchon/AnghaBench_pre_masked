
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int cipher_length; scalar_t__ cipher; } ;
struct key {int cipher; } ;
struct gc_arena {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,struct gc_arena*) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int FUNC_5 (int ,int ,int const) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

void
FUNC_8(struct key *VAR_1, const struct key_type *VAR_2)
{
    struct gc_arena VAR_3 = FUNC_4();
    if (VAR_2->cipher)
    {



        const int VAR_4 = FUNC_6(VAR_2->cipher);

        if (VAR_4)
        {
            FUNC_5(VAR_1->cipher, VAR_2->cipher_length, VAR_4);
        }
    }
    FUNC_3(&VAR_3);
}
