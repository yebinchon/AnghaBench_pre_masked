
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ tlp_high_seq; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_6, u32 VAR_7, int VAR_8)
{
 struct tcp_sock *VAR_9 = FUNC_7(VAR_6);

 if (FUNC_2(VAR_7, VAR_9->tlp_high_seq))
  return;

 if (VAR_8 & VAR_1) {

  VAR_9->tlp_high_seq = 0;
 } else if (FUNC_1(VAR_7, VAR_9->tlp_high_seq)) {



  FUNC_5(VAR_6);
  FUNC_6(VAR_6, VAR_5);
  FUNC_4(VAR_6);
  FUNC_8(VAR_6);
  FUNC_0(FUNC_3(VAR_6),
    VAR_4);
 } else if (!(VAR_8 & (VAR_3 |
        VAR_2 | VAR_0))) {

  VAR_9->tlp_high_seq = 0;
 }
}
