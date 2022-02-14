
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dc_offset_l_manual; int dc_offset_r_manual; int dc_offset_l_manual_mic; int dc_offset_r_manual_mic; int impedance_sensing_num; } ;
struct rt5663_priv {scalar_t__ imp_table; TYPE_1__ pdata; } ;
struct impedance_mapping_table {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int*) ;
 int FUNC_1 (struct device*,char*,int *,int) ;
 scalar_t__ FUNC_2 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct rt5663_priv *VAR_1, struct device *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, "realtek,dc_offset_l_manual",
  &VAR_1->pdata.dc_offset_l_manual);
 FUNC_0(VAR_2, "realtek,dc_offset_r_manual",
  &VAR_1->pdata.dc_offset_r_manual);
 FUNC_0(VAR_2, "realtek,dc_offset_l_manual_mic",
  &VAR_1->pdata.dc_offset_l_manual_mic);
 FUNC_0(VAR_2, "realtek,dc_offset_r_manual_mic",
  &VAR_1->pdata.dc_offset_r_manual_mic);
 FUNC_0(VAR_2, "realtek,impedance_sensing_num",
  &VAR_1->pdata.impedance_sensing_num);

 if (VAR_1->pdata.impedance_sensing_num) {
  VAR_3 = sizeof(struct impedance_mapping_table) *
   VAR_1->pdata.impedance_sensing_num;
  VAR_1->imp_table = FUNC_2(VAR_2, VAR_3, VAR_0);
  FUNC_1(VAR_2,
   "realtek,impedance_sensing_table",
   (u32 *)VAR_1->imp_table, VAR_3);
 }

 return 0;
}
