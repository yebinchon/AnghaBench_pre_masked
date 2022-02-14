
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int srtt_us; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*,int ,unsigned long,int ) ;
 unsigned long FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct sock *VAR_3, int VAR_4)
{
 if (VAR_4 & VAR_0) {
  struct tcp_sock *VAR_5 = FUNC_3(VAR_3);
  unsigned long VAR_6 = FUNC_1(FUNC_4(VAR_5->srtt_us >> 4),
       FUNC_2(10));

  FUNC_0(VAR_3, VAR_1,
       VAR_6, VAR_2);
  return 1;
 }
 return 0;
}
