
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {int professional_spdif; int non_audio_spdif; int bad_board; int phantom_power; int digital_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_1(struct echoaudio *VAR_1)
{
 VAR_1->digital_mode = VAR_0;
 VAR_1->professional_spdif = 0;
 VAR_1->non_audio_spdif = 0;
 VAR_1->bad_board = 0;
 VAR_1->phantom_power = 0;
 return FUNC_0(VAR_1);
}
