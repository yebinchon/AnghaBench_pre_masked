
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encoder_packet {int dummy; } ;
struct encoder_frame {int * data; } ;
struct enc_encoder {size_t audio_planes; int frame_size_bytes; int * samples; } ;


 int FUNC_0 (struct enc_encoder*,struct encoder_packet*,int*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, struct encoder_frame *VAR_1,
         struct encoder_packet *VAR_2, bool *VAR_3)
{
 struct enc_encoder *VAR_4 = VAR_0;

 for (size_t VAR_5 = 0; VAR_5 < VAR_4->audio_planes; VAR_5++)
  FUNC_1(VAR_4->samples[VAR_5], VAR_1->data[VAR_5], VAR_4->frame_size_bytes);

 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
