
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int PROG; int AUXDSP; int CODEC; int ASIC; } ;
struct TYPE_10__ {TYPE_2__ firmware; } ;
struct snd_riptide {TYPE_7__* capture_substream; TYPE_5__** playback_substream; int openstreams; TYPE_3__ firmware; struct cmdif* cif; scalar_t__ port; int received_irqs; int handled_irqs; int device_id; TYPE_1__* card; } ;
struct snd_info_entry {struct snd_riptide* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct pcmhw {int * intdec; int source; int mixer; int id; } ;
struct cmdif {int cmdtimemin; int cmdtimemax; int cmdtime; int errcnt; int cmdcnt; } ;
struct TYPE_14__ {TYPE_6__* runtime; } ;
struct TYPE_13__ {struct pcmhw* private_data; } ;
struct TYPE_12__ {TYPE_4__* runtime; } ;
struct TYPE_11__ {struct pcmhw* private_data; } ;
struct TYPE_8__ {int longname; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmdif*,int,unsigned short*,unsigned short*) ;
 int FUNC_1 (struct cmdif*,unsigned char*) ;
 int FUNC_2 (struct cmdif*,int *,unsigned int*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_5(struct snd_info_entry *VAR_1,
        struct snd_info_buffer *VAR_2)
{
 struct snd_riptide *VAR_3 = VAR_1->private_data;
 struct pcmhw *VAR_4;
 int VAR_5;
 struct cmdif *VAR_6 = ((void*)0);
 unsigned char VAR_7[256];
 unsigned short VAR_8 = 0, VAR_9 = 0;
 unsigned int VAR_10;

 if (!VAR_3)
  return;

 FUNC_4(VAR_2, "%s\n\n", VAR_3->card->longname);
 FUNC_4(VAR_2, "Device ID: 0x%x\nReceived IRQs: (%ld)%ld\nPorts:",
      VAR_3->device_id, VAR_3->handled_irqs, VAR_3->received_irqs);
 for (VAR_5 = 0; VAR_5 < 64; VAR_5 += 4)
  FUNC_4(VAR_2, "%c%02x: %08x",
       (VAR_5 % 16) ? ' ' : '\n', VAR_5, FUNC_3(VAR_3->port + VAR_5));
 if ((VAR_6 = VAR_3->cif)) {
  FUNC_4(VAR_2,
       "\nVersion: ASIC: %d CODEC: %d AUXDSP: %d PROG: %d",
       VAR_3->firmware.firmware.ASIC,
       VAR_3->firmware.firmware.CODEC,
       VAR_3->firmware.firmware.AUXDSP,
       VAR_3->firmware.firmware.PROG);
  FUNC_4(VAR_2, "\nDigital mixer:");
  for (VAR_5 = 0; VAR_5 < 12; VAR_5++) {
   FUNC_0(VAR_6, VAR_5, &VAR_8, &VAR_9);
   FUNC_4(VAR_2, "\n %d: %d %d", VAR_5, VAR_8, VAR_9);
  }
  FUNC_4(VAR_2,
       "\nARM Commands num: %d failed: %d time: %d max: %d min: %d",
       VAR_6->cmdcnt, VAR_6->errcnt,
       VAR_6->cmdtime, VAR_6->cmdtimemax, VAR_6->cmdtimemin);
 }
 FUNC_4(VAR_2, "\nOpen streams %d:\n", VAR_3->openstreams);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3->playback_substream[VAR_5]
      && VAR_3->playback_substream[VAR_5]->runtime
      && (VAR_4 =
   VAR_3->playback_substream[VAR_5]->runtime->private_data)) {
   FUNC_4(VAR_2,
        "stream: %d mixer: %d source: %d (%d,%d)\n",
        VAR_4->id, VAR_4->mixer, VAR_4->source,
        VAR_4->intdec[0], VAR_4->intdec[1]);
   if (!(FUNC_2(VAR_6, VAR_4->intdec, &VAR_10)))
    FUNC_4(VAR_2, "rate: %d\n", VAR_10);
  }
 }
 if (VAR_3->capture_substream
     && VAR_3->capture_substream->runtime
     && (VAR_4 = VAR_3->capture_substream->runtime->private_data)) {
  FUNC_4(VAR_2,
       "stream: %d mixer: %d source: %d (%d,%d)\n",
       VAR_4->id, VAR_4->mixer,
       VAR_4->source, VAR_4->intdec[0], VAR_4->intdec[1]);
  if (!(FUNC_2(VAR_6, VAR_4->intdec, &VAR_10)))
   FUNC_4(VAR_2, "rate: %d\n", VAR_10);
 }
 FUNC_4(VAR_2, "Paths:\n");
 VAR_5 = FUNC_1(VAR_6, VAR_7);
 while (VAR_5 >= 2) {
  VAR_5 -= 2;
  FUNC_4(VAR_2, "%x->%x ", VAR_7[VAR_5], VAR_7[VAR_5 + 1]);
 }
 FUNC_4(VAR_2, "\n");
}
