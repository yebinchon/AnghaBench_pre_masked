
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct snd_pcm_substream {int stream; int number; TYPE_3__* pcm; TYPE_2__ dma_device; struct snd_pcm_substream* next; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct snd_mixart {int chip_idx; TYPE_4__* mgr; } ;
struct TYPE_8__ {int pci; } ;
struct TYPE_7__ {int device; } ;
struct TYPE_5__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_mixart *VAR_1, struct snd_pcm *VAR_2)
{
 FUNC_1(VAR_2, VAR_0,
           FUNC_0(VAR_1->mgr->pci), 32*1024, 32*1024);
}
