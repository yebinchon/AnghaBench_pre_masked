
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr_codec_caps {scalar_t__ codec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct snd_compr_codec_caps VAR_3 ;
 struct snd_compr_codec_caps VAR_4 ;

__attribute__((used)) static int FUNC_0(struct snd_compr_codec_caps *VAR_5)
{
 if (VAR_5->codec == VAR_2)
  *VAR_5 = VAR_4;
 else if (VAR_5->codec == VAR_1)
  *VAR_5 = VAR_3;
 else
  return -VAR_0;

 return 0;
}
