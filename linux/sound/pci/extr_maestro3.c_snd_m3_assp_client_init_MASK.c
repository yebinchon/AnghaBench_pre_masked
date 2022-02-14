
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_m3 {TYPE_1__* card; } ;
struct TYPE_4__ {int code; int data; } ;
struct m3_dma {int number; TYPE_2__ inst; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (struct snd_m3*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_m3 *VAR_5, struct m3_dma *VAR_6, int VAR_7)
{
 int VAR_8 = 2 * ( VAR_4 / 2 +
          VAR_2 / 2 +
          1 + VAR_3 / 2 + 1 );
 int VAR_9, VAR_10;
 VAR_8 = FUNC_0(VAR_8, 256);
 VAR_9 = 0x1100 + ((VAR_8/2) * VAR_7);

 if ((VAR_9 + (VAR_8/2)) >= 0x1c00) {
  FUNC_1(VAR_5->card->dev,
   "no memory for %d bytes at ind %d (addr 0x%x)\n",
      VAR_8, VAR_7, VAR_9);
  return -VAR_0;
 }

 VAR_6->number = VAR_7;
 VAR_6->inst.code = 0x400;
 VAR_6->inst.data = VAR_9;

 for (VAR_10 = VAR_8 / 2; VAR_10 > 0; VAR_9++, VAR_10--) {
  FUNC_2(VAR_5, VAR_1,
      VAR_9, 0);
 }

 return 0;
}
