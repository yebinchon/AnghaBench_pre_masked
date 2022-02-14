
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlink_sock {int portid; int sk; } ;
struct netlink_compare_arg {int dummy; } ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct netlink_compare_arg*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline u32 FUNC_3(const void *VAR_1, u32 VAR_2, u32 VAR_3)
{
 const struct netlink_sock *VAR_4 = VAR_1;
 struct netlink_compare_arg VAR_5;

 FUNC_1(&VAR_5, FUNC_2(&VAR_4->sk), VAR_4->portid);
 return FUNC_0((u32 *)&VAR_5, VAR_0 / sizeof(u32), VAR_3);
}
