
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct minmax_sample {int t; int v; } ;
struct minmax {struct minmax_sample* s; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct minmax *VAR_0, u32 VAR_1,
    const struct minmax_sample *VAR_2)
{
 u32 VAR_3 = VAR_2->t - VAR_0->s[0].t;

 if (FUNC_0(VAR_3 > VAR_1)) {







  VAR_0->s[0] = VAR_0->s[1];
  VAR_0->s[1] = VAR_0->s[2];
  VAR_0->s[2] = *VAR_2;
  if (FUNC_0(VAR_2->t - VAR_0->s[0].t > VAR_1)) {
   VAR_0->s[0] = VAR_0->s[1];
   VAR_0->s[1] = VAR_0->s[2];
   VAR_0->s[2] = *VAR_2;
  }
 } else if (FUNC_0(VAR_0->s[1].t == VAR_0->s[0].t) && VAR_3 > VAR_1/4) {




  VAR_0->s[2] = VAR_0->s[1] = *VAR_2;
 } else if (FUNC_0(VAR_0->s[2].t == VAR_0->s[1].t) && VAR_3 > VAR_1/2) {




  VAR_0->s[2] = *VAR_2;
 }
 return VAR_0->s[0].v;
}
