
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {scalar_t__ ext_mbus; } ;


 int FUNC_0 (struct rtl8366_smi*,int ,int ) ;
 int FUNC_1 (struct rtl8366_smi*,int ,int ,int) ;

int FUNC_2(struct rtl8366_smi *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (VAR_0->ext_mbus)
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2, 1);
}
