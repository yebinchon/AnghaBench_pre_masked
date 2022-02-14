
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
struct cea_sad {int max_bitrate; int format; void* profile; scalar_t__ sample_bits; void* channels; int rates; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned char const*,int,int,int) ;
 scalar_t__* VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct hda_codec*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_6,
      struct cea_sad *VAR_7,
      const unsigned char *VAR_8)
{
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_8, 1, 0, 7);
 VAR_7->rates = 0;
 for (VAR_9 = 0; VAR_9 < 7; VAR_9++)
  if (VAR_10 & (1 << VAR_9))
   VAR_7->rates |= VAR_5[VAR_9 + 1];

 VAR_7->channels = FUNC_0(VAR_8, 0, 0, 3);
 VAR_7->channels++;

 VAR_7->sample_bits = 0;
 VAR_7->max_bitrate = 0;

 VAR_7->format = FUNC_0(VAR_8, 0, 3, 4);
 switch (VAR_7->format) {
 case 130:
  FUNC_1(VAR_6, "HDMI: audio coding type 0 not expected\n");
  break;

 case 136:
  VAR_10 = FUNC_0(VAR_8, 2, 0, 3);
  for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
   if (VAR_10 & (1 << VAR_9))
    VAR_7->sample_bits |= VAR_4[VAR_9 + 1];
  break;

 case 142:
 case 133:
 case 134:
 case 132:
 case 143:
 case 139:
 case 141:
  VAR_7->max_bitrate = FUNC_0(VAR_8, 2, 0, 8);
  VAR_7->max_bitrate *= 8000;
  break;

 case 129:
  break;

 case 137:
  break;

 case 138:
  break;

 case 135:
  break;

 case 140:
  break;

 case 128:
  VAR_7->profile = FUNC_0(VAR_8, 2, 0, 3);
  break;

 case 131:
  VAR_7->format = FUNC_0(VAR_8, 2, 3, 5);
  if (VAR_7->format == VAR_3 ||
      VAR_7->format >= VAR_1) {
   FUNC_1(VAR_6,
       "HDMI: audio coding xtype %d not expected\n",
       VAR_7->format);
   VAR_7->format = 0;
  } else
   VAR_7->format += VAR_0 -
         VAR_2;
  break;
 }
}
