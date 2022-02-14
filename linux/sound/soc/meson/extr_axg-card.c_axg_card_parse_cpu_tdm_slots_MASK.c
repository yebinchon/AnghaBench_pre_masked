
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_soc_dai_link {scalar_t__ dpcm_capture; scalar_t__ dpcm_playback; } ;
struct snd_soc_card {int dev; } ;
struct device_node {int dummy; } ;
struct axg_dai_link_tdm_data {int slots; int slot_width; scalar_t__* rx_mask; scalar_t__* tx_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct device_node*,char*,int*) ;
 int FUNC_5 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_card *VAR_4,
     struct snd_soc_dai_link *VAR_5,
     struct device_node *VAR_6,
     struct axg_dai_link_tdm_data *VAR_7)
{
 char VAR_8[32];
 u32 VAR_9, VAR_10;
 int VAR_11;

 VAR_7->tx_mask = FUNC_1(VAR_4->dev, VAR_0,
       sizeof(*VAR_7->tx_mask), VAR_3);
 VAR_7->rx_mask = FUNC_1(VAR_4->dev, VAR_0,
       sizeof(*VAR_7->rx_mask), VAR_3);
 if (!VAR_7->tx_mask || !VAR_7->rx_mask)
  return -VAR_2;

 for (VAR_11 = 0, VAR_9 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_6(VAR_8, 32, "dai-tdm-slot-tx-mask-%d", VAR_11);
  FUNC_5(VAR_6, VAR_8, &VAR_7->tx_mask[VAR_11]);
  VAR_9 = FUNC_3(VAR_9, VAR_7->tx_mask[VAR_11]);
 }


 if (!VAR_9)
  VAR_5->dpcm_playback = 0;

 for (VAR_11 = 0, VAR_10 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_6(VAR_8, 32, "dai-tdm-slot-rx-mask-%d", VAR_11);
  FUNC_5(VAR_6, VAR_8, &VAR_7->rx_mask[VAR_11]);
  VAR_10 = FUNC_3(VAR_10, VAR_7->rx_mask[VAR_11]);
 }


 if (!VAR_10)
  VAR_5->dpcm_capture = 0;


 if (!VAR_9 && !VAR_10) {
  FUNC_0(VAR_4->dev, "tdm link has no cpu slots\n");
  return -VAR_1;
 }

 FUNC_4(VAR_6, "dai-tdm-slot-num", &VAR_7->slots);
 if (!VAR_7->slots) {




  VAR_7->slots = FUNC_2(FUNC_3(VAR_9, VAR_10));
 } else if (VAR_7->slots < FUNC_2(FUNC_3(VAR_9, VAR_10)) || VAR_7->slots > 32) {




  FUNC_0(VAR_4->dev, "bad slot number\n");
  return -VAR_1;
 }

 FUNC_4(VAR_6, "dai-tdm-slot-width", &VAR_7->slot_width);

 return 0;
}
