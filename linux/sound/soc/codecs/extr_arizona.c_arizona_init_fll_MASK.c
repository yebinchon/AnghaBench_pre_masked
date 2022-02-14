
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_fll {int id; int base; unsigned int ref_src; int ref_freq; int clock_ok_name; int lock_name; void* sync_src; struct arizona* arizona; } ;
struct arizona {int regmap; } ;


 unsigned int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int ,int,char*,int) ;

int FUNC_3(struct arizona *VAR_4, int VAR_5, int VAR_6, int VAR_7,
       int VAR_8, struct arizona_fll *VAR_9)
{
 unsigned int VAR_10;

 VAR_9->id = VAR_5;
 VAR_9->base = VAR_6;
 VAR_9->arizona = VAR_4;
 VAR_9->sync_src = VAR_3;


 FUNC_0(VAR_4->regmap, VAR_1, &VAR_10);
 switch (VAR_10 & VAR_0) {
 case 129:
 case 128:
  VAR_9->ref_src = VAR_10 & VAR_0;
  break;
 default:
  VAR_9->ref_src = VAR_3;
 }
 VAR_9->ref_freq = 32768;

 FUNC_2(VAR_9->lock_name, sizeof(VAR_9->lock_name), "FLL%d lock", VAR_5);
 FUNC_2(VAR_9->clock_ok_name, sizeof(VAR_9->clock_ok_name),
   "FLL%d clock OK", VAR_5);

 FUNC_1(VAR_4->regmap, VAR_9->base + 1,
      VAR_2, 0);

 return 0;
}
