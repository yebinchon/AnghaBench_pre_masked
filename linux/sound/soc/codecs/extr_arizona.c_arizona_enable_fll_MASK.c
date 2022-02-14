
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_fll_cfg {int lambda; int theta; } ;
struct arizona_fll {int ref_freq; int sync_freq; int id; scalar_t__ base; int sync_src; int ref_src; struct arizona* arizona; } ;
struct arizona {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct arizona*,scalar_t__,struct arizona_fll_cfg*,int ,int) ;
 int FUNC_1 (struct arizona_fll*,struct arizona_fll_cfg*,int,int) ;
 int FUNC_2 (struct arizona_fll*,char*,...) ;
 int FUNC_3 (struct arizona_fll*,char*) ;
 int FUNC_4 (struct arizona_fll*,char*) ;
 int FUNC_5 (struct arizona_fll*,scalar_t__) ;
 int FUNC_6 (struct arizona_fll*,scalar_t__,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,unsigned int*) ;
 int FUNC_10 (int ,scalar_t__,int ,int ) ;
 int FUNC_11 (int ,scalar_t__,int ,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct arizona_fll *VAR_8)
{
 struct arizona *VAR_9 = VAR_8->arizona;
 bool VAR_10 = 0;
 int VAR_11 = FUNC_5(VAR_8, VAR_8->base);
 int VAR_12 = FUNC_5(VAR_8, VAR_8->base + 0x10);
 struct arizona_fll_cfg VAR_13;
 int VAR_14;
 unsigned int VAR_15;

 if (VAR_11 < 0)
  return VAR_11;
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_11) {

  FUNC_10(VAR_8->arizona->regmap, VAR_8->base + 1,
       VAR_2, VAR_2);
  FUNC_12(32);
  FUNC_11(VAR_8->arizona->regmap, VAR_8->base + 0x9,
      VAR_3, 0);

  if (FUNC_5(VAR_8, VAR_8->base + 0x10) > 0)
   FUNC_6(VAR_8, VAR_8->base + 0x10, 0);
  FUNC_6(VAR_8, VAR_8->base, 0);
 }





 if (VAR_8->ref_src >= 0 && VAR_8->ref_freq &&
     VAR_8->ref_src != VAR_8->sync_src) {
  FUNC_1(VAR_8, &VAR_13, VAR_8->ref_freq, 0);


  if (VAR_8->sync_src >= 0 && VAR_13.lambda)
   VAR_13.theta = (VAR_13.theta * (1 << 16)) / VAR_13.lambda;

  FUNC_0(VAR_9, VAR_8->base, &VAR_13, VAR_8->ref_src,
      0);
  if (VAR_8->sync_src >= 0) {
   FUNC_1(VAR_8, &VAR_13, VAR_8->sync_freq, 1);

   FUNC_0(VAR_9, VAR_8->base + 0x10, &VAR_13,
       VAR_8->sync_src, 1);
   VAR_10 = 1;
  }
 } else if (VAR_8->sync_src >= 0) {
  FUNC_1(VAR_8, &VAR_13, VAR_8->sync_freq, 0);

  FUNC_0(VAR_9, VAR_8->base, &VAR_13,
      VAR_8->sync_src, 0);

  FUNC_11(VAR_9->regmap, VAR_8->base + 0x11,
      VAR_5, 0);
 } else {
  FUNC_3(VAR_8, "No clocks provided\n");
  return -VAR_7;
 }

 if (VAR_11 && !!VAR_12 != VAR_10)
  FUNC_4(VAR_8, "Synchroniser changed on active FLL\n");





 if (VAR_10 && VAR_8->sync_freq > 100000)
  FUNC_11(VAR_9->regmap, VAR_8->base + 0x17,
      VAR_4, 0);
 else
  FUNC_11(VAR_9->regmap, VAR_8->base + 0x17,
      VAR_4,
      VAR_4);

 if (!VAR_11)
  FUNC_8(VAR_9->dev);

 if (VAR_10) {
  FUNC_6(VAR_8, VAR_8->base + 0x10, 1);
  FUNC_11(VAR_9->regmap, VAR_8->base + 0x11,
      VAR_5,
      VAR_5);
 }
 FUNC_6(VAR_8, VAR_8->base, 1);
 FUNC_11(VAR_9->regmap, VAR_8->base + 1,
     VAR_1, VAR_1);

 if (VAR_11)
  FUNC_11(VAR_9->regmap, VAR_8->base + 1,
      VAR_2, 0);

 FUNC_2(VAR_8, "Waiting for FLL lock...\n");
 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < 15; VAR_14++) {
  if (VAR_14 < 5)
   FUNC_13(200, 400);
  else
   FUNC_7(20);

  FUNC_9(VAR_9->regmap,
       VAR_6,
       &VAR_15);
  if (VAR_15 & (VAR_0 << (VAR_8->id - 1)))
   break;
 }
 if (VAR_14 == 15)
  FUNC_4(VAR_8, "Timed out waiting for lock\n");
 else
  FUNC_2(VAR_8, "FLL locked (%d polls)\n", VAR_14);

 return 0;
}
