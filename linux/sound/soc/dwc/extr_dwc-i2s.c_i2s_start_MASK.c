
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct i2s_clk_config_data {int chan_nr; } ;
struct dw_i2s_dev {int i2s_base; struct i2s_clk_config_data config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dw_i2s_dev*,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dw_i2s_dev *VAR_5,
        struct snd_pcm_substream *VAR_6)
{
 struct i2s_clk_config_data *VAR_7 = &VAR_5->config;

 FUNC_1(VAR_5->i2s_base, VAR_1, 1);
 FUNC_0(VAR_5, VAR_6->stream, VAR_7->chan_nr);

 if (VAR_6->stream == VAR_4)
  FUNC_1(VAR_5->i2s_base, VAR_3, 1);
 else
  FUNC_1(VAR_5->i2s_base, VAR_2, 1);

 FUNC_1(VAR_5->i2s_base, VAR_0, 1);
}
