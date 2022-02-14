
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sock {int state; int dst_port; int * dst_ip6; int dst_ip4; int src_port; int * src_ip6; int src_ip4; int priority; int mark; int protocol; int type; int family; int bound_dev_if; } ;



__attribute__((used)) static void FUNC_0(struct bpf_sock *VAR_0,
    const struct bpf_sock *VAR_1)
{
 VAR_0->bound_dev_if = VAR_1->bound_dev_if;
 VAR_0->family = VAR_1->family;
 VAR_0->type = VAR_1->type;
 VAR_0->protocol = VAR_1->protocol;
 VAR_0->mark = VAR_1->mark;
 VAR_0->priority = VAR_1->priority;
 VAR_0->src_ip4 = VAR_1->src_ip4;
 VAR_0->src_ip6[0] = VAR_1->src_ip6[0];
 VAR_0->src_ip6[1] = VAR_1->src_ip6[1];
 VAR_0->src_ip6[2] = VAR_1->src_ip6[2];
 VAR_0->src_ip6[3] = VAR_1->src_ip6[3];
 VAR_0->src_port = VAR_1->src_port;
 VAR_0->dst_ip4 = VAR_1->dst_ip4;
 VAR_0->dst_ip6[0] = VAR_1->dst_ip6[0];
 VAR_0->dst_ip6[1] = VAR_1->dst_ip6[1];
 VAR_0->dst_ip6[2] = VAR_1->dst_ip6[2];
 VAR_0->dst_ip6[3] = VAR_1->dst_ip6[3];
 VAR_0->dst_port = VAR_1->dst_port;
 VAR_0->state = VAR_1->state;
}
