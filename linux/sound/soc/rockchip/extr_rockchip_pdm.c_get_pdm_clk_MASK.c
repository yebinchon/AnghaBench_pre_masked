
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rk_pdm_dev {int clk; } ;
struct TYPE_3__ {unsigned int sr; unsigned int clk_out; unsigned int clk; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static unsigned int FUNC_2(struct rk_pdm_dev *VAR_2, unsigned int VAR_3,
    unsigned int *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_8 = 0;
 if (!VAR_3)
  return VAR_8;

 VAR_7 = FUNC_0(VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_3 % VAR_1[VAR_6].sr)
   continue;
  VAR_9 = VAR_3 / VAR_1[VAR_6].sr;
  if ((VAR_9 & (VAR_9 - 1)) == 0) {
   *VAR_5 = VAR_1[VAR_6].clk_out;
   VAR_10 = FUNC_1(VAR_2->clk, VAR_1[VAR_6].clk);
   if (VAR_10 != VAR_1[VAR_6].clk)
    continue;
   VAR_8 = VAR_1[VAR_6].clk;
   *VAR_4 = VAR_1[VAR_6].clk;
   break;
  }
 }

 if (!VAR_8) {
  VAR_8 = FUNC_1(VAR_2->clk, VAR_0);
  *VAR_4 = VAR_8;
 }
 return VAR_8;
}
