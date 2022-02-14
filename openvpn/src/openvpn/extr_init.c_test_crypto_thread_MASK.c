
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct options {int test_crypto; } ;
struct TYPE_6__ {int packet_id; } ;
struct TYPE_5__ {TYPE_3__ crypto_options; int frame; } ;
struct TYPE_4__ {int ks; } ;
struct context {TYPE_2__ c2; TYPE_1__ c1; struct options options; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct context*) ;
 int FUNC_2 (struct context*) ;
 int FUNC_3 (struct context*,int ) ;
 int FUNC_4 (struct context*,struct options const*) ;
 int FUNC_5 (struct context*,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct context*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,int *) ;

__attribute__((used)) static void *
FUNC_10(void *VAR_1)
{
    struct context *VAR_2 = (struct context *) VAR_1;
    const struct options *VAR_3 = &VAR_2->options;

    FUNC_0(VAR_3->test_crypto);
    FUNC_5(VAR_2, VAR_0);
    FUNC_2(VAR_2);
    FUNC_7(VAR_2);
    FUNC_3(VAR_2, 0);

    FUNC_4(VAR_2, VAR_3);

    FUNC_9(&VAR_2->c2.crypto_options, &VAR_2->c2.frame);

    FUNC_6(&VAR_2->c1.ks, 1);
    FUNC_8(&VAR_2->c2.crypto_options.packet_id);

    FUNC_1(VAR_2);
    return ((void*)0);
}
