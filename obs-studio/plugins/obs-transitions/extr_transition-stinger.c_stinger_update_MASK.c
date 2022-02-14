
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct stinger_info {int transition_point_is_frame; int monitoring_type; int fade_style; int mix_b; int mix_a; int media_source; void* transition_point_ns; void* transition_point_frame; } ;
typedef int obs_data_t ;
typedef long long int64_t ;
typedef enum fade_style { ____Placeholder_fade_style } fade_style ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (char*,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(void *VAR_5, obs_data_t *VAR_6)
{
 struct stinger_info *VAR_7 = VAR_5;
 const char *VAR_8 = FUNC_2(VAR_6, "path");

 obs_data_t *VAR_9 = FUNC_0();
 FUNC_4(VAR_9, "local_file", VAR_8);

 FUNC_6(VAR_7->media_source);
 VAR_7->media_source = FUNC_5("ffmpeg_source", ((void*)0),
          VAR_9);
 FUNC_3(VAR_9);

 int64_t VAR_10 = FUNC_1(VAR_6, "transition_point");

 VAR_7->transition_point_is_frame = FUNC_1(VAR_6, "tp_type") ==
           VAR_0;

 if (VAR_7->transition_point_is_frame)
  VAR_7->transition_point_frame = (uint64_t)VAR_10;
 else
  VAR_7->transition_point_ns = (uint64_t)(VAR_10 * 1000000LL);

 VAR_7->monitoring_type =
  (int)FUNC_1(VAR_6, "audio_monitoring");
 FUNC_7(VAR_7->media_source, VAR_7->monitoring_type);

 VAR_7->fade_style =
  (enum fade_style)FUNC_1(VAR_6, "audio_fade_style");

 switch (VAR_7->fade_style) {
 default:
 case 128:
  VAR_7->mix_a = VAR_2;
  VAR_7->mix_b = VAR_4;
  break;
 case 129:
  VAR_7->mix_a = VAR_1;
  VAR_7->mix_b = VAR_3;
  break;
 }
}
