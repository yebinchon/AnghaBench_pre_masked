
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_format_desc {int video_codec; int audio_codec; } ;
typedef enum ff_codec_type { ____Placeholder_ff_codec_type } ff_codec_type ;




 char const* FUNC_0 (struct ff_format_desc const*,int ) ;

const char *
FUNC_1(const struct ff_format_desc *VAR_0,
                                enum ff_codec_type VAR_1)
{
 switch (VAR_1) {
 case 129:
  return FUNC_0(VAR_0, VAR_0->audio_codec);
 case 128:
  return FUNC_0(VAR_0, VAR_0->video_codec);
 default:
  return ((void*)0);
 }
}
