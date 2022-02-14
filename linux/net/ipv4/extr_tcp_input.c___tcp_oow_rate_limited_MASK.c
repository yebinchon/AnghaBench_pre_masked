
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ sysctl_tcp_invalid_ratelimit; } ;
struct net {TYPE_1__ ipv4; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct net*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct net *VAR_1, int VAR_2,
       u32 *VAR_3)
{
 if (*VAR_3) {
  s32 VAR_4 = (s32)(VAR_0 - *VAR_3);

  if (0 <= VAR_4 && VAR_4 < VAR_1->ipv4.sysctl_tcp_invalid_ratelimit) {
   FUNC_0(VAR_1, VAR_2);
   return 1;
  }
 }

 *VAR_3 = VAR_0;

 return 0;
}
