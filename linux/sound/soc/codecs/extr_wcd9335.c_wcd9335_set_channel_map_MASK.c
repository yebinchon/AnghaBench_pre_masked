
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wcd9335_codec {unsigned int num_rx_port; unsigned int num_tx_port; TYPE_2__* tx_chs; TYPE_1__* rx_chs; int dev; } ;
struct snd_soc_dai {int component; } ;
struct TYPE_4__ {unsigned int ch_num; int list; } ;
struct TYPE_3__ {unsigned int ch_num; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,unsigned int*,unsigned int*) ;
 struct wcd9335_codec* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1,
       unsigned int VAR_2, unsigned int *VAR_3,
       unsigned int VAR_4, unsigned int *VAR_5)
{
 struct wcd9335_codec *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_1->component);

 if (!VAR_3 || !VAR_5) {
  FUNC_1(VAR_6->dev, "Invalid tx_slot=%p, rx_slot=%p\n",
   VAR_3, VAR_5);
  return -VAR_0;
 }

 VAR_6->num_rx_port = VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6->rx_chs[VAR_7].ch_num = VAR_5[VAR_7];
  FUNC_0(&VAR_6->rx_chs[VAR_7].list);
 }

 VAR_6->num_tx_port = VAR_2;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6->tx_chs[VAR_7].ch_num = VAR_3[VAR_7];
  FUNC_0(&VAR_6->tx_chs[VAR_7].list);
 }

 return 0;
}
