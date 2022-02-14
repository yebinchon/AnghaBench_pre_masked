
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct vlan_hdr {void* h_vlan_encapsulated_proto; void* h_vlan_TCI; } ;
struct vlan_dev_priv {int flags; unsigned int vlan_id; struct net_device* real_dev; int vlan_proto; } ;
struct sk_buff {int protocol; int priority; } ;
struct net_device {void* dev_addr; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,unsigned short,void const*,void const*,unsigned int) ;
 void* FUNC_1 (unsigned int) ;
 unsigned short FUNC_2 (int ) ;
 struct vlan_hdr* FUNC_3 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_4 (struct net_device*,int ) ;
 struct vlan_dev_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4, struct net_device *VAR_5,
    unsigned short VAR_6,
    const void *VAR_7, const void *VAR_8,
    unsigned int VAR_9)
{
 struct vlan_dev_priv *VAR_10 = FUNC_5(VAR_5);
 struct vlan_hdr *VAR_11;
 unsigned int VAR_12 = 0;
 u16 VAR_13 = 0;
 int VAR_14;

 if (!(VAR_10->flags & VAR_2)) {
  VAR_11 = FUNC_3(VAR_4, VAR_3);

  VAR_13 = VAR_10->vlan_id;
  VAR_13 |= FUNC_4(VAR_5, VAR_4->priority);
  VAR_11->h_vlan_TCI = FUNC_1(VAR_13);





  if (VAR_6 != VAR_1 && VAR_6 != VAR_0)
   VAR_11->h_vlan_encapsulated_proto = FUNC_1(VAR_6);
  else
   VAR_11->h_vlan_encapsulated_proto = FUNC_1(VAR_9);

  VAR_4->protocol = VAR_10->vlan_proto;
  VAR_6 = FUNC_2(VAR_10->vlan_proto);
  VAR_12 = VAR_3;
 }


 if (VAR_8 == ((void*)0))
  VAR_8 = VAR_5->dev_addr;


 VAR_5 = VAR_10->real_dev;
 VAR_14 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 + VAR_12);
 if (VAR_14 > 0)
  VAR_14 += VAR_12;
 return VAR_14;
}
