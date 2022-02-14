
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct pm_qos_request {int dummy; } ;
struct omap_mcbsp {int* latency; struct pm_qos_request pm_qos_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pm_qos_request*,int ,int) ;
 scalar_t__ FUNC_1 (struct pm_qos_request*) ;
 int FUNC_2 (struct pm_qos_request*,int) ;
 struct omap_mcbsp* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct omap_mcbsp *VAR_5 = FUNC_3(VAR_4);
 struct pm_qos_request *VAR_6 = &VAR_5->pm_qos_req;
 int VAR_7 = (VAR_3->stream == VAR_2);
 int VAR_8 = VAR_7 ? VAR_2 : VAR_1;
 int VAR_9 = VAR_7 ? VAR_1 : VAR_2;
 int VAR_10 = VAR_5->latency[VAR_9];


 if (!VAR_10 || VAR_5->latency[VAR_8] < VAR_10)
  VAR_10 = VAR_5->latency[VAR_8];

 if (FUNC_1(VAR_6))
  FUNC_2(VAR_6, VAR_10);
 else if (VAR_10)
  FUNC_0(VAR_6, VAR_0, VAR_10);

 return 0;
}
