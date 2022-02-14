
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u32 ;
struct batadv_tp_vars {int srtt; int rttvar; int rto; } ;



__attribute__((used)) static void FUNC_0(struct batadv_tp_vars *VAR_0,
     u32 VAR_1)
{
 long VAR_2 = VAR_1;







 if (VAR_0->srtt != 0) {
  VAR_2 -= (VAR_0->srtt >> 3);
  VAR_0->srtt += VAR_2;
  if (VAR_2 < 0)
   VAR_2 = -VAR_2;

  VAR_2 -= (VAR_0->rttvar >> 2);
  VAR_0->rttvar += VAR_2;
 } else {

  VAR_0->srtt = VAR_2 << 3;
  VAR_0->rttvar = VAR_2 << 1;
 }




 VAR_0->rto = (VAR_0->srtt >> 3) + VAR_0->rttvar;
}
