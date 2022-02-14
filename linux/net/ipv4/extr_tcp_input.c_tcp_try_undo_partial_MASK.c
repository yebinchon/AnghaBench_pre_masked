
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ retrans_stamp; scalar_t__ retrans_out; scalar_t__ undo_marker; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ,int) ;
 scalar_t__ FUNC_5 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int) ;

__attribute__((used)) static bool FUNC_9(struct sock *VAR_1, u32 VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_6(VAR_1);

 if (VAR_3->undo_marker && FUNC_5(VAR_3)) {



  FUNC_4(VAR_1, VAR_2, 1);






  if (VAR_3->retrans_out)
   return 1;

  if (!FUNC_3(VAR_1))
   VAR_3->retrans_stamp = 0;

  FUNC_0(VAR_1, "partial recovery");
  FUNC_8(VAR_1, 1);
  FUNC_1(FUNC_2(VAR_1), VAR_0);
  FUNC_7(VAR_1);
  return 1;
 }
 return 0;
}
