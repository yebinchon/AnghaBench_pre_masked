
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct snd_soc_dai {struct snd_soc_component* component; struct device* dev; } ;
struct snd_soc_component {int dummy; } ;
struct pcm512x_priv {unsigned long real_pll; int pll_r; int pll_j; int pll_d; int pll_p; } ;
struct device {int dummy; } ;


 unsigned long FUNC_0 (unsigned long long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 int VAR_0 ;
 int FUNC_3 (struct device*,char*,int,int,...) ;
 int FUNC_4 (struct device*,char*) ;
 unsigned long FUNC_5 (int,unsigned long) ;
 struct pcm512x_priv* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_1,
      unsigned long VAR_2,
      unsigned long VAR_3)
{
 struct device *VAR_4 = VAR_1->dev;
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct pcm512x_priv *VAR_6 = FUNC_6(VAR_5);
 unsigned long VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;

 VAR_7 = FUNC_5(VAR_3, VAR_2);
 FUNC_3(VAR_4, "pll %lu pllin %lu common %lu\n",
  VAR_3, VAR_2, VAR_7);
 VAR_13 = VAR_3 / VAR_7;
 VAR_14 = VAR_2 / VAR_7;


 if (VAR_2 / VAR_14 > 20000000 && VAR_13 < 8) {
  VAR_13 *= FUNC_2(VAR_2 / VAR_14, 20000000);
  VAR_14 *= FUNC_2(VAR_2 / VAR_14, 20000000);
 }
 FUNC_3(VAR_4, "num / den = %lu / %lu\n", VAR_13, VAR_14);

 VAR_11 = VAR_14;
 if (VAR_14 <= 15 && VAR_13 <= 16 * 63
     && 1000000 <= VAR_2 / VAR_11 && VAR_2 / VAR_11 <= 20000000) {

  VAR_10 = 0;

  for (VAR_8 = 16; VAR_8; VAR_8--) {
   if (VAR_13 % VAR_8)
    continue;
   VAR_9 = VAR_13 / VAR_8;
   if (VAR_9 == 0 || VAR_9 > 63)
    continue;

   FUNC_3(VAR_4, "R * J / P = %d * %d / %d\n", VAR_8, VAR_9, VAR_11);
   VAR_6->real_pll = VAR_3;
   goto done;
  }

 }

 VAR_8 = 1;

 if (VAR_13 > 0xffffffffUL / 10000)
  goto fallback;


 VAR_7 = FUNC_5(10000 * VAR_13, VAR_14);
 VAR_13 = 10000 * VAR_13 / VAR_7;
 VAR_14 /= VAR_7;
 FUNC_3(VAR_4, "num %lu den %lu common %lu\n", VAR_13, VAR_14, VAR_7);

 for (VAR_11 = VAR_14; VAR_11 <= 15; VAR_11++) {
  if (VAR_2 / VAR_11 < 6667000 || 200000000 < VAR_2 / VAR_11)
   continue;
  if (VAR_13 * VAR_11 % VAR_14)
   continue;
  VAR_12 = VAR_13 * VAR_11 / VAR_14;

  if (VAR_12 < 40000 || VAR_12 > 120000)
   continue;

  VAR_9 = VAR_12 / 10000;
  VAR_10 = VAR_12 % 10000;
  FUNC_3(VAR_4, "J.D / P = %d.%04d / %d\n", VAR_9, VAR_10, VAR_11);
  VAR_6->real_pll = VAR_3;
  goto done;
 }



fallback:

 VAR_11 = FUNC_2(VAR_2, 20000000);
 if (!VAR_11)
  VAR_11 = 1;
 else if (VAR_11 > 15) {
  FUNC_4(VAR_4, "Need a slower clock as pll-input\n");
  return -VAR_0;
 }
 if (VAR_2 / VAR_11 < 6667000) {
  FUNC_4(VAR_4, "Need a faster clock as pll-input\n");
  return -VAR_0;
 }
 VAR_12 = FUNC_0(10000ULL * VAR_3 * VAR_11, VAR_2);
 if (VAR_12 < 40000)
  VAR_12 = 40000;

 if (VAR_12 > 120000)
  VAR_12 = 120000;
 VAR_9 = VAR_12 / 10000;
 VAR_10 = VAR_12 % 10000;
 FUNC_3(VAR_4, "J.D / P ~ %d.%04d / %d\n", VAR_9, VAR_10, VAR_11);
 VAR_6->real_pll = FUNC_1((u64)VAR_12 * VAR_2, 10000 * VAR_11);

done:
 VAR_6->pll_r = VAR_8;
 VAR_6->pll_j = VAR_9;
 VAR_6->pll_d = VAR_10;
 VAR_6->pll_p = VAR_11;
 return 0;
}
