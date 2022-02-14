
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tun_mtu; int tun_mtu_defined; int link_mtu; int link_mtu_defined; } ;
struct options {TYPE_2__ ce; } ;
struct TYPE_3__ {int frame; } ;
struct context {TYPE_1__ c2; struct options options; } ;


 int FUNC_0 (struct context*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(struct context *VAR_4, const struct options *VAR_5)
{
    if (!VAR_5)
    {
        VAR_5 = &VAR_4->options;
    }





    if (!FUNC_0(VAR_4))
    {
        FUNC_2(&VAR_4->c2.frame);
        FUNC_4(&VAR_4->c2.frame,
                             VAR_0
                             |VAR_1
                             |VAR_2);
    }

    FUNC_1(&VAR_4->c2.frame, VAR_3);
    FUNC_3(&VAR_4->c2.frame,
                   VAR_5->ce.link_mtu_defined,
                   VAR_5->ce.link_mtu,
                   VAR_5->ce.tun_mtu_defined,
                   VAR_5->ce.tun_mtu);
}
