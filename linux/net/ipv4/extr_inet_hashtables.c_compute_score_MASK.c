
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {unsigned short const sk_num; scalar_t__ const sk_rcv_saddr; scalar_t__ sk_family; int sk_incoming_cpu; int sk_bound_dev_if; } ;
struct net {int dummy; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net*,int ,int const,int const) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int ,struct net*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static inline int FUNC_6(struct sock *VAR_1, struct net *VAR_2,
    const unsigned short VAR_3, const __be32 VAR_4,
    const int VAR_5, const int VAR_6, bool VAR_7)
{
 int VAR_8 = -1;

 if (FUNC_3(FUNC_5(VAR_1), VAR_2) && VAR_1->sk_num == VAR_3 &&
   !FUNC_2(VAR_1)) {
  if (VAR_1->sk_rcv_saddr != VAR_4)
   return -1;

  if (!FUNC_1(VAR_2, VAR_1->sk_bound_dev_if, VAR_5, VAR_6))
   return -1;

  VAR_8 = VAR_1->sk_family == VAR_0 ? 2 : 1;
  if (FUNC_0(VAR_1->sk_incoming_cpu) == FUNC_4())
   VAR_8++;
 }
 return VAR_8;
}
