
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* card; } ;
typedef TYPE_2__ vortex_t ;
typedef int snd_pcm_format_t ;
struct TYPE_4__ {int dev; } ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(snd_pcm_format_t VAR_0, vortex_t *VAR_1)
{
 int VAR_2;

 switch (VAR_0) {
 case 128:
  VAR_2 = 0x1;
  break;
 case 132:
  VAR_2 = 0x2;
  break;
 case 134:
  VAR_2 = 0x3;
  break;
 case 129:
  VAR_2 = 0x4;
  break;
 case 133:
  VAR_2 = 0x5;
  break;
 case 130:
  VAR_2 = 0x8;
  break;
 case 131:
  VAR_2 = 0x9;
  break;
 default:
  VAR_2 = 0x8;
  FUNC_0(VAR_1->card->dev,
   "format unsupported %d\n", VAR_0);
  break;
 }
 return VAR_2;
}
