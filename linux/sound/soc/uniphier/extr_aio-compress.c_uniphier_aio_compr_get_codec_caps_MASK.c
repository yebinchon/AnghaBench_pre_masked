
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr_stream {int dummy; } ;
struct snd_compr_codec_caps {scalar_t__ codec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct snd_compr_codec_caps VAR_2 ;

__attribute__((used)) static int FUNC_0(struct snd_compr_stream *VAR_3,
          struct snd_compr_codec_caps *VAR_4)
{
 if (VAR_4->codec == VAR_1)
  *VAR_4 = VAR_2;
 else
  return -VAR_0;

 return 0;
}
