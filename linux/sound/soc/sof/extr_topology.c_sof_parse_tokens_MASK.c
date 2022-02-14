
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sof_topology_token {int dummy; } ;
struct snd_sof_dev {int dev; } ;
struct snd_soc_tplg_vendor_array {int size; int type; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 struct snd_sof_dev* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,void*,struct sof_topology_token const*,int,struct snd_soc_tplg_vendor_array*) ;
 int FUNC_4 (struct snd_soc_component*,void*,struct sof_topology_token const*,int,struct snd_soc_tplg_vendor_array*) ;
 int FUNC_5 (struct snd_soc_component*,void*,struct sof_topology_token const*,int,struct snd_soc_tplg_vendor_array*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_1,
       void *VAR_2,
       const struct sof_topology_token *VAR_3,
       int VAR_4,
       struct snd_soc_tplg_vendor_array *VAR_5,
       int VAR_6)
{
 struct snd_sof_dev *VAR_7 = FUNC_2(VAR_1);
 int VAR_8;

 while (VAR_6 > 0) {
  VAR_8 = FUNC_1(VAR_5->size);


  if (VAR_8 < 0) {
   FUNC_0(VAR_7->dev, "error: invalid array size 0x%x\n",
    VAR_8);
   return -VAR_0;
  }


  VAR_6 -= VAR_8;
  if (VAR_6 < 0) {
   FUNC_0(VAR_7->dev, "error: invalid array size 0x%x\n",
    VAR_8);
   return -VAR_0;
  }


  switch (FUNC_1(VAR_5->type)) {
  case 129:
   FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5);
   break;
  case 130:
   FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5);
   break;
  case 133:
  case 132:
  case 128:
  case 131:
   FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5);
   break;
  default:
   FUNC_0(VAR_7->dev, "error: unknown token type %d\n",
    VAR_5->type);
   return -VAR_0;
  }


  VAR_5 = (struct snd_soc_tplg_vendor_array *)((u8 *)VAR_5
   + VAR_8);
 }
 return 0;
}
