
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rate_info {size_t mcs; int const n_bonded_ch; } ;


 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct rate_info *VAR_0)
{
 static const u32 VAR_1[] = {

  [0] = 275,

  [1] = 3850,
  [2] = 7700,
  [3] = 9625,
  [4] = 11550,
  [5] = 12512,
  [6] = 13475,
  [7] = 15400,
  [8] = 19250,
  [9] = 23100,
  [10] = 25025,
  [11] = 26950,
  [12] = 30800,
  [13] = 38500,
  [14] = 46200,
  [15] = 50050,
  [16] = 53900,
  [17] = 57750,
  [18] = 69300,
  [19] = 75075,
  [20] = 80850,
 };

 if (FUNC_1(VAR_0->mcs >= FUNC_0(VAR_1)))
  return 0;

 return VAR_1[VAR_0->mcs] * VAR_0->n_bonded_ch;
}
