
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct pll_div {int div2; int n; int k; } ;


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
 int FUNC_0 (struct pll_div*,unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_11, int VAR_12,
     int VAR_13, unsigned int VAR_14,
     unsigned int VAR_15)
{
 int VAR_16;
 struct snd_soc_component *VAR_17;
 struct pll_div VAR_18;

 VAR_17 = VAR_11->component;
 if (!VAR_14 || !VAR_15) {

  FUNC_1(VAR_17, VAR_10,
        VAR_4, 0);
 } else {
  VAR_16 = FUNC_0(&VAR_18, VAR_15 * 4 * 2, VAR_14);
  if (VAR_16)
   return VAR_16;


  FUNC_2(VAR_17, VAR_8,
         (VAR_18.div2 << VAR_9)
         | VAR_18.n);

  FUNC_2(VAR_17, VAR_7, VAR_18.k & 0x1ff);
  FUNC_2(VAR_17, VAR_6, (VAR_18.k >> 9) & 0x1ff);
  FUNC_2(VAR_17, VAR_5, (VAR_18.k >> 18));

  FUNC_1(VAR_17, VAR_2,
        VAR_1, VAR_0);

  FUNC_1(VAR_17, VAR_10,
        VAR_4, VAR_3);
 }
 return 0;
}
