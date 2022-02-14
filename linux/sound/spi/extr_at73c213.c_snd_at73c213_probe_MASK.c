
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct at73c213_board_info* platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct snd_card {char* driver; char* shortname; int longname; struct snd_at73c213* private_data; } ;
struct snd_at73c213 {int irq; int ssc; struct at73c213_board_info* board; struct spi_device* spi; } ;
struct at73c213_board_info {int ssc_id; char* shortname; int dac_clk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,struct snd_card*) ;
 int FUNC_4 (struct snd_card*,struct spi_device*) ;
 int FUNC_5 (struct snd_card*) ;
 int FUNC_6 (TYPE_1__*,int,char*,int ,int,struct snd_card**) ;
 int FUNC_7 (struct snd_card*) ;
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (int ,char*,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_2)
{
 struct snd_card *VAR_3;
 struct snd_at73c213 *VAR_4;
 struct at73c213_board_info *VAR_5;
 int VAR_6;
 char VAR_7[16];

 VAR_5 = VAR_2->dev.platform_data;
 if (!VAR_5) {
  FUNC_2(&VAR_2->dev, "no platform_data\n");
  return -VAR_0;
 }

 if (!VAR_5->dac_clk) {
  FUNC_2(&VAR_2->dev, "no DAC clk\n");
  return -VAR_0;
 }

 if (FUNC_0(VAR_5->dac_clk)) {
  FUNC_2(&VAR_2->dev, "no DAC clk\n");
  return FUNC_1(VAR_5->dac_clk);
 }


 FUNC_8(VAR_7, sizeof VAR_7, "at73c213_%d", VAR_5->ssc_id);
 VAR_6 = FUNC_6(&VAR_2->dev, -1, VAR_7, VAR_1,
         sizeof(struct snd_at73c213), &VAR_3);
 if (VAR_6 < 0)
  goto out;

 VAR_4 = VAR_3->private_data;
 VAR_4->spi = VAR_2;
 VAR_4->board = VAR_5;

 VAR_4->ssc = FUNC_11(VAR_5->ssc_id);
 if (FUNC_0(VAR_4->ssc)) {
  FUNC_2(&VAR_2->dev, "could not get ssc%d device\n",
    VAR_5->ssc_id);
  VAR_6 = FUNC_1(VAR_4->ssc);
  goto out_card;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_2);
 if (VAR_6)
  goto out_ssc;

 FUNC_12(VAR_3->driver, "at73c213");
 FUNC_12(VAR_3->shortname, VAR_5->shortname);
 FUNC_9(VAR_3->longname, "%s on irq %d", VAR_3->shortname, VAR_4->irq);

 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6)
  goto out_ssc;

 FUNC_3(&VAR_2->dev, VAR_3);

 goto out;

out_ssc:
 FUNC_10(VAR_4->ssc);
out_card:
 FUNC_5(VAR_3);
out:
 return VAR_6;
}
