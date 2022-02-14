
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; void** map; } ;
typedef TYPE_1__ pa_channel_map ;
typedef enum speaker_layout { ____Placeholder_speaker_layout } speaker_layout ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
__attribute__((used)) static pa_channel_map FUNC_0(enum speaker_layout VAR_10)
{
 pa_channel_map VAR_11;

 VAR_11.map[0] = VAR_1;
 VAR_11.map[1] = VAR_2;
 VAR_11.map[2] = VAR_0;
 VAR_11.map[3] = VAR_3;
 VAR_11.map[4] = VAR_6;
 VAR_11.map[5] = VAR_7;
 VAR_11.map[6] = VAR_8;
 VAR_11.map[7] = VAR_9;

 switch (VAR_10) {
 case 130:
  VAR_11.channels = 1;
  VAR_11.map[0] = VAR_4;
  break;

 case 129:
  VAR_11.channels = 2;
  break;

 case 135:
  VAR_11.channels = 3;
  VAR_11.map[2] = VAR_3;
  break;

 case 134:
  VAR_11.channels = 4;
  VAR_11.map[3] = VAR_5;
  break;

 case 133:
  VAR_11.channels = 5;
  VAR_11.map[4] = VAR_5;
  break;

 case 132:
  VAR_11.channels = 6;
  break;

 case 131:
  VAR_11.channels = 8;
  break;

 case 128:
 default:
  VAR_11.channels = 0;
  break;
 }

 return VAR_11;
}
