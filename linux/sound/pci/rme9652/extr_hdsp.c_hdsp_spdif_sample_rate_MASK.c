
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdsp {scalar_t__ io_type; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct hdsp*,int ) ;

__attribute__((used)) static int FUNC_2(struct hdsp *VAR_5)
{
 unsigned int VAR_6 = FUNC_1(VAR_5, VAR_4);
 unsigned int VAR_7 = (VAR_6 & VAR_2);


 if (VAR_5->io_type == VAR_0)
   VAR_7 = (VAR_6 & VAR_3);

 if (VAR_6 & VAR_1)
  return 0;

 switch (VAR_7) {
 case 133: return 32000;
 case 132: return 44100;
 case 131: return 48000;
 case 130: return 64000;
 case 129: return 88200;
 case 128: return 96000;
 case 136:
  if (VAR_5->io_type == VAR_0) return 128000;
  break;
 case 135:
  if (VAR_5->io_type == VAR_0) return 176400;
  break;
 case 134:
  if (VAR_5->io_type == VAR_0) return 192000;
  break;
 default:
  break;
 }
 FUNC_0(VAR_5->card->dev,
   "unknown spdif frequency status; bits = 0x%x, status = 0x%x\n",
   VAR_7, VAR_6);
 return 0;
}
