
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct sock {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_pcslen; scalar_t__ dccps_pcrlen; } ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 struct dccp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0, u64 VAR_1, bool VAR_2)
{
 struct dccp_sock *VAR_3 = FUNC_1(VAR_0);

 if (VAR_2)
  VAR_3->dccps_pcrlen = VAR_1;
 else {
  if (VAR_3->dccps_pcslen == 0)
   VAR_3->dccps_pcslen = VAR_1;
  else if (VAR_1 > VAR_3->dccps_pcslen)
   FUNC_0("CsCov %u too small, peer requires >= %u\n",
      VAR_3->dccps_pcslen, (u8)VAR_1);
 }
 return 0;
}
