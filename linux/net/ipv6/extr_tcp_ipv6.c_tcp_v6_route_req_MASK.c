
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct request_sock {int dummy; } ;
struct TYPE_2__ {int ip6; } ;
struct flowi {TYPE_1__ u; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 struct dst_entry* FUNC_0 (struct sock const*,int *,struct request_sock const*,int ) ;

__attribute__((used)) static struct dst_entry *FUNC_1(const struct sock *VAR_1,
       struct flowi *VAR_2,
       const struct request_sock *VAR_3)
{
 return FUNC_0(VAR_1, &VAR_2->u.ip6, VAR_3, VAR_0);
}
