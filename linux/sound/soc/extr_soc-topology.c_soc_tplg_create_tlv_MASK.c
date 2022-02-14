
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct soc_tplg {int dev; } ;
struct snd_soc_tplg_ctl_tlv {int type; int scale; } ;
struct snd_soc_tplg_ctl_hdr {struct snd_soc_tplg_ctl_tlv tlv; int access; } ;
struct snd_kcontrol_new {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct soc_tplg*,struct snd_kcontrol_new*,int *) ;

__attribute__((used)) static int FUNC_3(struct soc_tplg *VAR_3,
 struct snd_kcontrol_new *VAR_4, struct snd_soc_tplg_ctl_hdr *VAR_5)
{
 struct snd_soc_tplg_ctl_tlv *VAR_6;
 u32 VAR_7 = FUNC_1(VAR_5->access);

 if (!(VAR_7 & VAR_2))
  return 0;

 if (!(VAR_7 & VAR_1)) {
  VAR_6 = &VAR_5->tlv;
  switch (FUNC_1(VAR_6->type)) {
  case 128:
   return FUNC_2(VAR_3, VAR_4,
     &VAR_6->scale);


  default:
   FUNC_0(VAR_3->dev, "Unsupported TLV type %d\n",
     VAR_6->type);
   return -VAR_0;
  }
 }

 return 0;
}
