
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rate_max; int rate_min; int rates; } ;
struct snd_pcm_runtime {TYPE_2__ hw; } ;
struct TYPE_3__ {int dig_rate; } ;
struct snd_bt87x {int reg_control; TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_bt87x *VAR_3, struct snd_pcm_runtime *VAR_4)
{
 VAR_3->reg_control |= VAR_1 | VAR_0;
 VAR_4->hw = VAR_2;
 VAR_4->hw.rates = FUNC_0(VAR_3->board.dig_rate);
 VAR_4->hw.rate_min = VAR_3->board.dig_rate;
 VAR_4->hw.rate_max = VAR_3->board.dig_rate;
 return 0;
}
