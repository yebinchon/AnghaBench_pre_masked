
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* card; int mmio; } ;
typedef TYPE_2__ vortex_t ;
typedef unsigned short u32 ;
typedef unsigned short u16 ;
struct snd_ac97 {unsigned short num; scalar_t__ private_data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned short) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned short FUNC_4(struct snd_ac97 * VAR_7, unsigned short VAR_8)
{

 vortex_t *VAR_9 = (vortex_t *) VAR_7->private_data;
 u32 VAR_10, VAR_11;
 unsigned VAR_12 = 0;


 while (!(FUNC_1(VAR_9->mmio, VAR_3) & 0x100)) {
  FUNC_3(100);
  if (VAR_12++ > VAR_0) {
   FUNC_0(VAR_9->card->dev, "ac97 codec stuck busy\n");
   return 0xffff;
  }
 }

 VAR_10 = ((VAR_8 << VAR_2) & VAR_1) |
  (VAR_7->num << VAR_5) ;
 FUNC_2(VAR_9->mmio, VAR_6, VAR_10);


 do {
  FUNC_3(100);
  VAR_11 = FUNC_1(VAR_9->mmio, VAR_6);
  if (VAR_12++ > VAR_0) {
   FUNC_0(VAR_9->card->dev,
    "ac97 address never arrived\n");
   return 0xffff;
  }
 } while ((VAR_11 & VAR_1) !=
   (VAR_8 << VAR_2));


 return (u16) (VAR_11 & VAR_4);
}
