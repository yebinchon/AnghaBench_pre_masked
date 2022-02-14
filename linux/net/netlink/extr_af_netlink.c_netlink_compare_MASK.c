
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_compare_arg {struct netlink_compare_arg* key; } ;
struct netlink_sock {scalar_t__ portid; int sk; } ;
struct netlink_compare_arg {scalar_t__ portid; int pnet; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct rhashtable_compare_arg *VAR_0,
      const void *VAR_1)
{
 const struct netlink_compare_arg *VAR_2 = VAR_0->key;
 const struct netlink_sock *VAR_3 = VAR_1;

 return VAR_3->portid != VAR_2->portid ||
        !FUNC_0(FUNC_2(&VAR_3->sk), FUNC_1(&VAR_2->pnet));
}
