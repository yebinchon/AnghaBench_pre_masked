
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hardware {int info; int periods_min; int period_bytes_min; int channels_max; int period_bytes_max; int buffer_bytes_max; int periods_max; } ;
struct snd_pcm_runtime {struct snd_pcm_hardware hw; } ;
struct amdtp_stream {int flags; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int ,int *,int ,int ,int) ;

int FUNC_2(struct amdtp_stream *VAR_13,
     struct snd_pcm_runtime *VAR_14)
{
 struct snd_pcm_hardware *VAR_15 = &VAR_14->hw;
 int VAR_16;

 VAR_15->info = VAR_5 |
     VAR_6 |
     VAR_7 |
     VAR_8 |
     VAR_9 |
     VAR_10;


 VAR_15->periods_min = 2;
 VAR_15->periods_max = VAR_11;


 VAR_15->period_bytes_min = 4 * VAR_15->channels_max;


 VAR_15->period_bytes_max = VAR_15->period_bytes_min * 2048;
 VAR_15->buffer_bytes_max = VAR_15->period_bytes_max * VAR_15->periods_min;
 VAR_16 = FUNC_0(VAR_14,
        VAR_3,
        5000, VAR_11);
 if (VAR_16 < 0)
  goto end;


 if (!(VAR_13->flags & VAR_0))
  goto end;







 VAR_16 = FUNC_1(VAR_14, 0, VAR_2,
      VAR_12, ((void*)0),
      VAR_2,
      VAR_4, -1);
 if (VAR_16 < 0)
  goto end;
 VAR_16 = FUNC_1(VAR_14, 0, VAR_1,
      VAR_12, ((void*)0),
      VAR_1,
      VAR_4, -1);
 if (VAR_16 < 0)
  goto end;
end:
 return VAR_16;
}
