
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int (* get_frame_size ) (int ) ;} ;
struct obs_encoder {int blocksize; int framesize; int framesize_bytes; TYPE_2__ context; TYPE_1__ info; int planes; int samplerate; } ;
struct audio_convert_info {int speakers; int format; int samples_per_sec; int member_0; } ;


 int FUNC_0 (struct obs_encoder*,struct audio_convert_info*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct obs_encoder*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct obs_encoder *VAR_0)
{
 struct audio_convert_info VAR_1 = {0};
 FUNC_0(VAR_0, &VAR_1);

 VAR_0->samplerate = VAR_1.samples_per_sec;
 VAR_0->planes = FUNC_1(VAR_1.format, VAR_1.speakers);
 VAR_0->blocksize = FUNC_2(VAR_1.format, VAR_1.speakers, 1);
 VAR_0->framesize =
  VAR_0->info.get_frame_size(VAR_0->context.data);

 VAR_0->framesize_bytes = VAR_0->blocksize * VAR_0->framesize;
 FUNC_3(VAR_0);
}
