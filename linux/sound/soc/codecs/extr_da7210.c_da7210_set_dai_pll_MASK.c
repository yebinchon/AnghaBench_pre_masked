
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct da7210_priv {scalar_t__ master; } ;
struct TYPE_3__ {unsigned int fref; scalar_t__ mode; unsigned int fout; size_t div1; size_t div2; size_t div3; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct da7210_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,size_t,size_t) ;
 int FUNC_4 (struct snd_soc_component*,int ,size_t) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_10, int VAR_11,
         int VAR_12, unsigned int VAR_13, unsigned int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_10->component;
 struct da7210_priv *VAR_16 = FUNC_2(VAR_15);

 u8 VAR_17, VAR_18, VAR_19, VAR_20;


 if (!VAR_16->master)
  VAR_14 = 2822400;


 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_9); VAR_20++) {

  if ((VAR_13 == VAR_9[VAR_20].fref) &&
      (VAR_16->master == VAR_9[VAR_20].mode) &&
      (VAR_14 == VAR_9[VAR_20].fout)) {

   VAR_17 = VAR_9[VAR_20].div1;
   VAR_18 = VAR_9[VAR_20].div2;
   VAR_19 = VAR_9[VAR_20].div3;
   break;
  }
 }
 if (VAR_20 >= FUNC_0(VAR_9))
  goto err;


 FUNC_3(VAR_15, VAR_7, VAR_6, 0);

 FUNC_4(VAR_15, VAR_1, VAR_17);
 FUNC_4(VAR_15, VAR_2, VAR_18);
 FUNC_3(VAR_15, VAR_3,
       VAR_4, VAR_19);


 FUNC_3(VAR_15, VAR_0, VAR_5, VAR_5);


 FUNC_3(VAR_15, VAR_7, VAR_6,
          VAR_6);
 return 0;
err:
 FUNC_1(VAR_10->dev, "Unsupported PLL input frequency %d\n", VAR_13);
 return -VAR_8;
}
