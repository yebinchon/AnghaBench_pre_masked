
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_attachment_info {int flags; TYPE_2__* prog; } ;
struct netdev_bpf {int prog_flags; int prog_id; } ;
struct TYPE_4__ {TYPE_1__* aux; } ;
struct TYPE_3__ {int id; } ;



int FUNC_0(struct xdp_attachment_info *VAR_0,
    struct netdev_bpf *VAR_1)
{
 VAR_1->prog_id = VAR_0->prog ? VAR_0->prog->aux->id : 0;
 VAR_1->prog_flags = VAR_0->prog ? VAR_0->flags : 0;
 return 0;
}
