
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct enc_encoder {TYPE_1__* context; } ;
struct audio_convert_info {int speakers; scalar_t__ samples_per_sec; int format; } ;
struct TYPE_2__ {int channel_layout; scalar_t__ sample_rate; int sample_fmt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct audio_convert_info *VAR_1)
{
 struct enc_encoder *VAR_2 = VAR_0;
 VAR_1->format = FUNC_1(VAR_2->context->sample_fmt);
 VAR_1->samples_per_sec = (uint32_t)VAR_2->context->sample_rate;
 VAR_1->speakers =
  FUNC_0(VAR_2->context->channel_layout);
}
