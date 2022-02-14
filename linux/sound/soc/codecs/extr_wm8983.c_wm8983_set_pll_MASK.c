
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
 int FUNC_0 (struct pll_div*,unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_8, int VAR_9,
     int VAR_10, unsigned int VAR_11,
     unsigned int VAR_12)
{
 int VAR_13;
 struct snd_soc_component *VAR_14;
 struct pll_div VAR_15;

 VAR_14 = VAR_8->component;
 if (!VAR_11 || !VAR_12) {

  FUNC_1(VAR_14, VAR_7,
        VAR_1, 0);
  return 0;
 } else {
  VAR_13 = FUNC_0(&VAR_15, VAR_12 * 4 * 2, VAR_11);
  if (VAR_13)
   return VAR_13;


  FUNC_1(VAR_14, VAR_7,
        VAR_1, 0);


  FUNC_2(VAR_14, VAR_5,
   (VAR_15.div2 << VAR_6)
   | VAR_15.n);

  FUNC_2(VAR_14, VAR_4, VAR_15.k & 0x1ff);
  FUNC_2(VAR_14, VAR_3, (VAR_15.k >> 9) & 0x1ff);
  FUNC_2(VAR_14, VAR_2, (VAR_15.k >> 18));

  FUNC_1(VAR_14, VAR_7,
     VAR_1, VAR_0);
 }

 return 0;
}
