
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dn_scp {unsigned long nsp_srtt; unsigned long nsp_rttvar; } ;


 struct dn_scp* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0, long VAR_1)
{
 struct dn_scp *VAR_2 = FUNC_0(VAR_0);
 long VAR_3 = (long)VAR_2->nsp_srtt;
 long VAR_4 = (long)VAR_2->nsp_rttvar;
 long VAR_5;






 if (VAR_1 < 0)
  VAR_1 = -VAR_1;



 VAR_5 = ((VAR_1 << 3) - VAR_3);
 VAR_3 += (VAR_5 >> 3);
 if (VAR_3 >= 1)
  VAR_2->nsp_srtt = (unsigned long)VAR_3;
 else
  VAR_2->nsp_srtt = 1;




 VAR_5 >>= 1;
 VAR_4 += ((((VAR_5>0)?(VAR_5):(-VAR_5)) - VAR_4) >> 2);
 if (VAR_4 >= 1)
  VAR_2->nsp_rttvar = (unsigned long)VAR_4;
 else
  VAR_2->nsp_rttvar = 1;


}
