
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct cmipci {int chip_version; scalar_t__ can_ac3_hw; } ;
struct TYPE_2__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cmipci*,int ,int ) ;
 int FUNC_1 (struct cmipci*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cmipci *VAR_7, struct snd_pcm_substream *VAR_8, int VAR_9, int VAR_10)
{
 if (VAR_9) {

  FUNC_1(VAR_7, VAR_3, VAR_0);

  FUNC_1(VAR_7, VAR_4, VAR_1);

  if (VAR_7->can_ac3_hw) {


   FUNC_1(VAR_7, VAR_3, VAR_5);
   FUNC_0(VAR_7, VAR_4, VAR_6);
  } else {

   FUNC_1(VAR_7, VAR_4, VAR_6);

   if (VAR_7->chip_version == 33) {
    if (VAR_10 >= 48000) {
     FUNC_1(VAR_7, VAR_3, VAR_2);
    } else {
     FUNC_0(VAR_7, VAR_3, VAR_2);
    }
   }
  }

 } else {
  FUNC_0(VAR_7, VAR_3, VAR_0);
  FUNC_0(VAR_7, VAR_4, VAR_1);

  if (VAR_7->can_ac3_hw) {

   if (FUNC_2(VAR_8->runtime->format) > 16) {
    FUNC_1(VAR_7, VAR_4, VAR_6);
    FUNC_1(VAR_7, VAR_3, VAR_5);
   } else {
    FUNC_0(VAR_7, VAR_4, VAR_6);
    FUNC_0(VAR_7, VAR_3, VAR_5);
   }
  } else {
   FUNC_0(VAR_7, VAR_4, VAR_6);
   FUNC_0(VAR_7, VAR_3, VAR_5);
   FUNC_0(VAR_7, VAR_3, VAR_2);
  }
 }
}
