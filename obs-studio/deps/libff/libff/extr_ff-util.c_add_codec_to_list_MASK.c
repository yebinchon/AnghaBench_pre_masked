
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ff_format_desc {int codec_tags; } ;
struct ff_codec_desc {int id; int alias; struct ff_codec_desc* next; int type; int base_name; int long_name; int name; } ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_4__ {int id; int type; int name; int long_name; } ;
typedef TYPE_1__ AVCodec ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 struct ff_codec_desc* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(const struct ff_format_desc *VAR_3,
                              struct ff_codec_desc **VAR_4,
                              struct ff_codec_desc **VAR_5, enum AVCodecID VAR_6,
                              const AVCodec *VAR_7, bool VAR_8)
{
 if (VAR_7 == ((void*)0))
  VAR_7 = FUNC_3(VAR_6);


 if (VAR_7 == ((void*)0))
  return;


 if (!FUNC_1(VAR_7))
  return;

 if (!VAR_8) {

  unsigned int VAR_9 =
          FUNC_0(VAR_3->codec_tags, VAR_7->id);
  if (VAR_9 == 0)
   return;
 }

 struct ff_codec_desc *VAR_10 = FUNC_2(sizeof(struct ff_codec_desc));

 VAR_10->name = VAR_7->name;
 VAR_10->long_name = VAR_7->long_name;
 VAR_10->id = VAR_7->id;
 AVCodec *VAR_11 = FUNC_3(VAR_7->id);
 if (FUNC_4(VAR_11->name, VAR_7->name) != 0) {
  VAR_10->alias = 1;
  VAR_10->base_name = VAR_11->name;
 }

 switch (VAR_7->type) {
 case 129:
  VAR_10->type = VAR_0;
  break;
 case 128:
  VAR_10->type = VAR_2;
  break;
 default:
  VAR_10->type = VAR_1;
 }

 if (*VAR_5 != ((void*)0))
  (*VAR_5)->next = VAR_10;
 else
  *VAR_4 = VAR_10;

 *VAR_5 = VAR_10;
}
