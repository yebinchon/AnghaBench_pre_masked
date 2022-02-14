
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_compr_stream {int dummy; } ;
struct snd_compr_codec_caps {int codec; int num_descriptors; TYPE_1__* descriptor; } ;
struct TYPE_2__ {int max_ch; int* bit_rate; int num_bitrates; int formats; int modes; int profiles; } ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int
FUNC_0(struct snd_compr_stream *VAR_2,
       struct snd_compr_codec_caps *VAR_3)
{
 switch (VAR_3->codec) {
 case 128:
  VAR_3->num_descriptors = 2;
  VAR_3->descriptor[0].max_ch = 2;
  VAR_3->descriptor[0].bit_rate[0] = 320;
  VAR_3->descriptor[0].bit_rate[1] = 128;
  VAR_3->descriptor[0].num_bitrates = 2;
  VAR_3->descriptor[0].profiles = 0;
  VAR_3->descriptor[0].modes = VAR_1;
  VAR_3->descriptor[0].formats = 0;
  break;

 case 129:
  VAR_3->num_descriptors = 2;
  VAR_3->descriptor[1].max_ch = 2;
  VAR_3->descriptor[1].bit_rate[0] = 320;
  VAR_3->descriptor[1].bit_rate[1] = 128;
  VAR_3->descriptor[1].num_bitrates = 2;
  VAR_3->descriptor[1].profiles = 0;
  VAR_3->descriptor[1].modes = 0;
  VAR_3->descriptor[1].formats = 0;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
