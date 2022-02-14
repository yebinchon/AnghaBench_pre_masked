
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rt6_info {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int rx_dst_cookie; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct rt6_info const*) ;
 scalar_t__ FUNC_2 (struct sock*,struct dst_entry*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, struct dst_entry *VAR_1)
{
 if (FUNC_2(VAR_0, VAR_1)) {
  const struct rt6_info *VAR_2 = (const struct rt6_info *)VAR_1;

  FUNC_0(VAR_0)->rx_dst_cookie = FUNC_1(VAR_2);
 }
}
