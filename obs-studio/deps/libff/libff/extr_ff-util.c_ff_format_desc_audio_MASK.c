
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_format_desc {int audio_codec; } ;



int FUNC_0(const struct ff_format_desc *VAR_0)
{
 if (VAR_0 != ((void*)0))
  return VAR_0->audio_codec;
 else
  return 0;
}
