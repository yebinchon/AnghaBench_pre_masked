
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int dst_cookie; } ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 struct dst_entry* FUNC_3 (struct sock*,struct flowi6*,struct in6_addr const*) ;
 struct dst_entry* FUNC_4 (struct sock*,struct dst_entry*,struct flowi6*) ;
 int FUNC_5 (struct sock*,int ,struct flowi6*) ;
 struct dst_entry* FUNC_6 (struct sock*,int ) ;

struct dst_entry *FUNC_7(struct sock *VAR_0, struct flowi6 *VAR_1,
      const struct in6_addr *VAR_2,
      bool VAR_3)
{
 struct dst_entry *VAR_4 = FUNC_6(VAR_0, FUNC_2(VAR_0)->dst_cookie);

 VAR_4 = FUNC_4(VAR_0, VAR_4, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_3 && !FUNC_0(VAR_4))
  FUNC_5(VAR_0, FUNC_1(VAR_4), VAR_1);

 return VAR_4;
}
