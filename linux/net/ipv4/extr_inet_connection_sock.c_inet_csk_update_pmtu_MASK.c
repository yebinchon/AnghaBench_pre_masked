
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct TYPE_3__ {int fl; } ;
struct inet_sock {TYPE_1__ cork; } ;
struct dst_entry {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* update_pmtu ) (struct dst_entry*,struct sock*,int *,int ) ;} ;


 struct dst_entry* FUNC_0 (struct sock*,int ) ;
 struct dst_entry* FUNC_1 (struct sock*,int *) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct dst_entry*,struct sock*,int *,int ) ;

struct dst_entry *FUNC_4(struct sock *VAR_0, u32 VAR_1)
{
 struct dst_entry *VAR_2 = FUNC_0(VAR_0, 0);
 struct inet_sock *VAR_3 = FUNC_2(VAR_0);

 if (!VAR_2) {
  VAR_2 = FUNC_1(VAR_0, &VAR_3->cork.fl);
  if (!VAR_2)
   goto out;
 }
 VAR_2->ops->update_pmtu(VAR_2, VAR_0, ((void*)0), VAR_1);

 VAR_2 = FUNC_0(VAR_0, 0);
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0, &VAR_3->cork.fl);
out:
 return VAR_2;
}
