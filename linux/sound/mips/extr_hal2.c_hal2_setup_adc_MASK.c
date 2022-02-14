
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hal2_pbus {unsigned int ctrl; int pbusnr; TYPE_1__* pbus; } ;
struct TYPE_4__ {int voices; struct hal2_pbus pbus; } ;
struct snd_hal2 {TYPE_2__ adc; } ;
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
 unsigned int VAR_11 ;
 int FUNC_0 (struct snd_hal2*,int ,int ) ;
 int FUNC_1 (struct snd_hal2*,int ,int) ;
 int FUNC_2 (struct snd_hal2*,int ,int) ;
 int FUNC_3 (struct snd_hal2*) ;

__attribute__((used)) static void FUNC_4(struct snd_hal2 *VAR_12)
{
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
 struct hal2_pbus *VAR_17 = &VAR_12->adc.pbus;

 VAR_16 = 2 * VAR_12->adc.voices;
 VAR_15 = (VAR_16 * 2) >> 1;
 VAR_13 = (4 * 4) >> 3;
 VAR_14 = (4 * 4 + VAR_16 * 4) >> 3;
 VAR_17->ctrl = VAR_11 | VAR_10 | VAR_9 |
       (VAR_15 << 8) | (VAR_13 << 16) | (VAR_14 << 24);
 VAR_17->pbus->pbdma_ctrl = VAR_9;
 FUNC_0(VAR_12, VAR_7, VAR_8);

 FUNC_3(VAR_12);

 FUNC_0(VAR_12, VAR_5, VAR_6);

 FUNC_1(VAR_12, VAR_4, (1 << VAR_17->pbusnr));

 FUNC_2(VAR_12, VAR_0, (VAR_17->pbusnr << VAR_3)
   | (2 << VAR_1)
   | (VAR_12->adc.voices << VAR_2));
}
