
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_t ;
struct video_output_info {scalar_t__ fps_den; scalar_t__ fps_num; } ;
struct ffmpeg_muxer {int output; } ;
struct dstr {int dummy; } ;
typedef int obs_encoder_t ;
typedef int obs_data_t ;


 int FUNC_0 (struct dstr*,char*,int ,int,int ,int ,int,int) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct video_output_info* FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ffmpeg_muxer *VAR_0,
         struct dstr *VAR_1, obs_encoder_t *VAR_2)
{
 obs_data_t *VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = (int)FUNC_1(VAR_3, "bitrate");
 video_t *VAR_5 = FUNC_5();
 const struct video_output_info *VAR_6 = FUNC_8(VAR_5);

 FUNC_2(VAR_3);

 FUNC_0(VAR_1, "%s %d %d %d %d %d ", FUNC_3(VAR_2),
    VAR_4, FUNC_7(VAR_0->output),
    FUNC_6(VAR_0->output), (int)VAR_6->fps_num,
    (int)VAR_6->fps_den);
}
