
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_output_info {int format; int input_param; int input_callback; int speakers; } ;
struct audio_output {int channels; int planes; int block_size; int initialized; int thread; int stop_event; int input_mutex; int input_param; int input_cb; int info; } ;
typedef int pthread_mutexattr_t ;
typedef struct audio_output audio_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct audio_output*) ;
 int VAR_5 ;
 struct audio_output* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct audio_output_info*,int) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int ,struct audio_output*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (struct audio_output_info*) ;

int FUNC_12(audio_t **VAR_6, struct audio_output_info *VAR_7)
{
 struct audio_output *VAR_8;
 pthread_mutexattr_t VAR_9;
 bool VAR_10 = FUNC_4(VAR_7->format);

 if (!FUNC_11(VAR_7))
  return VAR_1;

 VAR_8 = FUNC_1(sizeof(struct audio_output));
 if (!VAR_8)
  goto fail;

 FUNC_5(&VAR_8->info, VAR_7, sizeof(struct audio_output_info));
 VAR_8->channels = FUNC_3(VAR_7->speakers);
 VAR_8->planes = VAR_10 ? VAR_8->channels : 1;
 VAR_8->input_cb = VAR_7->input_callback;
 VAR_8->input_param = VAR_7->input_param;
 VAR_8->block_size = (VAR_10 ? 1 : VAR_8->channels) *
     FUNC_2(VAR_7->format);

 if (FUNC_9(&VAR_9) != 0)
  goto fail;
 if (FUNC_10(&VAR_9, VAR_4) != 0)
  goto fail;
 if (FUNC_8(&VAR_8->input_mutex, &VAR_9) != 0)
  goto fail;
 if (FUNC_6(&VAR_8->stop_event, VAR_3) != 0)
  goto fail;
 if (FUNC_7(&VAR_8->thread, ((void*)0), VAR_5, VAR_8) != 0)
  goto fail;

 VAR_8->initialized = 1;
 *VAR_6 = VAR_8;
 return VAR_2;

fail:
 FUNC_0(VAR_8);
 return VAR_0;
}
