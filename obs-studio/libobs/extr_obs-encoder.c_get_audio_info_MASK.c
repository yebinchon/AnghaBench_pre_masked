
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int (* get_audio_info ) (int ,struct audio_convert_info*) ;} ;
struct obs_encoder {TYPE_2__ context; TYPE_1__ info; int media; } ;
struct audio_output_info {int speakers; int samples_per_sec; int format; } ;
struct audio_convert_info {int speakers; int samples_per_sec; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct audio_output_info* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct audio_convert_info*) ;

__attribute__((used)) static inline void FUNC_2(const struct obs_encoder *VAR_2,
      struct audio_convert_info *VAR_3)
{
 const struct audio_output_info *VAR_4;
 VAR_4 = FUNC_0(VAR_2->media);

 if (VAR_3->format == VAR_0)
  VAR_3->format = VAR_4->format;
 if (!VAR_3->samples_per_sec)
  VAR_3->samples_per_sec = VAR_4->samples_per_sec;
 if (VAR_3->speakers == VAR_1)
  VAR_3->speakers = VAR_4->speakers;

 if (VAR_2->info.get_audio_info)
  VAR_2->info.get_audio_info(VAR_2->context.data, VAR_3);
}
