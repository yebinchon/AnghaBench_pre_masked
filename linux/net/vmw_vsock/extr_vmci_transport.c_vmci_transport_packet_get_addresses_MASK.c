
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int context; } ;
struct TYPE_4__ {int context; } ;
struct TYPE_6__ {TYPE_2__ src; TYPE_1__ dst; } ;
struct vmci_transport_packet {int src_port; TYPE_3__ dg; int dst_port; } ;
struct sockaddr_vm {int dummy; } ;


 int FUNC_0 (struct sockaddr_vm*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct vmci_transport_packet *VAR_0,
        struct sockaddr_vm *VAR_1,
        struct sockaddr_vm *VAR_2)
{
 FUNC_0(VAR_1, VAR_0->dg.dst.context, VAR_0->dst_port);
 FUNC_0(VAR_2, VAR_0->dg.src.context, VAR_0->src_port);
}
