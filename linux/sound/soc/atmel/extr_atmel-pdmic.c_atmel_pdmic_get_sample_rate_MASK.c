
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct atmel_pdmic {int gclk; int pclk; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ mic_min_freq; scalar_t__ mic_max_freq; } ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct atmel_pdmic *VAR_0,
 unsigned int *VAR_1, unsigned int *VAR_2)
{
 u32 VAR_3 = VAR_0->pdata->mic_min_freq;
 u32 VAR_4 = VAR_0->pdata->mic_max_freq;
 u32 VAR_5 = (u32)(FUNC_1(VAR_0->pclk) >> 1);
 u32 VAR_6 = (u32)(FUNC_1(VAR_0->gclk) >> 8);

 if (VAR_4 > VAR_5)
  VAR_4 = VAR_5;

 if (VAR_3 < VAR_6)
  VAR_3 = VAR_6;

 *VAR_1 = FUNC_0(VAR_3, 128);
 *VAR_2 = VAR_4 >> 6;
}
