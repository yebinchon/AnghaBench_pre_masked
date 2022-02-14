
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_hdr {int h_vlan_encapsulated_proto; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int (* gro_complete ) (struct sk_buff*,int) ;} ;
struct packet_offload {TYPE_1__ callbacks; } ;
typedef int __be16 ;


 int VAR_0 ;
 struct packet_offload* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, int VAR_2)
{
 struct vlan_hdr *VAR_3 = (struct vlan_hdr *)(VAR_1->data + VAR_2);
 __be16 VAR_4 = VAR_3->h_vlan_encapsulated_proto;
 struct packet_offload *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_1();
 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  VAR_6 = VAR_5->callbacks.gro_complete(VAR_1, VAR_2 + sizeof(*VAR_3));

 FUNC_2();
 return VAR_6;
}
