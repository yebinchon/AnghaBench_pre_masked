
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wm8978_pll_div {int div2; unsigned int n; unsigned int k; } ;
struct snd_soc_component {int dev; } ;


 long long VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_1,
  struct wm8978_pll_div *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 u64 VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;

 VAR_7 = VAR_3 / VAR_4;
 if (VAR_7 < 6) {
  VAR_4 >>= 1;
  VAR_2->div2 = 1;
  VAR_7 = VAR_3 / VAR_4;
 } else {
  VAR_2->div2 = 0;
 }

 if (VAR_7 < 6 || VAR_7 > 12)
  FUNC_0(VAR_1->dev,
    "WM8978 N value exceeds recommended range! N = %u\n",
    VAR_7);

 VAR_2->n = VAR_7;
 VAR_8 = VAR_3 - VAR_4 * VAR_7;
 VAR_5 = VAR_0 * (long long)VAR_8 + VAR_4 / 2;

 FUNC_1(VAR_5, VAR_4);

 VAR_6 = VAR_5 & 0xFFFFFFFF;

 VAR_2->k = VAR_6;
}
