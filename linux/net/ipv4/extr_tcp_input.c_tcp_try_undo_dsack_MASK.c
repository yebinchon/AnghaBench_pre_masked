
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reo_wnd_persist; } ;
struct tcp_sock {TYPE_1__ rack; int undo_retrans; scalar_t__ undo_marker; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int) ;

__attribute__((used)) static bool FUNC_6(struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_4(VAR_2);

 if (VAR_3->undo_marker && !VAR_3->undo_retrans) {
  VAR_3->rack.reo_wnd_persist = FUNC_2(VAR_1,
            VAR_3->rack.reo_wnd_persist + 1);
  FUNC_0(VAR_2, "D-SACK");
  FUNC_5(VAR_2, 0);
  FUNC_1(FUNC_3(VAR_2), VAR_0);
  return 1;
 }
 return 0;
}
