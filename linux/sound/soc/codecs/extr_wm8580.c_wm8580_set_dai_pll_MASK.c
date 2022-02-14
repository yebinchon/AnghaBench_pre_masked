
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_state {unsigned int in; unsigned int out; } ;
struct wm8580_priv {struct pll_state b; struct pll_state a; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct _pll_div {int k; int n; int prescale; int postscale; int freqmode; } ;
typedef int pll_div ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct _pll_div*,int ,int) ;
 int FUNC_1 (struct _pll_div*,unsigned int,unsigned int) ;
 struct wm8580_priv* FUNC_2 (struct snd_soc_component*) ;
 unsigned int FUNC_3 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_5 (struct snd_soc_component*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_8, int VAR_9,
  int VAR_10, unsigned int VAR_11, unsigned int VAR_12)
{
 int VAR_13;
 struct snd_soc_component *VAR_14 = VAR_8->component;
 struct wm8580_priv *VAR_15 = FUNC_2(VAR_14);
 struct pll_state *VAR_16;
 struct _pll_div VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 int VAR_20;




 FUNC_0(&VAR_17, 0, sizeof(VAR_17));

 switch (VAR_9) {
 case 129:
  VAR_16 = &VAR_15->a;
  VAR_13 = 0;
  VAR_19 = VAR_6;
  break;
 case 128:
  VAR_16 = &VAR_15->b;
  VAR_13 = 4;
  VAR_19 = VAR_7;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_11 && VAR_12) {
  VAR_20 = FUNC_1(&VAR_17, VAR_12, VAR_11);
  if (VAR_20 != 0)
   return VAR_20;
 }

 VAR_16->in = VAR_11;
 VAR_16->out = VAR_12;




 FUNC_4(VAR_14, VAR_5, VAR_19, VAR_19);

 if (!VAR_11 || !VAR_12)
  return 0;

 FUNC_5(VAR_14, VAR_1 + VAR_13, VAR_17.k & 0x1ff);
 FUNC_5(VAR_14, VAR_2 + VAR_13, (VAR_17.k >> 9) & 0x1ff);
 FUNC_5(VAR_14, VAR_3 + VAR_13,
       (VAR_17.k >> 18 & 0xf) | (VAR_17.n << 4));

 VAR_18 = FUNC_3(VAR_14, VAR_4 + VAR_13);
 VAR_18 &= ~0x1b;
 VAR_18 |= VAR_17.prescale | VAR_17.postscale << 1 |
  VAR_17.freqmode << 3;

 FUNC_5(VAR_14, VAR_4 + VAR_13, VAR_18);


 FUNC_4(VAR_14, VAR_5, VAR_19, 0);

 return 0;
}
