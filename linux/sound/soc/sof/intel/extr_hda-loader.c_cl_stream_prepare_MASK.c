
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dev; } ;
struct snd_dma_buffer {int dummy; } ;
struct pci_dev {int dev; } ;
struct hdac_stream {unsigned int format_val; unsigned int bufsize; int stream_tag; scalar_t__ period_bytes; int * substream; } ;
struct hdac_ext_stream {struct hdac_stream hstream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 struct hdac_ext_stream* FUNC_1 (struct snd_sof_dev*,int) ;
 int FUNC_2 (struct snd_sof_dev*,struct hdac_ext_stream*,struct snd_dma_buffer*,int *) ;
 int FUNC_3 (struct snd_sof_dev*,int,int) ;
 int FUNC_4 (struct snd_sof_dev*,struct hdac_ext_stream*,int ,unsigned int) ;
 int FUNC_5 (int ,int *,unsigned int,struct snd_dma_buffer*) ;
 int FUNC_6 (struct snd_dma_buffer*) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct snd_sof_dev *VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, struct snd_dma_buffer *VAR_8,
        int VAR_9)
{
 struct hdac_ext_stream *VAR_10;
 struct hdac_stream *VAR_11;
 struct pci_dev *VAR_12 = FUNC_7(VAR_5->dev);
 int VAR_13;

 if (VAR_9 != VAR_4) {
  FUNC_0(VAR_5->dev, "error: code loading DMA is playback only\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_1(VAR_5, VAR_9);

 if (!VAR_10) {
  FUNC_0(VAR_5->dev, "error: no stream available\n");
  return -VAR_1;
 }
 VAR_11 = &VAR_10->hstream;
 VAR_11->substream = ((void*)0);


 VAR_13 = FUNC_5(VAR_3, &VAR_12->dev, VAR_7, VAR_8);
 if (VAR_13 < 0) {
  FUNC_0(VAR_5->dev, "error: memory alloc failed: %x\n", VAR_13);
  goto error;
 }

 VAR_11->period_bytes = 0;
 VAR_11->format_val = VAR_6;
 VAR_11->bufsize = VAR_7;

 VAR_13 = FUNC_2(VAR_5, VAR_10, VAR_8, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_0(VAR_5->dev, "error: hdac prepare failed: %x\n", VAR_13);
  goto error;
 }

 FUNC_4(VAR_5, VAR_10, VAR_2, VAR_7);

 return VAR_11->stream_tag;

error:
 FUNC_3(VAR_5, VAR_9, VAR_11->stream_tag);
 FUNC_6(VAR_8);
 return VAR_13;
}
