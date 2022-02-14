
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct skl_pipe_params {int s_freq; int s_fmt; int ch; int stream; } ;
struct TYPE_2__ {int * caps; int caps_size; } ;
struct skl_module_cfg {int vbus_id; TYPE_1__ formats_config; int dev_type; } ;
struct skl_dev {int dummy; } ;
struct nhlt_specific_cfg {int caps; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int ) ;
 struct skl_dev* FUNC_1 (int ) ;
 struct nhlt_specific_cfg* FUNC_2 (struct skl_dev*,int ,int,int ,int ,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct skl_module_cfg*,struct skl_pipe_params*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_2,
    struct skl_module_cfg *VAR_3,
    struct skl_pipe_params *VAR_4)
{
 struct nhlt_specific_cfg *VAR_5;
 struct skl_dev *VAR_6 = FUNC_1(VAR_2->dev);
 int VAR_7 = FUNC_4(VAR_3->dev_type);
 u8 VAR_8 = FUNC_3(VAR_3->dev_type);

 FUNC_5(VAR_3, VAR_4);

 if (VAR_7 == VAR_1)
  return 0;


 VAR_5 = FUNC_2(VAR_6, VAR_3->vbus_id, VAR_7,
     VAR_4->s_fmt, VAR_4->ch,
     VAR_4->s_freq, VAR_4->stream,
     VAR_8);
 if (VAR_5) {
  VAR_3->formats_config.caps_size = VAR_5->size;
  VAR_3->formats_config.caps = (u32 *) &VAR_5->caps;
 } else {
  FUNC_0(VAR_2->dev, "Blob NULL for id %x type %d dirn %d\n",
     VAR_3->vbus_id, VAR_7,
     VAR_4->stream);
  FUNC_0(VAR_2->dev, "PCM: ch %d, freq %d, fmt %d\n",
     VAR_4->ch, VAR_4->s_freq, VAR_4->s_fmt);
  return -VAR_0;
 }

 return 0;
}
