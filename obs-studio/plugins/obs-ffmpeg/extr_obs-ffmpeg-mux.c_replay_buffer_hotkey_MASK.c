
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {long long save_ts; int output; int active; } ;
typedef int obs_hotkey_t ;
typedef int obs_hotkey_id ;
typedef int obs_encoder_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 long long FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void *VAR_0, obs_hotkey_id VAR_1,
     obs_hotkey_t *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_1);
 FUNC_0(*VAR_2);
 FUNC_0(VAR_3);

 if (!VAR_3)
  return;

 struct ffmpeg_muxer *VAR_4 = VAR_0;

 if (FUNC_4(&VAR_4->active)) {
  obs_encoder_t *VAR_5 =
   FUNC_3(VAR_4->output);
  if (FUNC_2(VAR_5)) {
   FUNC_1("Could not save buffer because encoders paused");
   return;
  }

  VAR_4->save_ts = FUNC_5() / 1000LL;
 }
}
