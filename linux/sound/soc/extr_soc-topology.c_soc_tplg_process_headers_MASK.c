
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {scalar_t__ pass; int dev; scalar_t__ hdr_pos; TYPE_1__* fw; } ;
struct snd_soc_tplg_hdr {int payload_size; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct soc_tplg*) ;
 int FUNC_3 (struct soc_tplg*) ;
 int FUNC_4 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;
 int FUNC_5 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;

__attribute__((used)) static int FUNC_6(struct soc_tplg *VAR_2)
{
 struct snd_soc_tplg_hdr *VAR_3;
 int VAR_4;

 VAR_2->pass = VAR_1;


 while (VAR_2->pass <= VAR_0) {

  VAR_2->hdr_pos = VAR_2->fw->data;
  VAR_3 = (struct snd_soc_tplg_hdr *)VAR_2->hdr_pos;

  while (!FUNC_3(VAR_2)) {


   VAR_4 = FUNC_5(VAR_2, VAR_3);
   if (VAR_4 < 0)
    return VAR_4;
   else if (VAR_4 == 0)
    break;


   VAR_4 = FUNC_4(VAR_2, VAR_3);
   if (VAR_4 < 0)
    return VAR_4;


   VAR_2->hdr_pos += FUNC_1(VAR_3->payload_size) +
    sizeof(struct snd_soc_tplg_hdr);
   VAR_3 = (struct snd_soc_tplg_hdr *)VAR_2->hdr_pos;
  }


  VAR_2->pass++;
 }


 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 < 0)
  FUNC_0(VAR_2->dev,
   "ASoC: failed to initialise DAPM from Firmware\n");

 return VAR_4;
}
