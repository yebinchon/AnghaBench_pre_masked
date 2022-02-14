
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {unsigned int base; struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct regmap*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct wm_adsp *VAR_5, unsigned int VAR_6)
{
 struct regmap *VAR_7 = VAR_5->regmap;
 unsigned int VAR_8, VAR_9, VAR_10;

 if (!(VAR_6 & VAR_4))
  return 0;

 VAR_6 &= VAR_4;
 VAR_10 = VAR_5->base + VAR_2;

 while (VAR_6) {
  VAR_8 = VAR_9 = 0;
  if (VAR_6 & FUNC_0(0)) {
   VAR_8 = VAR_0;
   VAR_9 = VAR_1;
  }
  if (VAR_6 & FUNC_0(1)) {
   VAR_8 |= VAR_0 << VAR_3;
   VAR_9 |= VAR_1 << VAR_3;
  }
  FUNC_1(VAR_7, VAR_10, VAR_8);
  FUNC_1(VAR_7, VAR_10, VAR_9);
  VAR_6 >>= 2;
  VAR_10 += 2;
 }

 return 0;
}
