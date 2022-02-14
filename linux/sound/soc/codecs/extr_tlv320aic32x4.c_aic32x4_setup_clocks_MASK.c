
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct snd_soc_component {int dev; } ;
struct clk_bulk_data {char* id; int clk; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct clk_bulk_data*) ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (struct snd_soc_component*,int) ;
 int FUNC_3 (struct snd_soc_component*,int) ;
 int FUNC_4 (struct snd_soc_component*,int,int) ;
 scalar_t__ FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,struct clk_bulk_data*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_4,
    unsigned int VAR_5)
{
 u8 VAR_6;
 u16 VAR_7;
 u8 VAR_8, VAR_9;
 u8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u8 VAR_17;
 u16 VAR_18, VAR_19;
 unsigned long VAR_20, VAR_21;
 int VAR_22;

 struct clk_bulk_data VAR_23[] = {
  { .id = "pll" },
  { .id = "nadc" },
  { .id = "madc" },
  { .id = "ndac" },
  { .id = "mdac" },
  { .id = "bdiv" },
 };
 VAR_22 = FUNC_8(VAR_4->dev, FUNC_0(VAR_23), VAR_23);
 if (VAR_22)
  return VAR_22;

 if (VAR_5 <= 48000) {
  VAR_6 = 128;
  VAR_8 = 6;
  VAR_9 = 8;
  VAR_17 = 8;
  FUNC_4(VAR_4, 1, 1);
 } else if (VAR_5 <= 96000) {
  VAR_6 = 64;
  VAR_8 = 6;
  VAR_9 = 8;
  VAR_17 = 4;
  FUNC_4(VAR_4, 1, 9);
 } else if (VAR_5 == 192000) {
  VAR_6 = 32;
  VAR_8 = 3;
  VAR_9 = 4;
  VAR_17 = 2;
  FUNC_4(VAR_4, 13, 19);
 } else {
  FUNC_7(VAR_4->dev, "Sampling rate not supported\n");
  return -VAR_3;
 }

 VAR_10 = FUNC_1((32 * VAR_8), VAR_6);
 VAR_18 = (VAR_1 / VAR_5 / VAR_17) *
   VAR_17;
 VAR_19 = (VAR_2 / VAR_5 / VAR_17) *
   VAR_17;
 VAR_14 = VAR_0 / (VAR_10 * VAR_6 * VAR_5);

 for (VAR_11 = VAR_14; VAR_11 > 0; --VAR_11) {
  VAR_20 = VAR_11 * VAR_10 * VAR_6 * VAR_5;
  for (VAR_7 = VAR_18; VAR_7 >= VAR_19;
    VAR_7 -= VAR_17) {
   VAR_15 = FUNC_1((32 * VAR_9), VAR_7);
   VAR_16 = VAR_0 /
     (VAR_15 * VAR_7 * VAR_5);
   for (VAR_12 = VAR_15; VAR_12 <= 128; ++VAR_12) {
    for (VAR_13 = VAR_16; VAR_13 > 0; --VAR_13) {
     VAR_21 = VAR_13 * VAR_12 * VAR_7 *
       VAR_5;
     if (VAR_21 == VAR_20) {
      if (FUNC_5(VAR_23[0].clk, VAR_21) == 0)
       continue;

      FUNC_6(VAR_23[0].clk,
       VAR_21);

      FUNC_6(VAR_23[1].clk,
       VAR_5 * VAR_6 *
       VAR_10);
      FUNC_6(VAR_23[2].clk,
       VAR_5 * VAR_6);
      FUNC_2(VAR_4,
       VAR_6);

      FUNC_6(VAR_23[3].clk,
       VAR_5 * VAR_7 *
       VAR_12);
      FUNC_6(VAR_23[4].clk,
       VAR_5 * VAR_7);
      FUNC_3(VAR_4,
       VAR_7);

      FUNC_6(VAR_23[5].clk,
       VAR_5 * 32);
      return 0;
     }
    }
   }
  }
 }

 FUNC_7(VAR_4->dev,
  "Could not set clocks to support sample rate.\n");
 return -VAR_3;
}
