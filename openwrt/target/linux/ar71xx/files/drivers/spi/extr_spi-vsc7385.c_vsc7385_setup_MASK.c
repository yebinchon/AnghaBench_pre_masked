
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ bit2; int clk_sel; int tx_ipg; } ;
struct vsc7385_platform_data {TYPE_1__ mac_cfg; } ;
struct vsc7385 {struct vsc7385_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int FUNC_2 (struct vsc7385*,int ,int ,int ,int ) ;
 int FUNC_3 (struct vsc7385*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vsc7385 *VAR_13)
{
 struct vsc7385_platform_data *VAR_14 = VAR_13->pdata;
 u32 VAR_15;
 int VAR_16;

 VAR_16 = FUNC_3(VAR_13, VAR_7, 0,
       VAR_8,
       VAR_2,
       VAR_3,
       VAR_2);
 if (VAR_16)
  goto err;

 VAR_16 = FUNC_3(VAR_13, VAR_6,
       VAR_12, VAR_5,
       VAR_0,
       VAR_1,
       VAR_0);
 if (VAR_16)
  goto err;

 VAR_16 = FUNC_2(VAR_13, VAR_6, VAR_12,
       VAR_9, VAR_4);
 if (VAR_16)
  goto err;

 VAR_15 = VAR_11;
 VAR_15 |= FUNC_1(VAR_14->mac_cfg.tx_ipg);
 VAR_15 |= FUNC_0(VAR_14->mac_cfg.clk_sel);
 if (VAR_14->mac_cfg.bit2)
  VAR_15 |= VAR_10;

 VAR_16 = FUNC_2(VAR_13, VAR_6, VAR_12,
       VAR_9, VAR_15);
 if (VAR_16)
  goto err;

 return 0;

err:
 return VAR_16;
}
