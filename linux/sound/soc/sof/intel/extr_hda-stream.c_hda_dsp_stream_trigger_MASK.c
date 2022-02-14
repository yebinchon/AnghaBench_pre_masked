
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dev; } ;
struct hdac_stream {int index; int running; } ;
struct hdac_ext_stream {struct hdac_stream hstream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hdac_stream*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int,int,int,int ,int ) ;
 int FUNC_3 (struct snd_sof_dev*,int ,int,int,int) ;
 int FUNC_4 (struct snd_sof_dev*,int ,int ,int) ;

int FUNC_5(struct snd_sof_dev *VAR_8,
      struct hdac_ext_stream *VAR_9, int VAR_10)
{
 struct hdac_stream *VAR_11 = &VAR_9->hstream;
 int VAR_12 = FUNC_0(VAR_11);
 u32 VAR_13 = VAR_7;
 int VAR_14;
 u32 VAR_15;


 switch (VAR_10) {
 case 131:
 case 132:
 case 130:
  FUNC_3(VAR_8, VAR_1, VAR_6,
     1 << VAR_11->index,
     1 << VAR_11->index);

  FUNC_3(VAR_8, VAR_1,
     VAR_12,
     VAR_7 |
     VAR_5,
     VAR_7 |
     VAR_5);

  VAR_14 = FUNC_2(VAR_8,
     VAR_1,
     VAR_12, VAR_15,
     ((VAR_15 & VAR_13) == VAR_13),
     VAR_2,
     VAR_3);

  if (VAR_14)
   return VAR_14;

  VAR_11->running = 1;
  break;
 case 128:
 case 133:
 case 129:
  FUNC_3(VAR_8, VAR_1,
     VAR_12,
     VAR_7 |
     VAR_5, 0x0);

  VAR_14 = FUNC_2(VAR_8, VAR_1,
      VAR_12, VAR_15,
      !(VAR_15 & VAR_13),
      VAR_2,
      VAR_3);

  if (VAR_14)
   return VAR_14;

  FUNC_4(VAR_8, VAR_1, VAR_12 +
      VAR_4,
      VAR_5);

  VAR_11->running = 0;
  FUNC_3(VAR_8, VAR_1, VAR_6,
     1 << VAR_11->index, 0x0);
  break;
 default:
  FUNC_1(VAR_8->dev, "error: unknown command: %d\n", VAR_10);
  return -VAR_0;
 }

 return 0;
}
