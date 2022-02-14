
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_spdif_priv {int* txclk_df; int* sysclk_df; int* txrate; int sysclk; } ;
struct clk {int dummy; } ;
typedef enum spdif_txrate { ____Placeholder_spdif_txrate } spdif_txrate ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*,int ) ;
 int FUNC_2 (struct clk*,int) ;
 int FUNC_3 (int,int const) ;

__attribute__((used)) static u32 FUNC_4(struct fsl_spdif_priv *VAR_0,
    struct clk *VAR_1, u64 VAR_2,
    enum spdif_txrate VAR_3, bool VAR_4)
{
 static const u32 VAR_5[] = { 32000, 44100, 48000, 96000, 192000 };
 bool VAR_6 = FUNC_1(VAR_1, VAR_0->sysclk);
 u64 VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 u16 VAR_11, VAR_12, VAR_13;
 u8 VAR_14;


 VAR_11 = VAR_6 ? 2 : 1;
 VAR_12 = VAR_6 ? 512 : 1;

 for (VAR_13 = VAR_11; VAR_13 <= VAR_12; VAR_13++) {
  for (VAR_14 = 1; VAR_14 <= 128; VAR_14++) {
   VAR_7 = VAR_5[VAR_3] * VAR_14 * 64ULL;
   if (VAR_4)
    VAR_8 = FUNC_2(VAR_1, VAR_7);
   else
    VAR_8 = FUNC_0(VAR_1);

   VAR_10 = VAR_8 / 64;
   VAR_10 /= VAR_14 * VAR_13;

   if (VAR_10 == VAR_5[VAR_3]) {

    VAR_2 = 0;
    VAR_0->txclk_df[VAR_3] = VAR_14;
    VAR_0->sysclk_df[VAR_3] = VAR_13;
    VAR_0->txrate[VAR_3] = VAR_10;
    goto out;
   } else if (VAR_10 / VAR_5[VAR_3] == 1) {

    VAR_9 = (u64)(VAR_10 - VAR_5[VAR_3]) * 100000;
    FUNC_3(VAR_9, VAR_5[VAR_3]);
    if (VAR_9 >= VAR_2)
     continue;
    VAR_2 = VAR_9;
    VAR_0->txclk_df[VAR_3] = VAR_14;
    VAR_0->sysclk_df[VAR_3] = VAR_13;
    VAR_0->txrate[VAR_3] = VAR_10;
   } else if (VAR_5[VAR_3] / VAR_10 == 1) {

    VAR_9 = (u64)(VAR_5[VAR_3] - VAR_10) * 100000;
    FUNC_3(VAR_9, VAR_5[VAR_3]);
    if (VAR_9 >= VAR_2)
     continue;
    VAR_2 = VAR_9;
    VAR_0->txclk_df[VAR_3] = VAR_14;
    VAR_0->sysclk_df[VAR_3] = VAR_13;
    VAR_0->txrate[VAR_3] = VAR_10;
   }
  }
 }

out:
 return VAR_2;
}
