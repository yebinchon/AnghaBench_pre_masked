
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct snd_card {struct snd_at73c213* private_data; } ;
struct snd_at73c213 {int* reg_image; TYPE_2__* ssc; TYPE_1__* board; } ;
struct TYPE_4__ {int clk; int regs; } ;
struct TYPE_3__ {int dac_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct snd_card* FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct snd_at73c213*,size_t,int) ;
 int FUNC_6 (struct snd_card*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_13)
{
 struct snd_card *VAR_14 = FUNC_3(&VAR_13->dev);
 struct snd_at73c213 *VAR_15 = VAR_14->private_data;
 int VAR_16;


 FUNC_2(VAR_15->ssc->clk);
 FUNC_8(VAR_15->ssc->regs, VAR_0, FUNC_0(VAR_1));
 FUNC_1(VAR_15->ssc->clk);


 VAR_16 = FUNC_5(VAR_15, VAR_6, 0x3f);
 if (VAR_16)
  goto out;
 VAR_16 = FUNC_5(VAR_15, VAR_10, 0x3f);
 if (VAR_16)
  goto out;
 VAR_16 = FUNC_5(VAR_15, VAR_5, 0x3f);
 if (VAR_16)
  goto out;
 VAR_16 = FUNC_5(VAR_15, VAR_9, 0x3f);
 if (VAR_16)
  goto out;
 VAR_16 = FUNC_5(VAR_15, VAR_4, 0x11);
 if (VAR_16)
  goto out;
 VAR_16 = FUNC_5(VAR_15, VAR_8, 0x11);
 if (VAR_16)
  goto out;
 VAR_16 = FUNC_5(VAR_15, VAR_2, 0x11);
 if (VAR_16)
  goto out;


 VAR_16 = FUNC_5(VAR_15, VAR_11,
     VAR_15->reg_image[VAR_11] | 0x0f);
 if (VAR_16)
  goto out;
 FUNC_4(10);
 VAR_16 = FUNC_5(VAR_15, VAR_11,
     (1 << VAR_12) | 0x0f);
 if (VAR_16)
  goto out;


 VAR_16 = FUNC_5(VAR_15, VAR_3, 0x0c);
 if (VAR_16)
  goto out;
 FUNC_4(2);
 VAR_16 = FUNC_5(VAR_15, VAR_3, 0x00);
 if (VAR_16)
  goto out;


 VAR_16 = FUNC_5(VAR_15, VAR_7, 0x00);
 if (VAR_16)
  goto out;

out:

 FUNC_1(VAR_15->board->dac_clk);

 FUNC_7(VAR_15->ssc);
 FUNC_6(VAR_14);

 return 0;
}
