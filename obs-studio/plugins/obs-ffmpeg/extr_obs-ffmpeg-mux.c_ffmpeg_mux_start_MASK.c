
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct win_version_info {int major; } ;
struct TYPE_2__ {int array; } ;
struct ffmpeg_muxer {TYPE_1__ path; int output; scalar_t__ total_bytes; int capturing; int active; int pipe; } ;
struct dstr {char* array; } ;
typedef int obs_data_t ;
typedef int FILE ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*,char*) ;
 int FUNC_3 (struct dstr*,char*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct win_version_info*) ;
 int FUNC_6 (char*,int ) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int *,int) ;
 int * FUNC_16 (char const*,char*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (struct ffmpeg_muxer*,char const*) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static bool FUNC_20(void *VAR_0)
{
 struct ffmpeg_muxer *VAR_1 = VAR_0;
 obs_data_t *VAR_2;
 const char *VAR_3;

 if (!FUNC_11(VAR_1->output, 0))
  return 0;
 if (!FUNC_13(VAR_1->output, 0))
  return 0;

 VAR_2 = FUNC_12(VAR_1->output);
 VAR_3 = FUNC_7(VAR_2, "path");



 FILE *VAR_4 = FUNC_16(VAR_3, "wb");
 if (!VAR_4) {
  struct dstr VAR_5;
  FUNC_2(&VAR_5,
          FUNC_9("UnableToWritePath"));
  FUNC_3(&VAR_5, "%1", VAR_3);
  FUNC_14(VAR_1->output, VAR_5.array);
  FUNC_1(&VAR_5);
  FUNC_8(VAR_2);
  return 0;
 }

 FUNC_4(VAR_4);
 FUNC_17(VAR_3);

 FUNC_18(VAR_1, VAR_3);
 FUNC_8(VAR_2);

 if (!VAR_1->pipe) {
  FUNC_14(
   VAR_1->output, FUNC_9("HelperProcessFailed"));
  FUNC_19("Failed to create process pipe");
  return 0;
 }


 FUNC_15(&VAR_1->active, 1);
 FUNC_15(&VAR_1->capturing, 1);
 VAR_1->total_bytes = 0;
 FUNC_10(VAR_1->output, 0);

 FUNC_6("Writing file '%s'...", VAR_1->path.array);
 return 1;
}
