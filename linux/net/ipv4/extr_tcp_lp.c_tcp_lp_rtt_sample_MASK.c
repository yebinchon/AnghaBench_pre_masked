
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct lp {int flag; int owd_min; int owd_max; int owd_max_rsv; int sowd; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2, u32 VAR_3)
{
 struct lp *VAR_4 = FUNC_0(VAR_2);
 s64 VAR_5 = FUNC_1(VAR_2);


 if (!(VAR_4->flag & VAR_1) || !(VAR_4->flag & VAR_0))
  return;


 if (VAR_5 < VAR_4->owd_min)
  VAR_4->owd_min = VAR_5;



 if (VAR_5 > VAR_4->owd_max) {
  if (VAR_5 > VAR_4->owd_max_rsv) {
   if (VAR_4->owd_max_rsv == 0)
    VAR_4->owd_max = VAR_5;
   else
    VAR_4->owd_max = VAR_4->owd_max_rsv;
   VAR_4->owd_max_rsv = VAR_5;
  } else
   VAR_4->owd_max = VAR_5;
 }


 if (VAR_4->sowd != 0) {
  VAR_5 -= VAR_4->sowd >> 3;
  VAR_4->sowd += VAR_5;
 } else
  VAR_4->sowd = VAR_5 << 3;
}
