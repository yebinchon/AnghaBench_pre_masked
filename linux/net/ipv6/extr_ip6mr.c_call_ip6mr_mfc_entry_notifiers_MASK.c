
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ipmr_seq; } ;
struct net {TYPE_1__ ipv6; } ;
struct mfc6_cache {int _c; } ;
typedef enum fib_event_type { ____Placeholder_fib_event_type } fib_event_type ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_1,
       enum fib_event_type VAR_2,
       struct mfc6_cache *VAR_3, u32 VAR_4)
{
 return FUNC_0(VAR_1, VAR_0, VAR_2,
         &VAR_3->_c, VAR_4, &VAR_1->ipv6.ipmr_seq);
}
