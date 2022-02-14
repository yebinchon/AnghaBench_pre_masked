
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vif_device {int dummy; } ;
struct TYPE_2__ {int ipmr_seq; } ;
struct net {TYPE_1__ ipv6; } ;
typedef int mifi_t ;
typedef enum fib_event_type { ____Placeholder_fib_event_type } fib_event_type ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ,int,struct vif_device*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_1,
       enum fib_event_type VAR_2,
       struct vif_device *VAR_3,
       mifi_t VAR_4, u32 VAR_5)
{
 return FUNC_0(VAR_1, VAR_0, VAR_2,
         VAR_3, VAR_4, VAR_5,
         &VAR_1->ipv6.ipmr_seq);
}
