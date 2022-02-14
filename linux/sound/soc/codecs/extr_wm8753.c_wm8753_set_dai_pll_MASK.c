
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct _pll_div {int n; int k; int div2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct _pll_div*,unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_2 (struct snd_soc_component*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_8, int VAR_9,
  int VAR_10, unsigned int VAR_11, unsigned int VAR_12)
{
 u16 VAR_13, VAR_14;
 int VAR_15;
 struct snd_soc_component *VAR_16 = VAR_8->component;

 if (VAR_9 < VAR_2 || VAR_9 > VAR_7)
  return -VAR_0;

 if (VAR_9 == VAR_2) {
  VAR_15 = 0;
  VAR_14 = 0x10;
  VAR_13 = FUNC_1(VAR_16, VAR_1) & 0xffef;
 } else {
  VAR_15 = 4;
  VAR_14 = 0x8;
  VAR_13 = FUNC_1(VAR_16, VAR_1) & 0xfff7;
 }

 if (!VAR_11 || !VAR_12) {

  FUNC_2(VAR_16, VAR_3 + VAR_15, 0x0026);
  FUNC_2(VAR_16, VAR_1, VAR_13);
  return 0;
 } else {
  u16 VAR_17 = 0;
  struct _pll_div VAR_18;

  FUNC_0(&VAR_18, VAR_12 * 8, VAR_11);



  VAR_17 = (VAR_18.n << 5) + ((VAR_18.k & 0x3c0000) >> 18);
  FUNC_2(VAR_16, VAR_4 + VAR_15, VAR_17);


  VAR_17 = (VAR_18.k & 0x03fe00) >> 9;
  FUNC_2(VAR_16, VAR_5 + VAR_15, VAR_17);


  VAR_17 = VAR_18.k & 0x0001ff;
  FUNC_2(VAR_16, VAR_6 + VAR_15, VAR_17);


  FUNC_2(VAR_16, VAR_3 + VAR_15, 0x0027 |
   (VAR_18.div2 << 3));
  FUNC_2(VAR_16, VAR_1, VAR_13 | VAR_14);
 }
 return 0;
}
