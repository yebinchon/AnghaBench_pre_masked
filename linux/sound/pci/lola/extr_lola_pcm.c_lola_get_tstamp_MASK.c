
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lola {int granularity; } ;


 int FUNC_0 (struct lola*) ;

__attribute__((used)) static unsigned int FUNC_1(struct lola *VAR_0, bool VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0) >> 8;
 if (VAR_0->granularity) {
  unsigned int VAR_3 = VAR_1 ? 0 : 8;
  VAR_2 += (VAR_3 + 1) * VAR_0->granularity - 1;
  VAR_2 -= VAR_2 % VAR_0->granularity;
 }
 return VAR_2 << 8;
}
