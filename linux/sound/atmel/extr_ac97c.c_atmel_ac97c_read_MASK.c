
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int dummy; } ;
struct atmel_ac97c {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short FUNC_0 (struct atmel_ac97c*,int ) ;
 int FUNC_1 (struct atmel_ac97c*,int ,unsigned long) ;
 int FUNC_2 (int *,char*) ;
 struct atmel_ac97c* FUNC_3 (struct snd_ac97*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static unsigned short FUNC_5(struct snd_ac97 *VAR_5,
  unsigned short VAR_6)
{
 struct atmel_ac97c *VAR_7 = FUNC_3(VAR_5);
 unsigned long VAR_8;
 int VAR_9 = 40;
 int VAR_10 = 10;

 VAR_8 = (0x80 | (VAR_6 & 0x7f)) << 16;

 if ((FUNC_0(VAR_7, VAR_3) & VAR_0) != 0)
  FUNC_0(VAR_7, VAR_2);

retry_write:
 VAR_9 = 40;

 do {
  if ((FUNC_0(VAR_7, VAR_3) & VAR_1) != 0) {
   FUNC_1(VAR_7, VAR_4, VAR_8);
   goto read_reg;
  }
  FUNC_4(10);
 } while (--VAR_9);

 if (!--VAR_10)
  goto timed_out;
 goto retry_write;

read_reg:
 do {
  if ((FUNC_0(VAR_7, VAR_3) & VAR_0) != 0) {
   unsigned short VAR_11 = FUNC_0(VAR_7, VAR_2);
   return VAR_11;
  }
  FUNC_4(10);
 } while (--VAR_9);

 if (!--VAR_10)
  goto timed_out;
 goto retry_write;

timed_out:
 FUNC_2(&VAR_7->pdev->dev, "codec read timeout\n");
 return 0xffff;
}
