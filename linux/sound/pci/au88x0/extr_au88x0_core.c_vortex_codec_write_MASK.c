
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mmio; TYPE_1__* card; } ;
typedef TYPE_2__ vortex_t ;
struct snd_ac97 {unsigned short num; scalar_t__ private_data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned short) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct snd_ac97 * VAR_9, unsigned short VAR_10, unsigned short VAR_11)
{

 vortex_t *VAR_12 = (vortex_t *) VAR_9->private_data;
 unsigned int VAR_13 = 0;


 while (!(FUNC_1(VAR_12->mmio, VAR_3) & 0x100)) {
  FUNC_3(100);
  if (VAR_13++ > VAR_0) {
   FUNC_0(VAR_12->card->dev, "ac97 codec stuck busy\n");
   return;
  }
 }

 FUNC_2(VAR_12->mmio, VAR_7,
  ((VAR_10 << VAR_2) & VAR_1) |
  ((VAR_11 << VAR_5) & VAR_4) |
  VAR_8 |
  (VAR_9->num << VAR_6) );


 FUNC_1(VAR_12->mmio, VAR_7);
}
