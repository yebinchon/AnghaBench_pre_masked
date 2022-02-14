
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tplg ;
struct soc_tplg {int bytes_ext_ops_count; int bytes_ext_ops; int io_ops_count; int io_ops; int req_index; struct snd_soc_tplg_ops* ops; struct snd_soc_component* comp; int dev; struct firmware const* fw; } ;
struct snd_soc_tplg_ops {int bytes_ext_ops_count; int bytes_ext_ops; int io_ops_count; int io_ops; } ;
struct snd_soc_component {int dev; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct soc_tplg*,int ,int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct soc_tplg*) ;

int FUNC_3(struct snd_soc_component *VAR_1,
 struct snd_soc_tplg_ops *VAR_2, const struct firmware *VAR_3, u32 VAR_4)
{
 struct soc_tplg VAR_5;
 int VAR_6;


 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.fw = VAR_3;
 VAR_5.dev = VAR_1->dev;
 VAR_5.comp = VAR_1;
 VAR_5.ops = VAR_2;
 VAR_5.req_index = VAR_4;
 VAR_5.io_ops = VAR_2->io_ops;
 VAR_5.io_ops_count = VAR_2->io_ops_count;
 VAR_5.bytes_ext_ops = VAR_2->bytes_ext_ops;
 VAR_5.bytes_ext_ops_count = VAR_2->bytes_ext_ops_count;

 VAR_6 = FUNC_2(&VAR_5);

 if (VAR_6)
  FUNC_1(VAR_1, VAR_0);

 return VAR_6;
}
