
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* pbus; } ;
struct TYPE_12__ {int substream; TYPE_5__ pbus; } ;
struct TYPE_8__ {TYPE_1__* pbus; } ;
struct TYPE_9__ {int substream; TYPE_2__ pbus; } ;
struct snd_hal2 {TYPE_6__ adc; TYPE_3__ dac; } ;
typedef int irqreturn_t ;
struct TYPE_10__ {int pbdma_ctrl; } ;
struct TYPE_7__ {int pbdma_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_3, void *VAR_4)
{
 struct snd_hal2 *VAR_5 = VAR_4;
 irqreturn_t VAR_6 = VAR_2;


 if (VAR_5->dac.pbus.pbus->pbdma_ctrl & VAR_0) {
  FUNC_0(VAR_5->dac.substream);
  VAR_6 = VAR_1;
 }
 if (VAR_5->adc.pbus.pbus->pbdma_ctrl & VAR_0) {
  FUNC_0(VAR_5->adc.substream);
  VAR_6 = VAR_1;
 }
 return VAR_6;
}
