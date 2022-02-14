
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substream ;
struct snd_pcm_substream {int stream; } ;
struct snd_dma_buffer {int dummy; } ;
struct hdac_stream {int stream_tag; } ;
struct hdac_ext_stream {int dummy; } ;
struct hdac_bus {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hdac_bus* FUNC_0 (struct device*) ;
 struct hdac_stream* FUNC_1 (struct hdac_ext_stream*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ,int) ;
 int FUNC_3 (struct device*,unsigned int,int,int) ;
 int FUNC_4 (struct hdac_stream*,unsigned int,unsigned int,struct snd_dma_buffer*) ;
 struct hdac_ext_stream* FUNC_5 (struct hdac_bus*,struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5, struct snd_dma_buffer *VAR_6)
{
 struct hdac_bus *VAR_7 = FUNC_0(VAR_3);
 struct hdac_ext_stream *VAR_8;
 struct hdac_stream *VAR_9;
 struct snd_pcm_substream VAR_10;
 int VAR_11;

 if (!VAR_7)
  return -VAR_0;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.stream = VAR_2;

 VAR_8 = FUNC_5(VAR_7, &VAR_10,
     VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_8);


 VAR_11 = FUNC_4(VAR_9, VAR_4, VAR_5, VAR_6);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_3(VAR_3, VAR_5, VAR_9->stream_tag, 1);

 return VAR_9->stream_tag;
}
