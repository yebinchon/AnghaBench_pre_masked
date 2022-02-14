
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int output_enable_bit; } ;
struct xonar_pcm179x {int dacs; int h6; int hp_gain_offset; TYPE_1__ generic; } ;
struct TYPE_4__ {int dac_channels_mixer; } ;
struct oxygen {int card; TYPE_2__ model; struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct oxygen*,int ,int) ;
 int FUNC_1 (struct oxygen*,int ,int) ;
 int FUNC_2 (struct oxygen*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct oxygen*) ;
 int FUNC_5 (struct oxygen*) ;

__attribute__((used)) static void FUNC_6(struct oxygen *VAR_7)
{
 struct xonar_pcm179x *VAR_8 = VAR_7->model_data;

 VAR_8->generic.output_enable_bit = VAR_4;
 VAR_8->dacs = VAR_7->model.dac_channels_mixer / 2;
 VAR_8->h6 = VAR_7->model.dac_channels_mixer > 2;
 VAR_8->hp_gain_offset = 2*-18;

 FUNC_2(VAR_7);

 FUNC_1(VAR_7, VAR_5,
     VAR_0 | VAR_2 |
     VAR_3 | VAR_1);
 FUNC_0(VAR_7, VAR_6,
       VAR_0 | VAR_2 | VAR_1);

 FUNC_5(VAR_7);
 FUNC_4(VAR_7);

 FUNC_3(VAR_7->card, "PCM1792A");
 FUNC_3(VAR_7->card, "CS5381");
}
