
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int size; int type; } ;
struct TYPE_12__ {TYPE_5__ hdr; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_10__ {int number_of_channels; int valid_bit_depth; int bit_depth; int sampling_frequency; TYPE_1__ hdr; } ;
union skl_clk_ctrl_ipc {TYPE_6__ mclk; TYPE_4__ sclk_fs; } ;
typedef scalar_t__ u8 ;
struct wav_fmt {int channels; int bits_per_sample; int samples_per_sec; } ;
struct skl_tlv_hdr {int dummy; } ;
struct skl_dmactrl_sclkfs_cfg {int dummy; } ;
struct skl_dmactrl_mclk_cfg {int dummy; } ;
struct skl_clk_rate_cfg_table {scalar_t__ config; union skl_clk_ctrl_ipc dma_ctl_ipc; } ;
struct TYPE_8__ {int valid_bits_per_sample; } ;
struct TYPE_9__ {TYPE_2__ sample; struct wav_fmt fmt; } ;
struct nhlt_fmt_cfg {TYPE_3__ fmt_ext; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct skl_clk_rate_cfg_table *VAR_2, u8 VAR_3)
{
 struct nhlt_fmt_cfg *VAR_4;
 union skl_clk_ctrl_ipc *VAR_5;
 struct wav_fmt *VAR_6;

 if (!VAR_2)
  return;

 VAR_5 = &VAR_2->dma_ctl_ipc;
 if (VAR_3 == VAR_1) {
  VAR_4 = (struct nhlt_fmt_cfg *)VAR_2->config;
  VAR_6 = &VAR_4->fmt_ext.fmt;


  VAR_5->sclk_fs.hdr.size = sizeof(struct skl_dmactrl_sclkfs_cfg) -
      sizeof(struct skl_tlv_hdr);
  VAR_5->sclk_fs.sampling_frequency = VAR_6->samples_per_sec;
  VAR_5->sclk_fs.bit_depth = VAR_6->bits_per_sample;
  VAR_5->sclk_fs.valid_bit_depth =
   VAR_4->fmt_ext.sample.valid_bits_per_sample;
  VAR_5->sclk_fs.number_of_channels = VAR_6->channels;
 } else {
  VAR_5->mclk.hdr.type = VAR_0;

  VAR_5->mclk.hdr.size = sizeof(struct skl_dmactrl_mclk_cfg) -
      sizeof(struct skl_tlv_hdr);
 }
}
