
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int dummy; } ;
struct mii_bus {struct rtl8366_smi* priv; } ;


 int FUNC_0 (struct rtl8366_smi*,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 struct rtl8366_smi *VAR_3 = VAR_0->priv;
 u32 VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return 0xffff;

 return VAR_4;
}
