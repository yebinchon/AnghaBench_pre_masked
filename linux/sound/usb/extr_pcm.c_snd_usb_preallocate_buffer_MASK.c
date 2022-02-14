
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_usb_substream {size_t direction; TYPE_4__* dev; TYPE_1__* stream; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm {TYPE_2__* streams; } ;
struct device {int dummy; } ;
struct TYPE_8__ {TYPE_3__* bus; } ;
struct TYPE_7__ {struct device* controller; } ;
struct TYPE_6__ {struct snd_pcm_substream* substream; } ;
struct TYPE_5__ {struct snd_pcm* pcm; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int ,struct device*,int,int) ;
 int VAR_1 ;

void FUNC_1(struct snd_usb_substream *VAR_2)
{
 struct snd_pcm *VAR_3 = VAR_2->stream->pcm;
 struct snd_pcm_substream *VAR_4 = VAR_3->streams[VAR_2->direction].substream;
 struct device *VAR_5 = VAR_2->dev->bus->controller;

 if (!VAR_1)
  FUNC_0(VAR_4, VAR_0,
           VAR_5, 64*1024, 512*1024);
}
