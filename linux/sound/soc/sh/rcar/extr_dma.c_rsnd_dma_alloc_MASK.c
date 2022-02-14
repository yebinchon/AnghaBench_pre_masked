
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod_ops {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dma_ctrl {int dmapp_num; int dmaen_num; } ;
struct rsnd_dma {struct rsnd_mod* mod_to; struct rsnd_mod* mod_from; void* dst_addr; void* src_addr; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int ,int ,int ) ;
 struct rsnd_dma* FUNC_1 (struct device*,int,int ) ;
 struct rsnd_mod VAR_5 ;
 void* FUNC_2 (struct rsnd_dai_stream*,struct rsnd_mod*,int,int) ;
 int FUNC_3 (struct rsnd_mod*,struct rsnd_dai_stream*,int,struct rsnd_mod**,struct rsnd_mod**) ;
 int FUNC_4 (struct rsnd_dai_stream*,struct rsnd_dma*,struct rsnd_mod*,struct rsnd_mod*) ;
 struct rsnd_mod_ops VAR_6 ;
 int FUNC_5 (struct rsnd_dai_stream*,struct rsnd_dma*,struct rsnd_mod*,struct rsnd_mod*) ;
 struct rsnd_mod_ops VAR_7 ;
 int FUNC_6 (struct rsnd_dai_stream*) ;
 struct rsnd_priv* FUNC_7 (struct rsnd_dai_stream*) ;
 scalar_t__ FUNC_8 (struct rsnd_priv*) ;
 struct rsnd_mod* FUNC_9 (struct rsnd_dma*) ;
 int FUNC_10 (struct rsnd_priv*,struct rsnd_mod*,struct rsnd_mod_ops*,int *,int,int) ;
 int FUNC_11 (struct rsnd_mod*) ;
 struct device* FUNC_12 (struct rsnd_priv*) ;
 struct rsnd_dma_ctrl* FUNC_13 (struct rsnd_priv*) ;

__attribute__((used)) static int FUNC_14(struct rsnd_dai_stream *VAR_8, struct rsnd_mod *VAR_9,
     struct rsnd_mod **VAR_10)
{
 struct rsnd_mod *VAR_11 = ((void*)0);
 struct rsnd_mod *VAR_12 = ((void*)0);
 struct rsnd_priv *VAR_13 = FUNC_7(VAR_8);
 struct rsnd_dma_ctrl *VAR_14 = FUNC_13(VAR_13);
 struct device *VAR_15 = FUNC_12(VAR_13);
 struct rsnd_dma *VAR_16;
 struct rsnd_mod_ops *VAR_17;
 enum rsnd_mod_type VAR_18;
 int (*VAR_19)(struct rsnd_dai_stream *VAR_20, struct rsnd_dma *VAR_21,
        struct rsnd_mod *VAR_22, struct rsnd_mod *VAR_23);
 int VAR_24 = FUNC_6(VAR_8);
 int VAR_25, VAR_26;







 if (!VAR_14)
  return -VAR_0;

 FUNC_3(VAR_9, VAR_8, VAR_24, &VAR_11, &VAR_12);


 if (VAR_11 && VAR_12) {
  VAR_17 = &VAR_7;
  VAR_19 = FUNC_5;
  VAR_26 = VAR_14->dmapp_num;
  VAR_18 = VAR_4;
 } else {
  VAR_17 = &VAR_6;
  VAR_19 = FUNC_4;
  VAR_26 = VAR_14->dmaen_num;
  VAR_18 = VAR_3;
 }


 if (FUNC_8(VAR_13)) {
  VAR_17 = &VAR_6;
  VAR_19 = FUNC_4;
  VAR_26 = VAR_14->dmaen_num;
  VAR_18 = VAR_3;
 }

 VAR_16 = FUNC_1(VAR_15, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 *VAR_10 = FUNC_9(VAR_16);

 VAR_25 = FUNC_10(VAR_13, *VAR_10, VAR_17, ((void*)0),
       VAR_18, VAR_26);
 if (VAR_25 < 0)
  return VAR_25;

 FUNC_0(VAR_15, "%s %s -> %s\n",
  FUNC_11(*VAR_10),
  FUNC_11(VAR_11 ? VAR_11 : &VAR_5),
  FUNC_11(VAR_12 ? VAR_12 : &VAR_5));

 VAR_25 = VAR_19(VAR_8, VAR_16, VAR_11, VAR_12);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_16->src_addr = FUNC_2(VAR_8, VAR_11, VAR_24, 1);
 VAR_16->dst_addr = FUNC_2(VAR_8, VAR_12, VAR_24, 0);
 VAR_16->mod_from = VAR_11;
 VAR_16->mod_to = VAR_12;

 return 0;
}
