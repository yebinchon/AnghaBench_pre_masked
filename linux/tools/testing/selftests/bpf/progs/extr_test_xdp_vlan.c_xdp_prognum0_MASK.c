
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_md {scalar_t__ data; scalar_t__ data_end; } ;
struct parse_pkt {scalar_t__ vlan_outer; int member_0; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,void*,struct parse_pkt*) ;

int FUNC_1(struct xdp_md *VAR_3)
{
 void *VAR_4 = (void *)(long)VAR_3->data_end;
 void *VAR_5 = (void *)(long)VAR_3->data;
 struct parse_pkt VAR_6 = { 0 };

 if (!FUNC_0(VAR_5, VAR_4, &VAR_6))
  return VAR_1;


 if (VAR_6.vlan_outer == VAR_0)
  return VAR_1;






 return VAR_2;
}
