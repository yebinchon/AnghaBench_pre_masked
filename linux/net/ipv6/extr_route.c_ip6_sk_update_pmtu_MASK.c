
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_bound_dev_if; int sk_v6_daddr; int sk_uid; int sk_mark; } ;
struct sk_buff {scalar_t__ dev; } ;
struct dst_entry {TYPE_1__* ops; int obsolete; } ;
typedef int __be32 ;
struct TYPE_4__ {int dst_cookie; } ;
struct TYPE_3__ {scalar_t__ (* check ) (struct dst_entry*,int ) ;} ;


 struct dst_entry* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (struct dst_entry*,int ) ;

void FUNC_11(struct sk_buff *VAR_0, struct sock *VAR_1, __be32 VAR_2)
{
 int VAR_3 = VAR_1->sk_bound_dev_if;
 struct dst_entry *VAR_4;

 if (!VAR_3 && VAR_0->dev)
  VAR_3 = FUNC_7(VAR_0->dev);

 FUNC_5(VAR_0, FUNC_8(VAR_1), VAR_2, VAR_3, VAR_1->sk_mark, VAR_1->sk_uid);

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4 || !VAR_4->obsolete ||
     VAR_4->ops->check(VAR_4, FUNC_3(VAR_1)->dst_cookie))
  return;

 FUNC_1(VAR_1);
 if (!FUNC_9(VAR_1) && !FUNC_6(&VAR_1->sk_v6_daddr))
  FUNC_4(VAR_1, 0);
 FUNC_2(VAR_1);
}
