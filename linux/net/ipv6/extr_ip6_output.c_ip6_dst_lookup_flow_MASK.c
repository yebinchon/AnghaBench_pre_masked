
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {struct in6_addr daddr; } ;
struct dst_entry {int dummy; } ;


 struct dst_entry* FUNC_0 (int) ;
 int FUNC_1 (struct flowi6*) ;
 int FUNC_2 (int ,struct sock const*,struct dst_entry**,struct flowi6*) ;
 int FUNC_3 (struct sock const*) ;
 struct dst_entry* FUNC_4 (int ,struct dst_entry*,int ,struct sock const*,int ) ;

struct dst_entry *FUNC_5(const struct sock *VAR_0, struct flowi6 *VAR_1,
          const struct in6_addr *VAR_2)
{
 struct dst_entry *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_4 = FUNC_2(FUNC_3(VAR_0), VAR_0, &VAR_3, VAR_1);
 if (VAR_4)
  return FUNC_0(VAR_4);
 if (VAR_2)
  VAR_1->daddr = *VAR_2;

 return FUNC_4(FUNC_3(VAR_0), VAR_3, FUNC_1(VAR_1), VAR_0, 0);
}
