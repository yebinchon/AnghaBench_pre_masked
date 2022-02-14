
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct flow_keys_digest {int dummy; } ;
struct TYPE_7__ {int dst; int src; } ;
struct TYPE_8__ {TYPE_3__ v4addrs; } ;
struct TYPE_6__ {int ports; } ;
struct TYPE_5__ {int ip_proto; int n_proto; } ;
struct flow_keys {TYPE_4__ addrs; TYPE_2__ ports; TYPE_1__ basic; } ;
struct _flow_keys_digest_data {int dst; int src; int ports; int ip_proto; int n_proto; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct flow_keys_digest*,int ,int) ;

void FUNC_2(struct flow_keys_digest *VAR_0,
      const struct flow_keys *VAR_1)
{
 struct _flow_keys_digest_data *VAR_2 =
     (struct _flow_keys_digest_data *)VAR_0;

 FUNC_0(sizeof(*VAR_2) > sizeof(*VAR_0));

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));

 VAR_2->n_proto = VAR_1->basic.n_proto;
 VAR_2->ip_proto = VAR_1->basic.ip_proto;
 VAR_2->ports = VAR_1->ports.ports;
 VAR_2->src = VAR_1->addrs.v4addrs.src;
 VAR_2->dst = VAR_1->addrs.v4addrs.dst;
}
