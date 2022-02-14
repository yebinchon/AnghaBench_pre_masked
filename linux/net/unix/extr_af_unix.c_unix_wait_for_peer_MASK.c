
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sock {int peer_wait; } ;
struct sock {int sk_shutdown; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 long FUNC_3 (long) ;
 int FUNC_4 (struct sock*,int ) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 struct unix_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int VAR_3 ;

__attribute__((used)) static long FUNC_8(struct sock *VAR_4, long VAR_5)
{
 struct unix_sock *VAR_6 = FUNC_6(VAR_4);
 int VAR_7;
 FUNC_0(VAR_3);

 FUNC_2(&VAR_6->peer_wait, &VAR_3, VAR_2);

 VAR_7 = !FUNC_4(VAR_4, VAR_1) &&
  !(VAR_4->sk_shutdown & VAR_0) &&
  FUNC_5(VAR_4);

 FUNC_7(VAR_4);

 if (VAR_7)
  VAR_5 = FUNC_3(VAR_5);

 FUNC_1(&VAR_6->peer_wait, &VAR_3);
 return VAR_5;
}
