
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_card {char* driver; char* shortname; int longname; int dev; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hdac_bus {int irq; int addr; int codec_mask; } ;
struct device_node {int dummy; } ;
struct azx {unsigned short capture_streams; unsigned short playback_streams; unsigned short playback_index_offset; unsigned short num_streams; scalar_t__ capture_index_offset; struct snd_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int FUNC_0 (struct azx*) ;
 struct hdac_bus* FUNC_1 (struct azx*) ;
 int FUNC_2 (struct azx*,int) ;
 int FUNC_3 (struct azx*) ;
 int VAR_6 ;
 unsigned short FUNC_4 (struct azx*,int ) ;
 int FUNC_5 (int ,char*,unsigned short) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int,int ,int ,int ,struct azx*) ;
 int FUNC_9 (struct azx*,struct platform_device*) ;
 char* FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (int ,int,char*,char*,int ,int) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (char*,char const*,int) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct azx *VAR_7, struct platform_device *VAR_8)
{
 struct hdac_bus *VAR_9 = FUNC_1(VAR_7);
 struct snd_card *VAR_10 = VAR_7->card;
 int VAR_11;
 unsigned short VAR_12;
 int VAR_13 = FUNC_11(VAR_8, 0);
 const char *VAR_14, *VAR_15 = "tegra-hda";
 struct device_node *VAR_16 = VAR_8->dev.of_node;

 VAR_11 = FUNC_9(VAR_7, VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_8(VAR_7->card->dev, VAR_13, VAR_6,
        VAR_2, VAR_3, VAR_7);
 if (VAR_11) {
  FUNC_6(VAR_7->card->dev,
   "unable to request IRQ %d, disabling device\n",
   VAR_13);
  return VAR_11;
 }
 VAR_9->irq = VAR_13;

 FUNC_15(VAR_9->irq);

 VAR_12 = FUNC_4(VAR_7, VAR_1);
 FUNC_5(VAR_10->dev, "chipset global capabilities = 0x%x\n", VAR_12);




 VAR_7->capture_streams = (VAR_12 >> 8) & 0x0f;
 VAR_7->playback_streams = (VAR_12 >> 12) & 0x0f;
 if (!VAR_7->playback_streams && !VAR_7->capture_streams) {

  VAR_7->playback_streams = VAR_5;
  VAR_7->capture_streams = VAR_4;
 }
 VAR_7->capture_index_offset = 0;
 VAR_7->playback_index_offset = VAR_7->capture_streams;
 VAR_7->num_streams = VAR_7->playback_streams + VAR_7->capture_streams;


 VAR_11 = FUNC_3(VAR_7);
 if (VAR_11 < 0) {
  FUNC_6(VAR_10->dev, "failed to initialize streams: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_0(VAR_7);
 if (VAR_11 < 0) {
  FUNC_6(VAR_10->dev, "failed to allocate stream pages: %d\n",
   VAR_11);
  return VAR_11;
 }


 FUNC_2(VAR_7, 1);


 if (!VAR_9->codec_mask) {
  FUNC_6(VAR_10->dev, "no codecs found!\n");
  return -VAR_0;
 }


 FUNC_14(VAR_10->driver, VAR_15, sizeof(VAR_10->driver));

 VAR_14 = FUNC_10(VAR_16, "nvidia,model", ((void*)0));
 if (!VAR_14)
  VAR_14 = VAR_15;
 if (FUNC_13(VAR_14) > sizeof(VAR_10->shortname))
  FUNC_7(VAR_10->dev, "truncating shortname for card\n");
 FUNC_14(VAR_10->shortname, VAR_14, sizeof(VAR_10->shortname));


 FUNC_12(VAR_10->longname, sizeof(VAR_10->longname),
   "%s at 0x%lx irq %i",
   VAR_10->shortname, VAR_9->addr, VAR_9->irq);

 return 0;
}
