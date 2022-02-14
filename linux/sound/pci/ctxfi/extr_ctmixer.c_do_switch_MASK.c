
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_mixer {int dummy; } ;
struct ct_atc {int (* spdif_out_unmute ) (struct ct_atc*,int) ;int (* line_rear_unmute ) (struct ct_atc*,int) ;int (* line_clfe_unmute ) (struct ct_atc*,int) ;int (* line_surround_unmute ) (struct ct_atc*,int) ;int (* line_front_unmute ) (struct ct_atc*,int) ;int (* spdif_in_unmute ) (struct ct_atc*,int) ;int (* mic_unmute ) (struct ct_atc*,int) ;int (* line_in_unmute ) (struct ct_atc*,int) ;struct capabilities (* capabilities ) (struct ct_atc*) ;struct ct_mixer* mixer; } ;
struct capabilities {scalar_t__ dedicated_mic; } ;
typedef enum CTALSA_MIXER_CTL { ____Placeholder_CTALSA_MIXER_CTL } CTALSA_MIXER_CTL ;


 int VAR_0 ;
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
 int FUNC_0 (struct ct_mixer*,int ) ;
 int FUNC_1 (struct ct_mixer*,int ) ;
 int FUNC_2 (struct ct_atc*,int) ;
 int FUNC_3 (struct ct_atc*,int) ;
 int FUNC_4 (int) ;
 struct capabilities FUNC_5 (struct ct_atc*) ;
 int FUNC_6 (struct ct_atc*,int) ;
 int FUNC_7 (struct ct_atc*,int) ;
 int FUNC_8 (struct ct_atc*,int) ;
 int FUNC_9 (struct ct_atc*,int) ;
 int FUNC_10 (struct ct_atc*,int) ;
 int FUNC_11 (struct ct_atc*,int) ;
 int FUNC_12 (struct ct_atc*,int) ;
 int FUNC_13 (struct ct_atc*,int) ;
 int FUNC_14 (struct ct_atc*,int) ;

__attribute__((used)) static void FUNC_15(struct ct_atc *VAR_11, enum CTALSA_MIXER_CTL VAR_12, int VAR_13)
{
 struct ct_mixer *VAR_14 = VAR_11->mixer;
 struct capabilities VAR_15 = VAR_11->capabilities(VAR_11);


 if ((VAR_10 <= VAR_12) && (VAR_9 >= VAR_12)) {
  if (VAR_13) {
   FUNC_0(VAR_14,
        FUNC_4(VAR_12));
  } else {
   FUNC_1(VAR_14,
          FUNC_4(VAR_12));
  }
 }

 if (!VAR_15.dedicated_mic &&
     (VAR_1 == VAR_12 || VAR_2 == VAR_12)) {
  if (VAR_13)
   FUNC_3(VAR_11, VAR_12);
  VAR_11->line_in_unmute(VAR_11, VAR_13);
 } else if (VAR_15.dedicated_mic && (VAR_1 == VAR_12))
  VAR_11->line_in_unmute(VAR_11, VAR_13);
 else if (VAR_15.dedicated_mic && (VAR_2 == VAR_12))
  VAR_11->mic_unmute(VAR_11, VAR_13);
 else if (VAR_3 == VAR_12)
  VAR_11->spdif_in_unmute(VAR_11, VAR_13);
 else if (VAR_6 == VAR_12)
  VAR_11->line_front_unmute(VAR_11, VAR_13);
 else if (VAR_8 == VAR_12)
  VAR_11->line_surround_unmute(VAR_11, VAR_13);
 else if (VAR_5 == VAR_12)
  VAR_11->line_clfe_unmute(VAR_11, VAR_13);
 else if (VAR_7 == VAR_12)
  VAR_11->line_rear_unmute(VAR_11, VAR_13);
 else if (VAR_4 == VAR_12)
  VAR_11->spdif_out_unmute(VAR_11, VAR_13);
 else if (VAR_0 == VAR_12)
  FUNC_2(VAR_11, VAR_13);

 return;
}
