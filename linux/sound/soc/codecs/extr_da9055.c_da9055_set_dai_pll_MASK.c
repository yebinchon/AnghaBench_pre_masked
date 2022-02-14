
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct da9055_priv {scalar_t__ master; } ;
struct TYPE_3__ {unsigned int fref; scalar_t__ mode; unsigned int fout; size_t frac_top; size_t frac_bot; size_t integer; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,char*) ;
 struct da9055_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,size_t) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_7, int VAR_8,
         int VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_7->component;
 struct da9055_priv *VAR_13 = FUNC_2(VAR_12);

 u8 VAR_14, VAR_15, VAR_16, VAR_17;


 FUNC_3(VAR_12, VAR_0, VAR_1, 0);


 if (!VAR_13->master && (VAR_11 != 2822400))
  goto pll_err;


 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_6); VAR_17++) {

  if ((VAR_10 == VAR_6[VAR_17].fref) &&
      (VAR_13->master == VAR_6[VAR_17].mode) &&
      (VAR_11 == VAR_6[VAR_17].fout)) {

   VAR_14 = VAR_6[VAR_17].frac_top;
   VAR_15 = VAR_6[VAR_17].frac_bot;
   VAR_16 = VAR_6[VAR_17].integer;
   break;
  }
 }
 if (VAR_17 >= FUNC_0(VAR_6))
  goto pll_err;


 FUNC_4(VAR_12, VAR_3, VAR_14);
 FUNC_4(VAR_12, VAR_2, VAR_15);
 FUNC_4(VAR_12, VAR_4, VAR_16);

 return 0;
pll_err:
 FUNC_1(VAR_7->dev, "Error in setting up PLL\n");
 return -VAR_5;
}
