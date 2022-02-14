
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct _pll_div {int n; int k; scalar_t__ div2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct _pll_div*,unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_9,
         int VAR_10, int VAR_11, unsigned int VAR_12, unsigned int VAR_13)
{
 u16 VAR_14;
 struct snd_soc_component *VAR_15 = VAR_9->component;
 struct _pll_div VAR_16;

 if (VAR_12 && VAR_13) {
  FUNC_0(&VAR_16, VAR_13 * 4, VAR_12);


  VAR_14 = FUNC_1(VAR_15, VAR_5);
  VAR_14 |= VAR_4;
  FUNC_2(VAR_15, VAR_5, VAR_14);


  VAR_14 = FUNC_1(VAR_15, VAR_0);
  FUNC_2(VAR_15, VAR_0, VAR_14 | VAR_8);


  FUNC_2(VAR_15, VAR_1, VAR_16.n | VAR_7 |
         (VAR_16.div2 ? VAR_6 : 0));
  FUNC_2(VAR_15, VAR_2, (u8)(VAR_16.k>>8));
  FUNC_2(VAR_15, VAR_3, (u8)(VAR_16.k & 0xFF));
 } else {

  VAR_14 = FUNC_1(VAR_15, VAR_5);
  VAR_14 &= ~VAR_4;
  FUNC_2(VAR_15, VAR_5, VAR_14);
 }
 return 0;
}
