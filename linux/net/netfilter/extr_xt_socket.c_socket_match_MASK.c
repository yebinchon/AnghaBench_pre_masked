
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_socket_mtinfo1 {int flags; } ;
struct xt_action_param {int dummy; } ;
struct sock {int sk_mark; } ;
struct sk_buff {struct sock* sk; int mark; } ;
struct TYPE_2__ {scalar_t__ inet_rcv_saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int ) ;
 struct sock* FUNC_3 (int ,struct sk_buff const*,int ) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct xt_action_param*) ;
 int FUNC_8 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_9(const struct sk_buff *VAR_3, struct xt_action_param *VAR_4,
      const struct xt_socket_mtinfo1 *VAR_5)
{
 struct sk_buff *VAR_6 = (struct sk_buff *)VAR_3;
 struct sock *VAR_7 = VAR_3->sk;

 if (VAR_7 && !FUNC_2(FUNC_8(VAR_4), FUNC_6(VAR_7)))
  VAR_7 = ((void*)0);

 if (!VAR_7)
  VAR_7 = FUNC_3(FUNC_8(VAR_4), VAR_3, FUNC_7(VAR_4));

 if (VAR_7) {
  bool VAR_8;
  bool VAR_9 = 1;




  VAR_8 = (!(VAR_5->flags & VAR_0) &&
       FUNC_4(VAR_7) &&
       FUNC_0(VAR_7)->inet_rcv_saddr == 0);




  if (VAR_5->flags & VAR_2)
   VAR_9 = FUNC_1(VAR_7);

  if (VAR_5->flags & VAR_1 && !VAR_8 &&
      VAR_9 && FUNC_4(VAR_7))
   VAR_6->mark = VAR_7->sk_mark;

  if (VAR_7 != VAR_3->sk)
   FUNC_5(VAR_7);

  if (VAR_8 || !VAR_9)
   VAR_7 = ((void*)0);
 }

 return VAR_7 != ((void*)0);
}
