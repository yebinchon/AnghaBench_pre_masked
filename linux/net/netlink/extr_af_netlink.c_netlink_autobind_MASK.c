
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {size_t sk_protocol; } ;
struct netlink_table {int dummy; } ;
struct net {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_table*,int,struct net*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (struct sock*,int) ;
 struct netlink_table* VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct net* FUNC_6 (struct sock*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_5)
{
 struct sock *VAR_6 = VAR_5->sk;
 struct net *VAR_7 = FUNC_6(VAR_6);
 struct netlink_table *VAR_8 = &VAR_4[VAR_6->sk_protocol];
 s32 VAR_9 = FUNC_7(VAR_3);
 int VAR_10;
 s32 VAR_11 = -4096;
 bool VAR_12;

retry:
 FUNC_1();
 FUNC_4();
 VAR_12 = !FUNC_0(VAR_8, VAR_9, VAR_7);
 FUNC_5();
 if (!VAR_12) {

  if (VAR_11 == -4096)

   VAR_11 = VAR_2 + FUNC_3(-4096 - VAR_2);
  else if (VAR_11 >= -4096)
   VAR_11 = -4097;
  VAR_9 = VAR_11--;
  goto retry;
 }

 VAR_10 = FUNC_2(VAR_6, VAR_9);
 if (VAR_10 == -VAR_0)
  goto retry;


 if (VAR_10 == -VAR_1)
  VAR_10 = 0;

 return VAR_10;
}
