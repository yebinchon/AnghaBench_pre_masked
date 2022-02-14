
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_sgio2audio {int ring_base_dma; int ring_base; TYPE_1__* card; int * channel; } ;
struct TYPE_8__ {int control; } ;
struct TYPE_9__ {TYPE_2__ audio; } ;
struct TYPE_11__ {TYPE_3__ perif; } ;
struct TYPE_10__ {size_t idx; int irq; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct snd_sgio2audio*) ;
 TYPE_5__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct snd_sgio2audio *VAR_4)
{
 int VAR_5;


 FUNC_5(VAR_0, &VAR_2->perif.audio.control);
 FUNC_4(1);
 FUNC_5(0, &VAR_2->perif.audio.control);


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
  FUNC_2(VAR_3[VAR_5].irq,
    &VAR_4->channel[VAR_3[VAR_5].idx]);

 FUNC_1(VAR_4->card->dev, VAR_1,
     VAR_4->ring_base, VAR_4->ring_base_dma);


 FUNC_3(VAR_4);
 return 0;
}
