
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_m3 {int dummy; } ;
struct TYPE_6__ {int data; int code; } ;
struct m3_dma {TYPE_2__ inst; } ;
struct TYPE_7__ {int addr; int val; } ;
struct TYPE_5__ {int rate; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_1 (struct snd_m3*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct snd_m3 *VAR_8, struct m3_dma *VAR_9,
        struct snd_pcm_substream *VAR_10)
{
 unsigned int VAR_11;





 FUNC_1(VAR_8, VAR_4,
     VAR_9->inst.data + VAR_6 + 12,
     VAR_9->inst.data + 40 + 8);

 FUNC_1(VAR_8, VAR_4,
     VAR_9->inst.data + VAR_6 + 19,
     VAR_9->inst.code + VAR_5);


 FUNC_1(VAR_8, VAR_4,
     VAR_9->inst.data + VAR_6 + 22,
     VAR_10->runtime->rate > 45000 ? 0xff : 0);


 FUNC_1(VAR_8, VAR_4,
     VAR_9->inst.data + VAR_0,
     VAR_1 + VAR_3 + VAR_2);




 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++)
  FUNC_1(VAR_8, VAR_4,
      VAR_9->inst.data + VAR_7[VAR_11].addr, VAR_7[VAR_11].val);
}
