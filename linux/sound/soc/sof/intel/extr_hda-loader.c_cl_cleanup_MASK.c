
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dummy; } ;
struct snd_dma_buffer {int * area; } ;
struct hdac_stream {scalar_t__ format_val; scalar_t__ bufsize; int * substream; scalar_t__ running; int stream_tag; } ;
struct hdac_ext_stream {struct hdac_stream hstream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hdac_stream*) ;
 int FUNC_1 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_2 (struct snd_sof_dev*,struct hdac_ext_stream*,int ,int ) ;
 int FUNC_3 (struct snd_dma_buffer*) ;
 int FUNC_4 (struct snd_sof_dev*,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_sof_dev *VAR_5, struct snd_dma_buffer *VAR_6,
        struct hdac_ext_stream *VAR_7)
{
 struct hdac_stream *VAR_8 = &VAR_7->hstream;
 int VAR_9 = FUNC_0(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_7, VAR_1, 0);

 FUNC_1(VAR_5, VAR_2,
      VAR_8->stream_tag);
 VAR_8->running = 0;
 VAR_8->substream = ((void*)0);


 FUNC_4(VAR_5, VAR_0,
     VAR_9 + VAR_3, 0);
 FUNC_4(VAR_5, VAR_0,
     VAR_9 + VAR_4, 0);

 FUNC_4(VAR_5, VAR_0, VAR_9, 0);
 FUNC_3(VAR_6);
 VAR_6->area = ((void*)0);
 VAR_8->bufsize = 0;
 VAR_8->format_val = 0;

 return VAR_10;
}
