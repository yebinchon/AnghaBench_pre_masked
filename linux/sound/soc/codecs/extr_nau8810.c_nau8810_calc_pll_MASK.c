
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nau8810_pll {int mclk_scaler; int pre_factor; int pll_int; int pll_frac; } ;


 int FUNC_0 (unsigned long long*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int,unsigned int) ;
 unsigned long long* VAR_6 ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_7,
 unsigned int VAR_8, struct nau8810_pll *VAR_9)
{
 u64 VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 if (VAR_7 > VAR_4 || VAR_7 < VAR_5)
  return -VAR_0;

 VAR_11 = 0;
 VAR_14 = FUNC_0(VAR_6);
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6); VAR_13++) {
  VAR_10 = 256ULL * VAR_8 * 4 * VAR_6[VAR_13];
  VAR_10 = FUNC_1(VAR_10, 10);
  if (VAR_10 > VAR_2 && VAR_10 < VAR_1 &&
   VAR_11 < VAR_10) {
   VAR_11 = VAR_10;
   VAR_14 = VAR_13;
  }
 }
 if (FUNC_0(VAR_6) == VAR_14)
  return -VAR_0;
 VAR_9->mclk_scaler = VAR_14;
 VAR_10 = VAR_11;




 VAR_12 = FUNC_1(VAR_10 << 28, VAR_7);
 VAR_9->pre_factor = 0;
 if (((VAR_12 >> 28) & 0xF) < VAR_3) {
  VAR_12 <<= 1;
  VAR_9->pre_factor = 1;
 }
 VAR_9->pll_int = (VAR_12 >> 28) & 0xF;
 VAR_9->pll_frac = ((VAR_12 & 0xFFFFFFF) >> 4);

 return 0;
}
