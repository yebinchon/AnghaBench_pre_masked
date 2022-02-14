
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_adg {unsigned int* clk_rate; unsigned int rbga_rate_for_441khz; unsigned int rbgb_rate_for_48khz; } ;
struct device {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct device*,char*) ;
 struct rsnd_adg* FUNC_3 (struct rsnd_priv*) ;
 struct device* FUNC_4 (struct rsnd_priv*) ;

__attribute__((used)) static void FUNC_5(struct rsnd_priv *VAR_3,
           struct rsnd_dai_stream *VAR_4,
           unsigned int VAR_5,
           unsigned int *VAR_6,
           unsigned int *VAR_7)
{
 struct rsnd_adg *VAR_8 = FUNC_3(VAR_3);
 struct device *VAR_9 = FUNC_4(VAR_3);
 int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17;
 unsigned int VAR_18[] = {
  VAR_8->clk_rate[VAR_0],
  VAR_8->clk_rate[VAR_1],
  VAR_8->clk_rate[VAR_2],
  VAR_8->rbga_rate_for_441khz,
  VAR_8->rbgb_rate_for_48khz,
 };

 VAR_16 = ~0;
 VAR_14 = 0;
 VAR_15 = 0;
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_18); VAR_11++) {
  VAR_10 = 0;
  VAR_13 = 2;

  if (!VAR_18[VAR_11])
   continue;

  for (VAR_12 = 2; VAR_12 <= 98304; VAR_12 += VAR_13) {
   VAR_17 = FUNC_1(VAR_5 - VAR_18[VAR_11] / VAR_12);
   if (VAR_16 > VAR_17) {
    VAR_14 = (VAR_11 << 8) | VAR_10;
    VAR_16 = VAR_17;
    VAR_15 = 1 << (VAR_11 + 1);
   }





   if ((VAR_10 > 2) && (VAR_10 % 2))
    VAR_13 *= 2;
   if (VAR_10 == 0x1c) {
    VAR_12 += VAR_13;
    VAR_13 *= 2;
   }
   VAR_10++;
  }
 }

 if (VAR_16 == ~0) {
  FUNC_2(VAR_9, "no Input clock\n");
  return;
 }

 *VAR_6 = VAR_14;
 if (VAR_7)
  *VAR_7 = VAR_15;
}
