
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enc_encoder {int audio_size; int audio_planes; TYPE_1__* context; } ;
struct audio_output_info {int speakers; } ;
typedef enum audio_format { ____Placeholder_audio_format } audio_format ;
typedef int audio_t ;
struct TYPE_2__ {int sample_fmt; } ;


 struct audio_output_info* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct enc_encoder *VAR_0, audio_t *VAR_1)
{
 const struct audio_output_info *VAR_2;
 enum audio_format VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_0->context->sample_fmt);

 VAR_0->audio_planes = FUNC_2(VAR_3, VAR_2->speakers);
 VAR_0->audio_size = FUNC_3(VAR_3, VAR_2->speakers, 1);
}
