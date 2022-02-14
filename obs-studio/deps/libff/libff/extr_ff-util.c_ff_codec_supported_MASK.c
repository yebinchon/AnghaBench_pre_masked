
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ff_format_desc {int dummy; } ;
typedef struct ff_codec_desc const ff_codec_desc ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ AVCodecDescriptor ;


 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__ const***,unsigned int*) ;
 int FUNC_2 (struct ff_format_desc const*,struct ff_codec_desc const**,struct ff_codec_desc const**,int ,int) ;

const struct ff_codec_desc *
FUNC_3(const struct ff_format_desc *VAR_0,
                   bool VAR_1)
{
 const AVCodecDescriptor **VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 struct ff_codec_desc *VAR_5 = ((void*)0);
 struct ff_codec_desc *VAR_6 = ((void*)0);

 if (!FUNC_1(&VAR_2, &VAR_3))
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  const AVCodecDescriptor *VAR_7 = VAR_2[VAR_4];
  FUNC_2(VAR_0, &VAR_6, &VAR_5, VAR_7->id,
                    VAR_1);
 }

 FUNC_0((void *)VAR_2);

 return VAR_6;
}
