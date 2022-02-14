
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16 ;
typedef int uint ;
struct TYPE_6__ {int gain; int balance; } ;
struct TYPE_7__ {TYPE_1__ play; } ;
typedef TYPE_2__ audio_info_t ;
struct TYPE_8__ {int dsp_; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(uint16 VAR_4, uint16 VAR_5)
{
 audio_info_t VAR_6;
 uint VAR_7;
 uint VAR_8;

 FUNC_0(&VAR_6);

 VAR_8 = (VAR_4 > VAR_5) ? VAR_4 : VAR_5;

 if (VAR_8 / VAR_1 != 0)
 {
  VAR_7 =
   VAR_1 - (VAR_4 / (VAR_8 / VAR_1)) +
   (VAR_5 / (VAR_8 / VAR_1));
 }
 else
 {
  VAR_7 = VAR_1;
 }

 VAR_6.play.gain = VAR_8 / (65536 / VAR_0);
 VAR_6.play.balance = VAR_7;

 if (FUNC_1(VAR_3->dsp_, VAR_2, &VAR_6) == -1)
 {
  FUNC_2("AUDIO_SETINFO");
  return;
 }
}
