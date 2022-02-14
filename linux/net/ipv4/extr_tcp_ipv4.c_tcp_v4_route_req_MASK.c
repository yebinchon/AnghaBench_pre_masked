
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct request_sock {int dummy; } ;
struct TYPE_2__ {int ip4; } ;
struct flowi {TYPE_1__ u; } ;
struct dst_entry {int dummy; } ;


 struct dst_entry* FUNC_0 (struct sock const*,int *,struct request_sock const*) ;

__attribute__((used)) static struct dst_entry *FUNC_1(const struct sock *VAR_0,
       struct flowi *VAR_1,
       const struct request_sock *VAR_2)
{
 return FUNC_0(VAR_0, &VAR_1->u.ip4, VAR_2);
}
