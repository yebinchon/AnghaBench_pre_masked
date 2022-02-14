
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switch_dev {int dummy; } ;
struct rtl_reg {int bits; int shift; scalar_t__ inverted; int reg; int phy; int page; } ;
typedef enum rtl_regidx { ____Placeholder_rtl_regidx } rtl_regidx ;


 int FUNC_0 (struct rtl_reg*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct switch_dev*,int ,int ,int ) ;
 struct rtl_reg* VAR_0 ;

__attribute__((used)) static inline int
FUNC_3(struct switch_dev *VAR_1, enum rtl_regidx VAR_2)
{
 const struct rtl_reg *VAR_3 = &VAR_0[VAR_2];
 u16 VAR_4;

 FUNC_1(VAR_2 >= FUNC_0(VAR_0));
 if (VAR_3->bits == 0)
  return 0;

 VAR_4 = FUNC_2(VAR_1, VAR_3->page, VAR_3->phy, VAR_3->reg);

 if (VAR_3->shift > 0)
  VAR_4 >>= VAR_3->shift;

 if (VAR_3->inverted)
  VAR_4 = ~VAR_4;

 VAR_4 &= (1 << VAR_3->bits) - 1;

 return VAR_4;
}
