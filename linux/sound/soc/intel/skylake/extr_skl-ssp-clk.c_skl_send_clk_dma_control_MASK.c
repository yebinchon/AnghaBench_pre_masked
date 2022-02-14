
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mclk; int keep_running; int warm_up_over; int clk_stop_over; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
union skl_clk_ctrl_ipc {TYPE_3__ mclk; TYPE_2__ sclk_fs; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct skl_dmactrl_sclkfs_cfg {int dummy; } ;
struct skl_dmactrl_mclk_cfg {int dummy; } ;
struct skl_dev {int dummy; } ;
struct skl_clk_rate_cfg_table {scalar_t__ config; union skl_clk_ctrl_ipc dma_ctl_ipc; } ;
struct nhlt_specific_cfg {int size; scalar_t__* caps; } ;
struct nhlt_fmt_cfg {struct nhlt_specific_cfg config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,scalar_t__*,scalar_t__) ;
 int FUNC_3 (struct skl_dev*,int*,int,int) ;

__attribute__((used)) static int FUNC_4(struct skl_dev *VAR_8,
    struct skl_clk_rate_cfg_table *VAR_9,
    u32 VAR_10, u8 VAR_11,
    bool VAR_12)
{
 struct nhlt_specific_cfg *VAR_13;
 u32 VAR_14, VAR_15 = 0;
 struct nhlt_fmt_cfg *VAR_16;
 union skl_clk_ctrl_ipc *VAR_17;
 void *VAR_18 = ((void*)0);
 u8 *VAR_19, VAR_20;
 int VAR_21;

 if (!VAR_9)
  return -VAR_2;

 VAR_17 = &VAR_9->dma_ctl_ipc;
 VAR_16 = (struct nhlt_fmt_cfg *)VAR_9->config;
 VAR_13 = &VAR_16->config;

 if (VAR_11 == VAR_7) {
  VAR_17->sclk_fs.hdr.type =
   VAR_12 ? VAR_0 : VAR_1;
  VAR_19 = (u8 *)&VAR_17->sclk_fs;
  VAR_20 = sizeof(struct skl_dmactrl_sclkfs_cfg);
 } else {

  if (VAR_11 == VAR_6)
   VAR_17->mclk.mclk = 0;
  else
   VAR_17->mclk.mclk = 1;

  VAR_17->mclk.keep_running = VAR_12;
  VAR_17->mclk.warm_up_over = VAR_12;
  VAR_17->mclk.clk_stop_over = !VAR_12;
  VAR_19 = (u8 *)&VAR_17->mclk;
  VAR_20 = sizeof(struct skl_dmactrl_mclk_cfg);
 }

 VAR_14 = VAR_13->size + VAR_20;
 VAR_18 = FUNC_1(VAR_14, VAR_4);
 if (!VAR_18)
  return -VAR_3;


 FUNC_2(VAR_18, VAR_13->caps, VAR_13->size);


 FUNC_2(VAR_18 + VAR_13->size, VAR_19, VAR_20);

 VAR_15 = ((VAR_5 << 8) | (VAR_10 << 4));
 VAR_21 = FUNC_3(VAR_8, (u32 *)VAR_18,
     VAR_14, VAR_15);
 FUNC_0(VAR_18);

 return VAR_21;
}
