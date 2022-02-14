
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_md {scalar_t__ data; scalar_t__ data_end; } ;
struct parse_pkt {scalar_t__ vlan_outer_offset; int member_0; } ;
struct ethhdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xdp_md*,int ) ;
 int FUNC_1 (struct ethhdr*,void*,struct parse_pkt*) ;
 int FUNC_2 (void*) ;

int FUNC_3(struct xdp_md *VAR_3)
{
 void *VAR_4 = (void *)(long)VAR_3->data_end;
 void *VAR_5 = (void *)(long)VAR_3->data;
 struct ethhdr *VAR_6 = VAR_5;
 struct parse_pkt VAR_7 = { 0 };

 if (!FUNC_1(VAR_6, VAR_4, &VAR_7))
  return VAR_1;


 if (VAR_7.vlan_outer_offset == 0)
  return VAR_2;


 FUNC_2(VAR_5);


 FUNC_0(VAR_3, VAR_0);

 return VAR_2;
}
