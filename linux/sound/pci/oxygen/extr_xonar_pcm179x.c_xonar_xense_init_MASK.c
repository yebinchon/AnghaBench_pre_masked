
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int anti_pop_delay; int output_enable_bit; int ext_power_bit; int ext_power_int_reg; int ext_power_reg; } ;
struct xonar_pcm179x {int has_cs2000; int dacs; int hp_gain_offset; TYPE_1__ generic; int * cs2000_regs; } ;
struct oxygen {int card; struct xonar_pcm179x* model_data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int VAR_18 ;
 int FUNC_1 (struct oxygen*) ;
 int FUNC_2 (struct oxygen*,int ,int) ;
 int FUNC_3 (struct oxygen*,int ,int) ;
 int FUNC_4 (struct oxygen*,int ,int) ;
 int FUNC_5 (struct oxygen*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct oxygen*) ;
 int FUNC_8 (struct oxygen*) ;
 int FUNC_9 (struct oxygen*) ;
 int FUNC_10 (struct oxygen*) ;

__attribute__((used)) static void FUNC_11(struct oxygen *VAR_19)
{
 struct xonar_pcm179x *VAR_20 = VAR_19->model_data;

 VAR_20->generic.ext_power_reg = VAR_11;
 VAR_20->generic.ext_power_int_reg = VAR_12;
 VAR_20->generic.ext_power_bit = VAR_7;
 FUNC_9(VAR_19);

 VAR_20->generic.anti_pop_delay = 100;
 VAR_20->has_cs2000 = 1;
 VAR_20->cs2000_regs[VAR_0] = VAR_1;

 FUNC_4(VAR_19, VAR_13,
  VAR_18 |
  VAR_16 |
  FUNC_0(VAR_8) |
  VAR_15 |
  VAR_17 |
  VAR_14);

 FUNC_10(VAR_19);
 FUNC_1(VAR_19);

 VAR_20->generic.output_enable_bit = VAR_5;
 VAR_20->dacs = 1;
 VAR_20->hp_gain_offset = 2*-18;

 FUNC_5(VAR_19);

 FUNC_3(VAR_19, VAR_9,
  VAR_2 | VAR_3 |
  VAR_4 | VAR_6);
 FUNC_2(VAR_19, VAR_10,
  VAR_2 | VAR_3 |
  VAR_6);

 FUNC_8(VAR_19);
 FUNC_7(VAR_19);

 FUNC_6(VAR_19->card, "PCM1796");
 FUNC_6(VAR_19->card, "CS5381");
 FUNC_6(VAR_19->card, "CS2000");
}
