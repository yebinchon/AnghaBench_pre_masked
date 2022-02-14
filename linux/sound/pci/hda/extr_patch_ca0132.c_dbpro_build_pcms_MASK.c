
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hda_pcm {TYPE_1__* stream; int pcm_type; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dig_in; scalar_t__ dig_out; scalar_t__* adcs; } ;
struct TYPE_4__ {int substreams; scalar_t__ nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 struct hda_pcm* FUNC_0 (struct hda_codec*,char*) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_7)
{
 struct ca0132_spec *VAR_8 = VAR_7->spec;
 struct hda_pcm *VAR_9;

 VAR_9 = FUNC_0(VAR_7, "CA0132 Alt Analog");
 if (!VAR_9)
  return -VAR_0;
 VAR_9->stream[VAR_2] = VAR_4;
 VAR_9->stream[VAR_2].substreams = 1;
 VAR_9->stream[VAR_2].nid = VAR_8->adcs[0];


 if (!VAR_8->dig_out && !VAR_8->dig_in)
  return 0;

 VAR_9 = FUNC_0(VAR_7, "CA0132 Digital");
 if (!VAR_9)
  return -VAR_0;
 VAR_9->pcm_type = VAR_1;
 if (VAR_8->dig_out) {
  VAR_9->stream[VAR_3] =
   VAR_6;
  VAR_9->stream[VAR_3].nid = VAR_8->dig_out;
 }
 if (VAR_8->dig_in) {
  VAR_9->stream[VAR_2] =
   VAR_5;
  VAR_9->stream[VAR_2].nid = VAR_8->dig_in;
 }

 return 0;
}
