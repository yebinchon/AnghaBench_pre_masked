
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key_ctx_bi; int packet_id; } ;
struct tls_wrap_ctx {int work; int tls_crypt_v2_metadata; TYPE_1__ opt; scalar_t__ cleanup_key_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(struct tls_wrap_ctx *VAR_0)
{
    if (FUNC_3(&VAR_0->opt.packet_id))
    {
        FUNC_2(&VAR_0->opt.packet_id);
    }

    if (VAR_0->cleanup_key_ctx)
    {
        FUNC_1(&VAR_0->opt.key_ctx_bi);
    }

    FUNC_0(&VAR_0->tls_crypt_v2_metadata);
    FUNC_0(&VAR_0->work);
}
