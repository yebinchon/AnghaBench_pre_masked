
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hal2_pbus {unsigned int ctrl; int pbusnr; TYPE_1__* pbus; } ;
struct TYPE_4__ {int voices; struct hal2_pbus pbus; } ;
struct snd_hal2 {TYPE_2__ dac; } ;
struct TYPE_3__ {unsigned int pbdma_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (struct snd_hal2*,int ,int ) ;
 int FUNC_1 (struct snd_hal2*,int ,int) ;
 int FUNC_2 (struct snd_hal2*,int ,int) ;
 int FUNC_3 (struct snd_hal2*) ;

__attribute__((used)) static void FUNC_4(struct snd_hal2 *VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;
 struct hal2_pbus *VAR_16 = &VAR_11->dac.pbus;






 VAR_15 = 2 * VAR_11->dac.voices;


 VAR_14 = (VAR_15 * 2) >> 1;
 VAR_12 = 0;
 VAR_13 = (VAR_15 * 4) >> 3;
 VAR_16->ctrl = VAR_10 | VAR_9 |
       (VAR_14 << 8) | (VAR_12 << 16) | (VAR_13 << 24);

 VAR_16->pbus->pbdma_ctrl = VAR_9;
 FUNC_0(VAR_11, VAR_7, VAR_8);

 FUNC_3(VAR_11);

 FUNC_0(VAR_11, VAR_5, VAR_6);

 FUNC_1(VAR_11, VAR_4, (1 << VAR_16->pbusnr));

 FUNC_2(VAR_11, VAR_3, (VAR_16->pbusnr << VAR_2)
   | (1 << VAR_0)
   | (VAR_11->dac.voices << VAR_1));
}
