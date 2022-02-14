
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cleanup; int prepare; } ;
struct hda_pcm_stream {TYPE_1__ ops; } ;
struct hda_pcm {struct hda_pcm_stream* stream; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct hda_codec*) ;
 struct hda_pcm* FUNC_1 (struct hda_codec*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_5)
{
 struct hda_pcm_stream *VAR_6;
 struct hda_pcm *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 if (!VAR_7)
  return -VAR_0;





 VAR_6 = &VAR_7->stream[VAR_2];
 VAR_6->ops.prepare = VAR_4;
 VAR_6->ops.cleanup = VAR_3;

 return 0;
}
