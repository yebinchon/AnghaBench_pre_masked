
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_multi {struct key_state* save_ks; struct key_state** key_scan; } ;
struct TYPE_2__ {scalar_t__ initialized; } ;
struct crypto_options {TYPE_1__ key_ctx_bi; } ;
struct key_state {scalar_t__ state; scalar_t__ auth_deferred_expire; int key_id; struct crypto_options crypto_options; int auth_deferred; scalar_t__ authenticated; } ;
struct gc_arena {int dummy; } ;
struct buffer {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct gc_arena*) ;
 struct gc_arena FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct tls_multi*,struct gc_arena*) ;

void
FUNC_4(struct tls_multi *VAR_4,
                struct buffer *VAR_5, struct crypto_options **VAR_6)
{
    VAR_4->save_ks = ((void*)0);
    if (VAR_5->len > 0)
    {
        int VAR_7;
        struct key_state *VAR_8 = ((void*)0);
        for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
        {
            struct key_state *VAR_9 = VAR_4->key_scan[VAR_7];
            if (VAR_9->state >= VAR_2
                && VAR_9->authenticated
                && VAR_9->crypto_options.key_ctx_bi.initialized



                )
            {
                if (!VAR_8)
                {
                    VAR_8 = VAR_9;
                }
                if (VAR_3 >= VAR_9->auth_deferred_expire)
                {
                    VAR_8 = VAR_9;
                    break;
                }
            }
        }

        if (VAR_8)
        {
            *VAR_6 = &VAR_8->crypto_options;
            VAR_4->save_ks = VAR_8;
            FUNC_0(VAR_0, "TLS: tls_pre_encrypt: key_id=%d", VAR_8->key_id);
            return;
        }
        else
        {
            struct gc_arena VAR_10 = FUNC_2();
            FUNC_0(VAR_0, "TLS Warning: no data channel send key available: %s",
                 FUNC_3(VAR_4, &VAR_10));
            FUNC_1(&VAR_10);
        }
    }

    VAR_5->len = 0;
    *VAR_6 = ((void*)0);
}
