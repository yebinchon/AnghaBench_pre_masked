
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct uniperif {int clk_adj; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct uniperif *VAR_1, unsigned long VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7 = VAR_1->clk_adj;
 if (VAR_7 < 0) {

  VAR_5 = -1;
  VAR_7 = -VAR_7;
 } else {
  VAR_5 = 1;
 }

 VAR_5 *= (int)FUNC_2((uint64_t)VAR_2 *
    (uint64_t)VAR_7 + 500000, 1000000);
 VAR_3 = VAR_2 + VAR_5;


 if (!VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_1->clk, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4 = FUNC_0(VAR_1->clk);
 if (!VAR_4)

  return -VAR_0;





 VAR_5 = VAR_4 - VAR_2;
 if (VAR_5 < 0) {

  VAR_5 = -VAR_5;
  VAR_7 = -1;
 } else {
  VAR_7 = 1;
 }

 VAR_7 *= (int)FUNC_2((uint64_t)VAR_5 * 1000000 + VAR_2 / 2,
         VAR_2);
 VAR_1->clk_adj = VAR_7;
 return 0;
}
