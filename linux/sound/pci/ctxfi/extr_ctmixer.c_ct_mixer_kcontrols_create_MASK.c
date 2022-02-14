
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ct_mixer {struct ct_atc* atc; } ;
struct ct_atc {int (* spdif_in_unmute ) (struct ct_atc*,int ) ;int (* mic_unmute ) (struct ct_atc*,int ) ;int (* line_in_unmute ) (struct ct_atc*,int ) ;int (* spdif_out_unmute ) (struct ct_atc*,int ) ;int (* line_rear_unmute ) (struct ct_atc*,int ) ;int (* line_clfe_unmute ) (struct ct_atc*,int ) ;int (* line_surround_unmute ) (struct ct_atc*,int ) ;int (* line_front_unmute ) (struct ct_atc*,int) ;struct capabilities (* capabilities ) (struct ct_atc*) ;} ;
struct capabilities {scalar_t__ dedicated_mic; scalar_t__ mic_source_switch; scalar_t__ output_switch; scalar_t__ digit_io_switch; } ;
typedef enum CTALSA_MIXER_CTL { ____Placeholder_CTALSA_MIXER_CTL } CTALSA_MIXER_CTL ;
struct TYPE_11__ {int name; scalar_t__ ctl; } ;
struct TYPE_10__ {unsigned long private_value; int name; } ;


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
 TYPE_9__* VAR_13 ;
 int FUNC_0 (struct ct_mixer*,TYPE_1__*) ;
 TYPE_1__ VAR_14 ;
 TYPE_1__ VAR_15 ;
 TYPE_1__ VAR_16 ;
 TYPE_1__ VAR_17 ;
 TYPE_1__ VAR_18 ;
 int FUNC_1 (struct ct_mixer*,int ,int) ;
 struct capabilities FUNC_2 (struct ct_atc*) ;
 int FUNC_3 (struct ct_atc*,int) ;
 int FUNC_4 (struct ct_atc*,int ) ;
 int FUNC_5 (struct ct_atc*,int ) ;
 int FUNC_6 (struct ct_atc*,int ) ;
 int FUNC_7 (struct ct_atc*,int ) ;
 int FUNC_8 (struct ct_atc*,int ) ;
 int FUNC_9 (struct ct_atc*,int ) ;
 int FUNC_10 (struct ct_atc*,int ) ;
 TYPE_1__ VAR_19 ;
 TYPE_1__ VAR_20 ;

__attribute__((used)) static int FUNC_11(struct ct_mixer *VAR_21)
{
 enum CTALSA_MIXER_CTL VAR_22;
 struct ct_atc *VAR_23 = VAR_21->atc;
 struct capabilities VAR_24 = VAR_23->capabilities(VAR_23);
 int VAR_25;


 for (VAR_22 = VAR_12; VAR_22 <= VAR_11; VAR_22++) {
  if (VAR_13[VAR_22].ctl) {
   VAR_20.name = VAR_13[VAR_22].name;
   VAR_20.private_value = (unsigned long)VAR_22;
   VAR_25 = FUNC_0(VAR_21, &VAR_20);
   if (VAR_25)
    return VAR_25;
  }
 }

 VAR_13[VAR_0].ctl = VAR_24.digit_io_switch;

 for (VAR_22 = VAR_10; VAR_22 <= VAR_9; VAR_22++) {
  if (VAR_13[VAR_22].ctl) {
   VAR_19.name = VAR_13[VAR_22].name;
   VAR_19.private_value = (unsigned long)VAR_22;
   VAR_25 = FUNC_0(VAR_21, &VAR_19);
   if (VAR_25)
    return VAR_25;
  }
 }

 VAR_25 = FUNC_0(VAR_21, &VAR_16);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_0(VAR_21, &VAR_15);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_0(VAR_21, &VAR_14);
 if (VAR_25)
  return VAR_25;

 if (VAR_24.output_switch) {
  VAR_25 = FUNC_0(VAR_21, &VAR_18);
  if (VAR_25)
   return VAR_25;
 }

 if (VAR_24.mic_source_switch) {
  VAR_25 = FUNC_0(VAR_21, &VAR_17);
  if (VAR_25)
   return VAR_25;
 }
 VAR_23->line_front_unmute(VAR_23, 1);
 FUNC_1(VAR_21, VAR_6, 1);
 VAR_23->line_surround_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_8, 0);
 VAR_23->line_clfe_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_5, 0);
 VAR_23->line_rear_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_7, 0);
 VAR_23->spdif_out_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_4, 0);
 VAR_23->line_in_unmute(VAR_23, 0);
 if (VAR_24.dedicated_mic)
  VAR_23->mic_unmute(VAR_23, 0);
 VAR_23->spdif_in_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_2, 0);
 FUNC_1(VAR_21, VAR_1, 0);
 FUNC_1(VAR_21, VAR_3, 0);

 return 0;
}
