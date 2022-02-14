
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tls_crypt_v2_wkc; int tls_wrap_key; } ;
struct TYPE_7__ {TYPE_4__ ks; } ;
struct TYPE_6__ {scalar_t__ persist_key; } ;
struct context {TYPE_3__ c1; TYPE_2__ options; TYPE_1__* sig; } ;
struct TYPE_5__ {scalar_t__ signal_received; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_5(struct context *VAR_1, bool VAR_2)
{




    FUNC_3(&VAR_1->c1.ks.tls_wrap_key);
    FUNC_0(VAR_1->c1.ks.tls_wrap_key);
    FUNC_1(&VAR_1->c1.ks.tls_crypt_v2_wkc);
    FUNC_2(&VAR_1->c1.ks.tls_crypt_v2_wkc);

    if (!(VAR_1->sig->signal_received == VAR_0 && VAR_1->options.persist_key))
    {
        FUNC_4(&VAR_1->c1.ks, VAR_2);
    }
}
