
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dummy; } ;
struct atmel_pdmic {TYPE_1__* pdata; } ;
struct TYPE_2__ {int mic_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atmel_pdmic* FUNC_0 (struct snd_soc_card*) ;
 struct snd_soc_card* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_3)
{
 struct snd_soc_card *VAR_4 = FUNC_1(VAR_3);
 struct atmel_pdmic *VAR_5 = FUNC_0(VAR_4);

 FUNC_2(VAR_3, VAR_0, VAR_1,
       (u32)(VAR_5->pdata->mic_offset << VAR_2));

 return 0;
}
