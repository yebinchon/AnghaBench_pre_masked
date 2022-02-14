
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_codec_desc {int type; } ;
typedef enum ff_codec_type { ____Placeholder_ff_codec_type } ff_codec_type ;


 int VAR_0 ;

enum ff_codec_type FUNC_0(const struct ff_codec_desc *VAR_1)
{
 if (VAR_1 != ((void*)0))
  return VAR_1->type;
 else
  return VAR_0;
}
