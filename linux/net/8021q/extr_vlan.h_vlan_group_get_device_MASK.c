
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 struct net_device* FUNC_0 (struct vlan_group*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline struct net_device *FUNC_2(struct vlan_group *VAR_0,
             __be16 VAR_1,
             u16 VAR_2)
{
 return FUNC_0(VAR_0, FUNC_1(VAR_1), VAR_2);
}
