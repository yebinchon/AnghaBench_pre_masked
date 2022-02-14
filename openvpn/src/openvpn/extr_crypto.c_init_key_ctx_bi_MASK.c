
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int dummy; } ;
struct key_direction_state {size_t out_key; size_t in_key; } ;
struct key_ctx_bi {int initialized; int decrypt; int encrypt; } ;
struct key2 {int * keys; } ;
typedef int log_prefix ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,struct key_type const*,int ,char*) ;
 int FUNC_1 (struct key_direction_state*,int) ;
 int FUNC_2 (char*,int,char*,char const*) ;

void
FUNC_3(struct key_ctx_bi *VAR_2, const struct key2 *VAR_3,
                int VAR_4, const struct key_type *VAR_5, const char *VAR_6)
{
    char VAR_7[128] = { 0 };
    struct key_direction_state VAR_8;

    FUNC_1(&VAR_8, VAR_4);

    FUNC_2(VAR_7, sizeof(VAR_7), "Outgoing %s", VAR_6);
    FUNC_0(&VAR_2->encrypt, &VAR_3->keys[VAR_8.out_key], VAR_5,
                 VAR_1, VAR_7);

    FUNC_2(VAR_7, sizeof(VAR_7), "Incoming %s", VAR_6);
    FUNC_0(&VAR_2->decrypt, &VAR_3->keys[VAR_8.in_key], VAR_5,
                 VAR_0, VAR_7);

    VAR_2->initialized = 1;
}
