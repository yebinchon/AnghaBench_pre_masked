
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366_smi {scalar_t__ vlan4k_enabled; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct rtl8366_smi *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4 = VAR_1;

 if (VAR_2->vlan4k_enabled)
  VAR_4 = VAR_0 - 1;

 if (VAR_3 == 0 || VAR_3 >= VAR_4)
  return 0;

 return 1;
}
