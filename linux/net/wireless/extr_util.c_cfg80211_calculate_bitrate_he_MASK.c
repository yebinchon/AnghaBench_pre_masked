
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct rate_info {int mcs; size_t he_gi; scalar_t__ he_ru_alloc; int nss; scalar_t__ bw; scalar_t__ he_dcm; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static u32 FUNC_3(struct rate_info *VAR_14)
{

 u16 VAR_15[12] = {
  34133,
  17067,
  11378,
   8533,
   5689,
   4267,
   3923,
   3413,
   2844,
   2560,
   2276,
   2048,
 };
 u32 VAR_16[3] = { 960777777, 907400000, 816666666 };
 u32 VAR_17[3] = { 480388888, 453700000, 408333333 };
 u32 VAR_18[3] = { 229411111, 216666666, 195000000 };
 u32 VAR_19[3] = { 114711111, 108333333, 97500000 };
 u32 VAR_20[3] = { 40000000, 37777777, 34000000 };
 u32 VAR_21[3] = { 18820000, 17777777, 16000000 };
 u32 VAR_22[3] = { 9411111, 8888888, 8000000 };
 u64 VAR_23;
 u32 VAR_24;

 if (FUNC_1(VAR_14->mcs > 11))
  return 0;

 if (FUNC_1(VAR_14->he_gi > VAR_0))
  return 0;
 if (FUNC_1(VAR_14->he_ru_alloc >
    VAR_4))
  return 0;
 if (FUNC_1(VAR_14->nss < 1 || VAR_14->nss > 8))
  return 0;

 if (VAR_14->bw == VAR_8)
  VAR_24 = VAR_16[VAR_14->he_gi];
 else if (VAR_14->bw == VAR_11 ||
   (VAR_14->bw == VAR_12 &&
    VAR_14->he_ru_alloc == VAR_7))
  VAR_24 = VAR_17[VAR_14->he_gi];
 else if (VAR_14->bw == VAR_10 ||
   (VAR_14->bw == VAR_12 &&
    VAR_14->he_ru_alloc == VAR_5))
  VAR_24 = VAR_18[VAR_14->he_gi];
 else if (VAR_14->bw == VAR_9 ||
   (VAR_14->bw == VAR_12 &&
    VAR_14->he_ru_alloc == VAR_2))
  VAR_24 = VAR_19[VAR_14->he_gi];
 else if (VAR_14->bw == VAR_12 &&
   VAR_14->he_ru_alloc == VAR_1)
  VAR_24 = VAR_20[VAR_14->he_gi];
 else if (VAR_14->bw == VAR_12 &&
   VAR_14->he_ru_alloc == VAR_6)
  VAR_24 = VAR_21[VAR_14->he_gi];
 else if (VAR_14->bw == VAR_12 &&
   VAR_14->he_ru_alloc == VAR_3)
  VAR_24 = VAR_22[VAR_14->he_gi];
 else {
  FUNC_0(1, "invalid HE MCS: bw:%d, ru:%d\n",
       VAR_14->bw, VAR_14->he_ru_alloc);
  return 0;
 }


 VAR_23 = VAR_24;
 VAR_23 *= 2048;
 FUNC_2(VAR_23, VAR_15[VAR_14->mcs]);
 VAR_24 = VAR_23;


 VAR_24 = (VAR_24 * VAR_14->nss) / 8;
 if (VAR_14->he_dcm)
  VAR_24 /= 2;

 return VAR_24 / 10000;
}
