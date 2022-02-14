
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dev; } ;
struct hdac_ext_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_sof_dev*,struct hdac_ext_stream*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int ,unsigned int,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_sof_dev *VAR_8, struct hdac_ext_stream *VAR_9)
{
 unsigned int VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_6);
 if (VAR_11 < 0) {
  FUNC_1(VAR_8->dev, "error: DMA trigger start failed\n");
  return VAR_11;
 }

 VAR_12 = FUNC_2(VAR_8, VAR_0,
     VAR_5, VAR_10,
     ((VAR_10 & VAR_4)
      == VAR_3),
     VAR_2,
     VAR_1);

 VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_7);
 if (VAR_11 < 0) {
  FUNC_1(VAR_8->dev, "error: DMA trigger stop failed\n");
  return VAR_11;
 }

 return VAR_12;
}
