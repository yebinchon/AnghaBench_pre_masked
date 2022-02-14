
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_type {int hmac_length; int cipher_length; } ;
struct key2 {int n; TYPE_1__* keys; } ;
struct gc_arena {int dummy; } ;
struct TYPE_2__ {int hmac; int cipher; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char const*,int ) ;
 int FUNC_2 (int ,int ,int ,struct gc_arena*) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;

void
FUNC_5(const struct key2 *VAR_1,
           const struct key_type *VAR_2,
           const char *VAR_3,
           const char *VAR_4)
{
    struct gc_arena VAR_5 = FUNC_4();
    FUNC_0(VAR_1->n == 2);
    FUNC_1(VAR_0, "%s (cipher): %s",
         VAR_3,
         FUNC_2(VAR_1->keys[0].cipher, VAR_2->cipher_length, 0, &VAR_5));
    FUNC_1(VAR_0, "%s (hmac): %s",
         VAR_3,
         FUNC_2(VAR_1->keys[0].hmac, VAR_2->hmac_length, 0, &VAR_5));
    FUNC_1(VAR_0, "%s (cipher): %s",
         VAR_4,
         FUNC_2(VAR_1->keys[1].cipher, VAR_2->cipher_length, 0, &VAR_5));
    FUNC_1(VAR_0, "%s (hmac): %s",
         VAR_4,
         FUNC_2(VAR_1->keys[1].hmac, VAR_2->hmac_length, 0, &VAR_5));
    FUNC_3(&VAR_5);
}
