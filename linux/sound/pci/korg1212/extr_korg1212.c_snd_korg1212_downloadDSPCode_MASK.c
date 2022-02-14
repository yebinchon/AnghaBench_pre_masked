
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct snd_korg1212 {size_t cardState; scalar_t__ dsp_is_loaded; int wait; TYPE_1__ dma_dsp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 size_t VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_korg1212*) ;
 int FUNC_3 (struct snd_korg1212*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct snd_korg1212*,size_t) ;
 int * VAR_5 ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct snd_korg1212 *VAR_6)
{
 int VAR_7;

        FUNC_0("K1212_DEBUG: DSP download is starting... [%s]\n",
      VAR_5[VAR_6->cardState]);




        if (VAR_6->cardState >= VAR_4)
                return 1;

        FUNC_4(VAR_6, VAR_4);

        VAR_7 = FUNC_3(VAR_6, VAR_3,
                                     FUNC_1(VAR_6->dma_dsp.addr),
                                     0, 0, 0);
 if (VAR_7)
  FUNC_0("K1212_DEBUG: Start DSP Download RC = %d [%s]\n",
       VAR_7, VAR_5[VAR_6->cardState]);

 VAR_6->dsp_is_loaded = 0;
 FUNC_5(VAR_6->wait, VAR_6->dsp_is_loaded, VAR_2 * VAR_0);
 if (! VAR_6->dsp_is_loaded )
  return -VAR_1;

 FUNC_2(VAR_6);

        return 0;
}
