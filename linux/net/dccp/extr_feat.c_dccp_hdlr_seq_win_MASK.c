
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct sock {int dummy; } ;
struct dccp_sock {int dccps_gss; void* dccps_l_seq_win; int dccps_gsr; void* dccps_r_seq_win; } ;


 struct dccp_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, u64 VAR_1, bool VAR_2)
{
 struct dccp_sock *VAR_3 = FUNC_0(VAR_0);

 if (VAR_2) {
  VAR_3->dccps_r_seq_win = VAR_1;

  FUNC_1(VAR_0, VAR_3->dccps_gsr);
 } else {
  VAR_3->dccps_l_seq_win = VAR_1;

  FUNC_2(VAR_0, VAR_3->dccps_gss);
 }
 return 0;
}
