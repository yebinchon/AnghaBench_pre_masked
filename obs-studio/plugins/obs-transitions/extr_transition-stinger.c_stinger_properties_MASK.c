
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


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
 int VAR_11 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ,int ,int,int) ;
 int * FUNC_3 (int *,char*,int ,int ,int ) ;
 int FUNC_4 (int *,char*,int ,int ,int ,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int VAR_12 ;

__attribute__((used)) static obs_properties_t *FUNC_9(void *VAR_13)
{
 obs_properties_t *VAR_14 = FUNC_5();

 FUNC_6(VAR_14, VAR_9);

 FUNC_4(VAR_14, "path", FUNC_1("VideoFile"),
    VAR_8, VAR_2, ((void*)0));
 obs_property_t *VAR_15 = FUNC_3(
  VAR_14, "tp_type", FUNC_1("TransitionPointType"),
  VAR_4, VAR_3);
 FUNC_7(VAR_15, FUNC_1("TransitionPointTypeTime"),
      VAR_11);
 FUNC_7(
  VAR_15, FUNC_1("TransitionPointTypeFrame"), VAR_10);

 FUNC_8(VAR_15, VAR_12);

 FUNC_2(VAR_14, "transition_point",
          FUNC_1("TransitionPoint"), 0, 120000,
          1);

 obs_property_t *VAR_16 = FUNC_3(
  VAR_14, "audio_monitoring", FUNC_1("AudioMonitoring"),
  VAR_4, VAR_3);
 FUNC_7(VAR_16,
      FUNC_1("AudioMonitoring.None"),
      VAR_7);
 FUNC_7(
  VAR_16, FUNC_1("AudioMonitoring.MonitorOnly"),
  VAR_6);
 FUNC_7(VAR_16,
      FUNC_1("AudioMonitoring.Both"),
      VAR_5);

 obs_property_t *VAR_17 = FUNC_3(
  VAR_14, "audio_fade_style", FUNC_1("AudioFadeStyle"),
  VAR_4, VAR_3);
 FUNC_7(
  VAR_17,
  FUNC_1("AudioFadeStyle.FadeOutFadeIn"),
  VAR_1);
 FUNC_7(VAR_17,
      FUNC_1("AudioFadeStyle.CrossFade"),
      VAR_0);

 FUNC_0(VAR_13);
 return VAR_14;
}
