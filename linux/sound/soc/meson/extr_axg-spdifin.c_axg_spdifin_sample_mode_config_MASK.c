
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct axg_spdifin {int map; int refclk; TYPE_1__* conf; } ;
struct TYPE_2__ {int ref_rate; } ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (struct axg_spdifin*,int,unsigned int) ;
 int FUNC_2 (int ,int,unsigned int) ;
 int FUNC_3 (int ,int,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_5,
       struct axg_spdifin *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 int VAR_9, VAR_10 = VAR_4 - 1;


 VAR_9 = FUNC_5(VAR_6->refclk, VAR_6->conf->ref_rate);
 if (VAR_9) {
  FUNC_6(VAR_5->dev, "reference clock rate set failed\n");
  return VAR_9;
 }





 VAR_7 = FUNC_4(VAR_6->refclk);


 FUNC_7(VAR_6->map, VAR_2,
      VAR_3,
      FUNC_0(VAR_3, VAR_7 / 1000));


 FUNC_7(VAR_6->map, VAR_0,
      VAR_1, VAR_1);


 VAR_8 = FUNC_1(VAR_6, VAR_10, VAR_7);
 FUNC_3(VAR_6->map, VAR_10, VAR_8);

 do {
  unsigned int VAR_11;

  VAR_10 -= 1;


  VAR_11 = FUNC_1(VAR_6, VAR_10, VAR_7);


  FUNC_3(VAR_6->map, VAR_10, VAR_11);


  FUNC_2(VAR_6->map, VAR_10, VAR_11 + VAR_8);


  VAR_8 = VAR_11;

 } while (VAR_10 > 0);

 return 0;
}
