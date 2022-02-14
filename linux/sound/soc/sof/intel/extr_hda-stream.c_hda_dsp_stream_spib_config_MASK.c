
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dev; int * bar; } ;
struct hdac_stream {int index; } ;
struct hdac_ext_stream {int spib_addr; struct hdac_stream hstream; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_sof_dev*,size_t,int ,int,int) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int) ;

int FUNC_3(struct snd_sof_dev *VAR_3,
          struct hdac_ext_stream *VAR_4,
          int VAR_5, u32 VAR_6)
{
 struct hdac_stream *VAR_7 = &VAR_4->hstream;
 u32 VAR_8;

 if (!VAR_3->bar[VAR_1]) {
  FUNC_0(VAR_3->dev, "error: address of spib capability is NULL\n");
  return -VAR_0;
 }

 VAR_8 = (1 << VAR_7->index);


 FUNC_1(VAR_3, VAR_1,
    VAR_2, VAR_8,
    VAR_5 << VAR_7->index);


 FUNC_2(VAR_3, VAR_4->spib_addr, VAR_6);

 return 0;
}
