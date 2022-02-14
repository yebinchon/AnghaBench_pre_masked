
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {int dummy; } ;
struct sk_buff {scalar_t__ network_header; scalar_t__ transport_header; scalar_t__ data; int ip_summed; } ;
struct ip_comp_hdr {int nexthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct xfrm_state*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct xfrm_state *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;
 int VAR_5 = -VAR_1;
 struct ip_comp_hdr *VAR_6;

 if (FUNC_2(VAR_3))
  goto out;

 VAR_3->ip_summed = VAR_0;


 VAR_6 = (void *)VAR_3->data;
 VAR_4 = VAR_6->nexthdr;

 VAR_3->transport_header = VAR_3->network_header + sizeof(*VAR_6);
 FUNC_0(VAR_3, sizeof(*VAR_6));
 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_4;

out:
 return VAR_5;
}
