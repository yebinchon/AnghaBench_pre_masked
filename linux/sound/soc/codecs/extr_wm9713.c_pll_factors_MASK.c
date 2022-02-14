
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct snd_soc_component {int dev; } ;
struct _pll_div {int divsel; int divctl; int lf; unsigned int n; unsigned int k; } ;


 long long VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_1,
 struct _pll_div *VAR_2, unsigned int VAR_3)
{
 u64 VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;


 VAR_8 = 98304000;


 if (VAR_3 > 14400000) {
  VAR_3 >>= 1;
  VAR_2->divsel = 1;

  if (VAR_3 > 14400000) {
   VAR_3 >>= 1;
   VAR_2->divctl = 1;
  } else
   VAR_2->divctl = 0;

 } else {
  VAR_2->divsel = 0;
  VAR_2->divctl = 0;
 }




 if (VAR_3 < 8192000) {
  VAR_2->lf = 1;
  VAR_8 >>= 2;
 } else
  VAR_2->lf = 0;

 VAR_6 = VAR_8 / VAR_3;
 if ((VAR_6 < 5) || (VAR_6 > 12))
  FUNC_0(VAR_1->dev,
   "WM9713 PLL N value %u out of recommended range!\n",
   VAR_6);

 VAR_2->n = VAR_6;
 VAR_7 = VAR_8 % VAR_3;
 VAR_4 = VAR_0 * (long long)VAR_7;

 FUNC_1(VAR_4, VAR_3);

 VAR_5 = VAR_4 & 0xFFFFFFFF;


 if ((VAR_5 % 10) >= 5)
  VAR_5 += 5;


 VAR_5 /= 10;

 VAR_2->k = VAR_5;
}
