
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {scalar_t__ ref_netlink; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct ip_set *VAR_1)
{
 FUNC_1(&VAR_0);
 FUNC_0(VAR_1->ref_netlink == 0);
 VAR_1->ref_netlink--;
 FUNC_2(&VAR_0);
}
