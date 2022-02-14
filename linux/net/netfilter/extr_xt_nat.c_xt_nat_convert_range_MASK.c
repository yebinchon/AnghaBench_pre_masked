
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ip; } ;
struct nf_nat_range2 {int max_proto; int min_proto; TYPE_1__ max_addr; TYPE_1__ min_addr; int flags; TYPE_1__ base_proto; } ;
struct nf_nat_ipv4_range {int max; int min; int max_ip; int min_ip; int flags; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct nf_nat_range2 *VAR_0,
     const struct nf_nat_ipv4_range *VAR_1)
{
 FUNC_0(&VAR_0->min_addr, 0, sizeof(VAR_0->min_addr));
 FUNC_0(&VAR_0->max_addr, 0, sizeof(VAR_0->max_addr));
 FUNC_0(&VAR_0->base_proto, 0, sizeof(VAR_0->base_proto));

 VAR_0->flags = VAR_1->flags;
 VAR_0->min_addr.ip = VAR_1->min_ip;
 VAR_0->max_addr.ip = VAR_1->max_ip;
 VAR_0->min_proto = VAR_1->min;
 VAR_0->max_proto = VAR_1->max;
}
