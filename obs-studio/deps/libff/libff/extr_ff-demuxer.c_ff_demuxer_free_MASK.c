
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_demuxer {int abort; scalar_t__ format_context; int * video_decoder; int * audio_decoder; struct ff_demuxer* input_format; struct ff_demuxer* input; int demuxer_thread; } ;


 int FUNC_0 (struct ff_demuxer*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,void**) ;

void FUNC_4(struct ff_demuxer *VAR_0)
{
 void *VAR_1;

 VAR_0->abort = 1;

 FUNC_3(VAR_0->demuxer_thread, &VAR_1);

 if (VAR_0->input != ((void*)0))
  FUNC_0(VAR_0->input);

 if (VAR_0->input_format != ((void*)0))
  FUNC_0(VAR_0->input_format);

 if (VAR_0->audio_decoder != ((void*)0))
  FUNC_2(VAR_0->audio_decoder);

 if (VAR_0->video_decoder != ((void*)0))
  FUNC_2(VAR_0->video_decoder);

 if (VAR_0->format_context)
  FUNC_1(&VAR_0->format_context);

 FUNC_0(VAR_0);
}
