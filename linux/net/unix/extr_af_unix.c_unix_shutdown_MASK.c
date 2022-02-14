
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; scalar_t__ sk_type; int (* sk_state_change ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sock*,int ,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 struct sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_11, int VAR_12)
{
 struct sock *VAR_13 = VAR_11->sk;
 struct sock *VAR_14;

 if (VAR_12 < VAR_6 || VAR_12 > VAR_7)
  return -VAR_0;





 ++VAR_12;

 FUNC_6(VAR_13);
 VAR_13->sk_shutdown |= VAR_12;
 VAR_14 = FUNC_5(VAR_13);
 if (VAR_14)
  FUNC_1(VAR_14);
 FUNC_7(VAR_13);
 VAR_13->sk_state_change(VAR_13);

 if (VAR_14 &&
  (VAR_13->sk_type == VAR_9 || VAR_13->sk_type == VAR_8)) {

  int VAR_15 = 0;

  if (VAR_12&VAR_3)
   VAR_15 |= VAR_4;
  if (VAR_12&VAR_4)
   VAR_15 |= VAR_3;
  FUNC_6(VAR_14);
  VAR_14->sk_shutdown |= VAR_15;
  FUNC_7(VAR_14);
  VAR_14->sk_state_change(VAR_14);
  if (VAR_15 == VAR_5)
   FUNC_0(VAR_14, VAR_10, VAR_1);
  else if (VAR_15 & VAR_3)
   FUNC_0(VAR_14, VAR_10, VAR_2);
 }
 if (VAR_14)
  FUNC_2(VAR_14);

 return 0;
}
