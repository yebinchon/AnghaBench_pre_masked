
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* tls_auth_standalone; int frame; TYPE_3__* tls_multi; } ;
struct context {TYPE_2__ c2; } ;
struct TYPE_8__ {int frame; } ;
struct TYPE_5__ {int frame; } ;
struct TYPE_7__ {TYPE_1__ opt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_5(struct context *VAR_1)
{
    if (VAR_1->c2.tls_multi)
    {
        FUNC_4(VAR_1->c2.tls_multi, &VAR_1->c2.frame);
        FUNC_0(FUNC_1(&VAR_1->c2.tls_multi->opt.frame) <=
               FUNC_1(&VAR_1->c2.frame));
        FUNC_2(&VAR_1->c2.tls_multi->opt.frame, VAR_0,
                    "Control Channel MTU parms");
    }
    if (VAR_1->c2.tls_auth_standalone)
    {
        FUNC_3(VAR_1->c2.tls_auth_standalone, &VAR_1->c2.frame);
        FUNC_2(&VAR_1->c2.tls_auth_standalone->frame, VAR_0,
                    "TLS-Auth MTU parms");
    }
}
