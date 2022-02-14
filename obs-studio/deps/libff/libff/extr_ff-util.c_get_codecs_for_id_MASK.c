
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ff_format_desc {int dummy; } ;
struct ff_codec_desc {int dummy; } ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ AVCodec ;


 int FUNC_0 (struct ff_format_desc const*,struct ff_codec_desc**,struct ff_codec_desc**,int ,TYPE_1__ const*,int) ;
 TYPE_1__* FUNC_1 (int,TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_2(const struct ff_format_desc *VAR_0,
                              struct ff_codec_desc **VAR_1,
                              struct ff_codec_desc **VAR_2, enum AVCodecID VAR_3,
                              bool VAR_4)
{
 const AVCodec *VAR_5 = ((void*)0);
 while ((VAR_5 = FUNC_1(VAR_3, VAR_5)) != ((void*)0))
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5->id, VAR_5,
                    VAR_4);
}
