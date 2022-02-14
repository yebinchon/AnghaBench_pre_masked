
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct flowi6 {int dummy; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* update_pmtu ) (struct dst_entry*,struct sock*,int *,int ) ;} ;


 scalar_t__ FUNC_0 (struct dst_entry*) ;
 struct dst_entry* FUNC_1 (struct sock*,struct flowi6*) ;
 int FUNC_2 (struct dst_entry*,struct sock*,int *,int ) ;

struct dst_entry *FUNC_3(struct sock *VAR_0, u32 VAR_1)
{
 struct flowi6 VAR_2;
 struct dst_entry *VAR_3 = FUNC_1(VAR_0, &VAR_2);

 if (FUNC_0(VAR_3))
  return ((void*)0);
 VAR_3->ops->update_pmtu(VAR_3, VAR_0, ((void*)0), VAR_1);

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 return FUNC_0(VAR_3) ? ((void*)0) : VAR_3;
}
