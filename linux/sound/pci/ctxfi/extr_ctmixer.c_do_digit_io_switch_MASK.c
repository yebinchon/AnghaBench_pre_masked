
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_mixer {int dummy; } ;
struct ct_atc {int (* line_in_unmute ) (struct ct_atc*,int) ;int (* spdif_in_unmute ) (struct ct_atc*,int) ;int (* spdif_out_unmute ) (struct ct_atc*,scalar_t__) ;int (* select_mic_in ) (struct ct_atc*) ;int (* select_line_in ) (struct ct_atc*) ;int (* select_digit_io ) (struct ct_atc*) ;struct ct_mixer* mixer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ct_mixer*,int ) ;
 int FUNC_1 (struct ct_atc*) ;
 int FUNC_2 (struct ct_atc*,scalar_t__) ;
 int FUNC_3 (struct ct_atc*,int) ;
 int FUNC_4 (struct ct_atc*,int) ;
 int FUNC_5 (struct ct_atc*) ;
 int FUNC_6 (struct ct_atc*) ;
 int FUNC_7 (struct ct_atc*,scalar_t__) ;
 int FUNC_8 (struct ct_atc*,int) ;
 int FUNC_9 (struct ct_atc*,int) ;

__attribute__((used)) static void
FUNC_10(struct ct_atc *VAR_3, int VAR_4)
{
 struct ct_mixer *VAR_5 = VAR_3->mixer;

 if (VAR_4) {
  VAR_3->select_digit_io(VAR_3);
  VAR_3->spdif_out_unmute(VAR_3,
    FUNC_0(VAR_5, VAR_2));
  VAR_3->spdif_in_unmute(VAR_3, 1);
  VAR_3->line_in_unmute(VAR_3, 0);
  return;
 }

 if (FUNC_0(VAR_5, VAR_0))
  VAR_3->select_line_in(VAR_3);
 else if (FUNC_0(VAR_5, VAR_1))
  VAR_3->select_mic_in(VAR_3);

 VAR_3->spdif_out_unmute(VAR_3, 0);
 VAR_3->spdif_in_unmute(VAR_3, 0);
 VAR_3->line_in_unmute(VAR_3, 1);
 return;
}
