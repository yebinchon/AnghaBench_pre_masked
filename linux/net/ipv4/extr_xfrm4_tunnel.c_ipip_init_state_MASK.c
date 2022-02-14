
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int header_len; } ;
struct xfrm_state {TYPE_1__ props; scalar_t__ encap; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct xfrm_state *VAR_2)
{
 if (VAR_2->props.mode != VAR_1)
  return -VAR_0;

 if (VAR_2->encap)
  return -VAR_0;

 VAR_2->props.header_len = sizeof(struct iphdr);

 return 0;
}
