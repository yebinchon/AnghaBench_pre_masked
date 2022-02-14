
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; int sk_incoming_cpu; int sk_bound_dev_if; int sk_v6_rcv_saddr; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {unsigned short const inet_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct net*,int ,int const,int const) ;
 int FUNC_3 (int *,struct in6_addr const*) ;
 scalar_t__ FUNC_4 (int ,struct net*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static inline int FUNC_7(struct sock *VAR_1, struct net *VAR_2,
    const unsigned short VAR_3,
    const struct in6_addr *VAR_4,
    const int VAR_5, const int VAR_6, bool VAR_7)
{
 int VAR_8 = -1;

 if (FUNC_4(FUNC_6(VAR_1), VAR_2) && FUNC_1(VAR_1)->inet_num == VAR_3 &&
     VAR_1->sk_family == VAR_0) {
  if (!FUNC_3(&VAR_1->sk_v6_rcv_saddr, VAR_4))
   return -1;

  if (!FUNC_2(VAR_2, VAR_1->sk_bound_dev_if, VAR_5, VAR_6))
   return -1;

  VAR_8 = 1;
  if (FUNC_0(VAR_1->sk_incoming_cpu) == FUNC_5())
   VAR_8++;
 }
 return VAR_8;
}
