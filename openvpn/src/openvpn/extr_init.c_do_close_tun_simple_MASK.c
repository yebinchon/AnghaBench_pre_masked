
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tuntap_owned; int pulled_options_digest_save; int * tuntap; } ;
struct context {TYPE_1__ c1; int net_ctx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct context *VAR_1)
{
    FUNC_2(VAR_0, "Closing TUN/TAP interface");
    if (VAR_1->c1.tuntap)
    {
        FUNC_1(VAR_1->c1.tuntap, &VAR_1->net_ctx);
        VAR_1->c1.tuntap = ((void*)0);
    }
    VAR_1->c1.tuntap_owned = 0;



}
