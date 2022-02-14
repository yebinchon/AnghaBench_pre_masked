
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_1__* skb; } ;
struct net {int dummy; } ;
struct fnhe_hash_bucket {int dummy; } ;
struct fib_nh_common {int nhc_flags; int nhc_exceptions; } ;
struct fib_info {int dummy; } ;
struct TYPE_2__ {int sk; } ;


 int VAR_0 ;
 struct fib_nh_common* FUNC_0 (struct fib_info*,int) ;
 int FUNC_1 (struct fib_info*) ;
 int FUNC_2 (struct net*,struct sk_buff*,struct netlink_callback*,int ,struct fnhe_hash_bucket*,int,int*,int,unsigned int) ;
 int FUNC_3 (struct net*) ;
 struct fnhe_hash_bucket* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct net* FUNC_7 (int ) ;

int FUNC_8(struct sk_buff *VAR_1, struct netlink_callback *VAR_2,
         u32 VAR_3, struct fib_info *VAR_4,
         int *VAR_5, int VAR_6, unsigned int VAR_7)
{
 struct net *VAR_8 = FUNC_7(VAR_2->skb->sk);
 int VAR_9, VAR_10 = FUNC_3(VAR_8);

 for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_4); VAR_9++) {
  struct fib_nh_common *VAR_11 = FUNC_0(VAR_4, VAR_9);
  struct fnhe_hash_bucket *VAR_12;
  int VAR_13;

  if (VAR_11->nhc_flags & VAR_0)
   continue;

  FUNC_5();
  VAR_12 = FUNC_4(VAR_11->nhc_exceptions);
  VAR_13 = 0;
  if (VAR_12)
   VAR_13 = FUNC_2(VAR_8, VAR_1, VAR_2, VAR_3, VAR_12,
            VAR_10, VAR_5, VAR_6,
            VAR_7);
  FUNC_6();
  if (VAR_13)
   return VAR_13;
 }

 return 0;
}
