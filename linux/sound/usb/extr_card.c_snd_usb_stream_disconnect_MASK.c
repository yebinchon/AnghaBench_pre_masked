
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_substream {int interface; int * sync_endpoint; int * data_endpoint; int num_formats; } ;
struct snd_usb_stream {struct snd_usb_substream* substream; } ;



__attribute__((used)) static void FUNC_0(struct snd_usb_stream *VAR_0)
{
 int VAR_1;
 struct snd_usb_substream *VAR_2;

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  VAR_2 = &VAR_0->substream[VAR_1];
  if (!VAR_2->num_formats)
   continue;
  VAR_2->interface = -1;
  VAR_2->data_endpoint = ((void*)0);
  VAR_2->sync_endpoint = ((void*)0);
 }
}
