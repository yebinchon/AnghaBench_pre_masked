
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_type; scalar_t__ sk_protocol; scalar_t__ sk_user_data; } ;
struct net {int dummy; } ;
typedef enum l2tp_encap_type { ____Placeholder_l2tp_encap_type } l2tp_encap_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,struct net const*) ;
 int FUNC_1 (struct sock const*) ;

__attribute__((used)) static int FUNC_2(const struct sock *VAR_8, const struct net *VAR_9,
    enum l2tp_encap_type VAR_10)
{
 if (!FUNC_0(FUNC_1(VAR_8), VAR_9))
  return -VAR_1;

 if (VAR_8->sk_type != VAR_7)
  return -VAR_2;

 if ((VAR_10 == VAR_6 && VAR_8->sk_protocol != VAR_4) ||
     (VAR_10 == VAR_5 && VAR_8->sk_protocol != VAR_3))
  return -VAR_2;

 if (VAR_8->sk_user_data)
  return -VAR_0;

 return 0;
}
