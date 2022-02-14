
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {scalar_t__ pass; int pos; int dev; } ;
struct snd_soc_tplg_hdr {int payload_size; int count; int size; } ;
struct TYPE_2__ {int info; } ;
struct snd_soc_tplg_ctl_hdr {TYPE_1__ ops; int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct soc_tplg*,struct snd_soc_tplg_ctl_hdr*,int) ;
 int FUNC_4 (struct soc_tplg*,int,int) ;
 int FUNC_5 (struct soc_tplg*,int,int) ;
 int FUNC_6 (struct soc_tplg*,int,int) ;
 int FUNC_7 (struct soc_tplg*) ;

__attribute__((used)) static int FUNC_8(struct soc_tplg *VAR_2,
 struct snd_soc_tplg_hdr *VAR_3)
{
 struct snd_soc_tplg_ctl_hdr *VAR_4;
 int VAR_5;

 if (VAR_2->pass != VAR_1) {
  VAR_2->pos += FUNC_2(VAR_3->size) +
   FUNC_2(VAR_3->payload_size);
  return 0;
 }

 FUNC_0(VAR_2->dev, "ASoC: adding %d kcontrols at 0x%lx\n", VAR_3->count,
  FUNC_7(VAR_2));

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_3->count); VAR_5++) {

  VAR_4 = (struct snd_soc_tplg_ctl_hdr *)VAR_2->pos;

  if (FUNC_2(VAR_4->size) != sizeof(*VAR_4)) {
   FUNC_1(VAR_2->dev, "ASoC: invalid control size\n");
   return -VAR_0;
  }

  switch (FUNC_2(VAR_4->ops.info)) {
  case 135:
  case 136:
  case 134:
  case 133:
  case 137:
  case 128:
  case 129:
   FUNC_6(VAR_2, 1,
            FUNC_2(VAR_3->payload_size));
   break;
  case 139:
  case 138:
  case 132:
  case 130:
  case 131:
   FUNC_5(VAR_2, 1,
           FUNC_2(VAR_3->payload_size));
   break;
  case 140:
   FUNC_4(VAR_2, 1,
            FUNC_2(VAR_3->payload_size));
   break;
  default:
   FUNC_3(VAR_2, VAR_4, VAR_5);
   return -VAR_0;
  }
 }

 return 0;
}
