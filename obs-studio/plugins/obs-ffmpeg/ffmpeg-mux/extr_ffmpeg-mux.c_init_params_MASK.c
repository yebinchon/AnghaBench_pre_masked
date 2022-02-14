
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct main_params {int has_video; int tracks; int vbitrate; int width; int height; int fps_num; int fps_den; int muxer_settings; int acodec; int vcodec; int file; } ;
struct audio_params {int dummy; } ;


 struct audio_params* FUNC_0 (int,int) ;
 int FUNC_1 (struct audio_params*) ;
 int FUNC_2 (struct audio_params*,int*,char***) ;
 int FUNC_3 (int*,char***,int*,char*) ;
 int FUNC_4 (int*,char***,int *,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static bool FUNC_6(int *VAR_0, char ***VAR_1, struct main_params *VAR_2,
   struct audio_params **VAR_3)
{
 struct audio_params *VAR_4 = ((void*)0);

 if (!FUNC_4(VAR_0, VAR_1, &VAR_2->file, "file name"))
  return 0;
 if (!FUNC_3(VAR_0, VAR_1, &VAR_2->has_video, "video track count"))
  return 0;
 if (!FUNC_3(VAR_0, VAR_1, &VAR_2->tracks, "audio track count"))
  return 0;

 if (VAR_2->has_video > 1 || VAR_2->has_video < 0) {
  FUNC_5("Invalid number of video tracks\n");
  return 0;
 }
 if (VAR_2->tracks < 0) {
  FUNC_5("Invalid number of audio tracks\n");
  return 0;
 }
 if (VAR_2->has_video == 0 && VAR_2->tracks == 0) {
  FUNC_5("Must have at least 1 audio track or 1 video track\n");
  return 0;
 }

 if (VAR_2->has_video) {
  if (!FUNC_4(VAR_0, VAR_1, &VAR_2->vcodec, "video codec"))
   return 0;
  if (!FUNC_3(VAR_0, VAR_1, &VAR_2->vbitrate,
     "video bitrate"))
   return 0;
  if (!FUNC_3(VAR_0, VAR_1, &VAR_2->width, "video width"))
   return 0;
  if (!FUNC_3(VAR_0, VAR_1, &VAR_2->height, "video height"))
   return 0;
  if (!FUNC_3(VAR_0, VAR_1, &VAR_2->fps_num, "video fps num"))
   return 0;
  if (!FUNC_3(VAR_0, VAR_1, &VAR_2->fps_den, "video fps den"))
   return 0;
 }

 if (VAR_2->tracks) {
  if (!FUNC_4(VAR_0, VAR_1, &VAR_2->acodec, "audio codec"))
   return 0;

  VAR_4 = FUNC_0(1, sizeof(*VAR_4) * VAR_2->tracks);

  for (int VAR_5 = 0; VAR_5 < VAR_2->tracks; VAR_5++) {
   if (!FUNC_2(&VAR_4[VAR_5], VAR_0, VAR_1)) {
    FUNC_1(VAR_4);
    return 0;
   }
  }
 }

 *VAR_3 = VAR_4;

 FUNC_4(VAR_0, VAR_1, &VAR_2->muxer_settings, "muxer settings");

 return 1;
}
