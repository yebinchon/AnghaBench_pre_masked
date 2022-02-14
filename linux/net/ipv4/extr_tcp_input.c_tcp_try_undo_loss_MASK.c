
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ is_sack_reneg; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ icsk_retransmits; } ;


 int FUNC_0 (struct sock*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct tcp_sock*) ;
 scalar_t__ FUNC_5 (struct tcp_sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int) ;

__attribute__((used)) static bool FUNC_9(struct sock *VAR_3, bool VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_7(VAR_3);

 if (VAR_4 || FUNC_5(VAR_5)) {
  FUNC_8(VAR_3, 1);

  FUNC_0(VAR_3, "partial loss");
  FUNC_1(FUNC_3(VAR_3), VAR_0);
  if (VAR_4)
   FUNC_1(FUNC_3(VAR_3),
     VAR_1);
  FUNC_2(VAR_3)->icsk_retransmits = 0;
  if (VAR_4 || FUNC_4(VAR_5)) {
   FUNC_6(VAR_3, VAR_2);
   VAR_5->is_sack_reneg = 0;
  }
  return 1;
 }
 return 0;
}
