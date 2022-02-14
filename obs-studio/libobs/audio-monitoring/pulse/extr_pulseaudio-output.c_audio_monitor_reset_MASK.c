
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_monitor {int playback_mutex; int source; int member_0; } ;


 int FUNC_0 (struct audio_monitor*) ;
 int FUNC_1 (struct audio_monitor*,int ) ;
 int FUNC_2 (struct audio_monitor*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct audio_monitor *VAR_0)
{
 struct audio_monitor VAR_1 = {0};
 bool VAR_2;
 FUNC_0(VAR_0);

 FUNC_3(&VAR_0->playback_mutex);
 VAR_2 = FUNC_1(&VAR_1, VAR_0->source);
 FUNC_4(&VAR_0->playback_mutex);

 if (VAR_2) {
  *VAR_0 = VAR_1;
  FUNC_2(VAR_0);
 } else {
  FUNC_0(&VAR_1);
 }
}
