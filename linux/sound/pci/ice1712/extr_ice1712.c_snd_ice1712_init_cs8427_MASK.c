
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int setup_rate; int close; int open; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct snd_ice1712 {int cs8427_timeout; TYPE_3__ spdif; TYPE_1__* card; int cs8427; int i2c; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int,int *) ;

int FUNC_2(struct snd_ice1712 *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->i2c, VAR_5,
  (VAR_4->cs8427_timeout * VAR_0) / 1000, &VAR_4->cs8427);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->card->dev, "CS8427 initialization failed\n");
  return VAR_6;
 }
 VAR_4->spdif.ops.open = VAR_2;
 VAR_4->spdif.ops.close = VAR_1;
 VAR_4->spdif.ops.setup_rate = VAR_3;
 return 0;
}
