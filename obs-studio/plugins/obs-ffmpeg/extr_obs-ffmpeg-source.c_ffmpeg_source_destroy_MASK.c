
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_source {struct ffmpeg_source* input_format; struct ffmpeg_source* input; struct ffmpeg_source* sws_data; int * sws_ctx; int media; scalar_t__ media_valid; scalar_t__ hotkey; } ;


 int FUNC_0 (struct ffmpeg_source*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct ffmpeg_source *VAR_1 = VAR_0;

 if (VAR_1->hotkey)
  FUNC_2(VAR_1->hotkey);
 if (VAR_1->media_valid)
  FUNC_1(&VAR_1->media);

 if (VAR_1->sws_ctx != ((void*)0))
  FUNC_3(VAR_1->sws_ctx);
 FUNC_0(VAR_1->sws_data);
 FUNC_0(VAR_1->input);
 FUNC_0(VAR_1->input_format);
 FUNC_0(VAR_1);
}
