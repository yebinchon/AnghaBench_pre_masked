
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_at73c213 {TYPE_2__* board; TYPE_1__* ssc; } ;
struct TYPE_4__ {int dac_clk; } ;
struct TYPE_3__ {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_at73c213*) ;
 int FUNC_5 (struct snd_at73c213*,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_at73c213 *VAR_20)
{
 int VAR_21;
 unsigned char VAR_22 = 0;

 VAR_21 = FUNC_4(VAR_20);
 if (VAR_21)
  goto out;


 FUNC_2(VAR_20->board->dac_clk);


 VAR_21 = FUNC_5(VAR_20, VAR_16, 0x04);
 if (VAR_21)
  goto out_clk;
 FUNC_3(1);
 VAR_21 = FUNC_5(VAR_20, VAR_16, 0x03);
 if (VAR_21)
  goto out_clk;


 VAR_21 = FUNC_5(VAR_20, VAR_11, 0xff);
 if (VAR_21)
  goto out_clk;
 VAR_21 = FUNC_5(VAR_20, VAR_17, (1<<VAR_19));
 if (VAR_21)
  goto out_clk;
 VAR_21 = FUNC_5(VAR_20, VAR_3,
   (1<<VAR_6) | (1<<VAR_7));
 if (VAR_21)
  goto out_clk;

 FUNC_3(50);


 VAR_21 = FUNC_5(VAR_20, VAR_17,
   (1<<VAR_18) | 0x0f);
 if (VAR_21)
  goto out_clk;

 FUNC_3(450);


 VAR_21 = FUNC_5(VAR_20, VAR_11, (1<<VAR_12));
 if (VAR_21)
  goto out_clk;

 FUNC_3(1);


 VAR_22 = (1<<VAR_4) | (1<<VAR_5)
  | (1<<VAR_6) | (1<<VAR_7);

 VAR_21 = FUNC_5(VAR_20, VAR_3, VAR_22);
 if (VAR_21)
  goto out_clk;


 VAR_21 = FUNC_5(VAR_20, VAR_10, 0x3f);
 if (VAR_21)
  goto out_clk;
 VAR_21 = FUNC_5(VAR_20, VAR_15, 0x3f);
 if (VAR_21)
  goto out_clk;
 VAR_21 = FUNC_5(VAR_20, VAR_9, 0x3f);
 if (VAR_21)
  goto out_clk;
 VAR_21 = FUNC_5(VAR_20, VAR_14, 0x3f);
 if (VAR_21)
  goto out_clk;
 VAR_21 = FUNC_5(VAR_20, VAR_8, 0x11);
 if (VAR_21)
  goto out_clk;
 VAR_21 = FUNC_5(VAR_20, VAR_13, 0x11);
 if (VAR_21)
  goto out_clk;
 VAR_21 = FUNC_5(VAR_20, VAR_2, 0x11);
 if (VAR_21)
  goto out_clk;


 FUNC_6(VAR_20->ssc->regs, VAR_0, FUNC_0(VAR_1));

 goto out;

out_clk:
 FUNC_1(VAR_20->board->dac_clk);
out:
 return VAR_21;
}
