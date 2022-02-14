
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct nau8825_fll {unsigned int clk_ref_div; unsigned int ratio; unsigned int mclk_src; int fll_int; int fll_frac; } ;
struct TYPE_5__ {unsigned int param; unsigned int val; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,unsigned int) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_7, unsigned int VAR_8,
  struct nau8825_fll *VAR_9)
{
 u64 VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;





 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_4); VAR_13++) {
  VAR_12 = VAR_7 / VAR_4[VAR_13].param;
  if (VAR_12 <= VAR_1)
   break;
 }
 if (VAR_13 == FUNC_0(VAR_4))
  return -VAR_0;
 VAR_9->clk_ref_div = VAR_4[VAR_13].val;


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_5); VAR_13++) {
  if (VAR_12 >= VAR_5[VAR_13].param)
   break;
 }
 if (VAR_13 == FUNC_0(VAR_5))
  return -VAR_0;
 VAR_9->ratio = VAR_5[VAR_13].val;






 VAR_11 = 0;
 VAR_14 = FUNC_0(VAR_6);
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6); VAR_13++) {
  VAR_10 = 256ULL * VAR_8 * 2 * VAR_6[VAR_13].param;
  if (VAR_10 > VAR_3 && VAR_10 < VAR_2 &&
   VAR_11 < VAR_10) {
   VAR_11 = VAR_10;
   VAR_14 = VAR_13;
  }
 }
 if (FUNC_0(VAR_6) == VAR_14)
  return -VAR_0;
 VAR_9->mclk_src = VAR_6[VAR_14].val;




 VAR_10 = FUNC_1(VAR_11 << 16, VAR_12 * VAR_9->ratio);
 VAR_9->fll_int = (VAR_10 >> 16) & 0x3FF;
 VAR_9->fll_frac = VAR_10 & 0xFFFF;
 return 0;
}
