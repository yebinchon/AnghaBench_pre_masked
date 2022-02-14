
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_stream {int * pcm; } ;
struct snd_pcm {struct snd_usb_stream* private_data; } ;


 int FUNC_0 (struct snd_usb_stream*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm *VAR_0)
{
 struct snd_usb_stream *VAR_1 = VAR_0->private_data;
 if (VAR_1) {
  VAR_1->pcm = ((void*)0);
  FUNC_0(VAR_1);
 }
}
