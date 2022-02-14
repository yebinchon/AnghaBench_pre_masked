
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gc_arena {int dummy; } ;
struct TYPE_4__ {void* options_string_remote; void* options_string_local; scalar_t__ tls_multi; int frame; } ;
struct TYPE_3__ {int tuntap; } ;
struct context {TYPE_2__ c2; int net_ctx; TYPE_1__ c1; int options; } ;


 int VAR_0 ;
 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int FUNC_2 (int ,char*,int ,void*) ;
 void* FUNC_3 (int *,int *,int ,int *,int,struct gc_arena*) ;
 int FUNC_4 (void*,struct gc_arena*) ;
 int FUNC_5 (scalar_t__,void*,void*) ;

__attribute__((used)) static void
FUNC_6(struct context *VAR_1)
{
    struct gc_arena VAR_2 = FUNC_1();

    VAR_1->c2.options_string_local =
        FUNC_3(&VAR_1->options, &VAR_1->c2.frame, VAR_1->c1.tuntap, &VAR_1->net_ctx,
                       0, &VAR_2);
    VAR_1->c2.options_string_remote =
        FUNC_3(&VAR_1->options, &VAR_1->c2.frame, VAR_1->c1.tuntap, &VAR_1->net_ctx,
                       1, &VAR_2);

    FUNC_2(VAR_0, "Local Options String (VER=%s): '%s'",
        FUNC_4(VAR_1->c2.options_string_local, &VAR_2),
        VAR_1->c2.options_string_local);
    FUNC_2(VAR_0, "Expected Remote Options String (VER=%s): '%s'",
        FUNC_4(VAR_1->c2.options_string_remote, &VAR_2),
        VAR_1->c2.options_string_remote);

    if (VAR_1->c2.tls_multi)
    {
        FUNC_5(VAR_1->c2.tls_multi,
                                   VAR_1->c2.options_string_local,
                                   VAR_1->c2.options_string_remote);
    }

    FUNC_0(&VAR_2);
}
