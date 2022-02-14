
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ifla_vlan_qos_mapping {int dummy; } ;


 unsigned int FUNC_0 (int) ;

__attribute__((used)) static inline size_t FUNC_1(unsigned int VAR_0)
{
 if (VAR_0 == 0)
  return 0;

 return FUNC_0(sizeof(struct nlattr)) +
        FUNC_0(sizeof(struct ifla_vlan_qos_mapping)) * VAR_0;
}
