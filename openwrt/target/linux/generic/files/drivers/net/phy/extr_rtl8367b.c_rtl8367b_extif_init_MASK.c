
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8367_extif_config {int mode; int rxdelay; int txdelay; int ability; } ;
struct rtl8366_smi {int dummy; } ;
typedef enum rtl8367_extif_mode { ____Placeholder_rtl8367_extif_mode } rtl8367_extif_mode ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8366_smi*,int,int *) ;
 int FUNC_1 (struct rtl8366_smi*,int,int) ;
 int FUNC_2 (struct rtl8366_smi*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_1, int VAR_2,
          struct rtl8367_extif_config *VAR_3)
{
 enum rtl8367_extif_mode VAR_4;
 int VAR_5;

 VAR_4 = (VAR_3) ? VAR_3->mode : VAR_0;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 != VAR_0) {
  VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_3->ability);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3->txdelay,
           VAR_3->rxdelay);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
