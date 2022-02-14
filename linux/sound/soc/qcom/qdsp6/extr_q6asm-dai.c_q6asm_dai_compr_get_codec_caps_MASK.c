
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr_stream {int dummy; } ;
struct snd_compr_codec_caps {int codec; } ;



 struct snd_compr_codec_caps VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_compr_stream *VAR_1,
       struct snd_compr_codec_caps *VAR_2)
{
 switch (VAR_2->codec) {
 case 128:
  *VAR_2 = VAR_0;
  break;
 default:
  break;
 }

 return 0;
}
