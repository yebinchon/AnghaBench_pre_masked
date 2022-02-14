
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_codec_desc {struct ff_codec_desc const* next; } ;



const struct ff_codec_desc *
FUNC_0(const struct ff_codec_desc *VAR_0)
{
 if (VAR_0 != ((void*)0))
  return VAR_0->next;
 else
  return ((void*)0);
}
