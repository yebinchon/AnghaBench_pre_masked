
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_md {scalar_t__ data; scalar_t__ data_end; } ;
struct parse_pkt {scalar_t__ vlan_outer; int vlan_outer_offset; int member_0; } ;
struct _vlan_hdr {int h_vlan_TCI; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,struct parse_pkt*) ;

int FUNC_3(struct xdp_md *VAR_4)
{
 void *VAR_5 = (void *)(long)VAR_4->data_end;
 void *VAR_6 = (void *)(long)VAR_4->data;
 struct parse_pkt VAR_7 = { 0 };

 if (!FUNC_2(VAR_6, VAR_5, &VAR_7))
  return VAR_2;


 if (VAR_7.vlan_outer == VAR_0) {
  struct _vlan_hdr *VAR_8 = VAR_6 + VAR_7.vlan_outer_offset;


  VAR_8->h_vlan_TCI =
   FUNC_0((FUNC_1(VAR_8->h_vlan_TCI) & 0xf000)
      | VAR_1);
 }

 return VAR_3;
}
