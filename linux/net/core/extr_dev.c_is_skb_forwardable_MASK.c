
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;
struct net_device {int flags; unsigned int mtu; unsigned int hard_header_len; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff const*) ;

bool FUNC_1(const struct net_device *VAR_2, const struct sk_buff *VAR_3)
{
 unsigned int VAR_4;

 if (!(VAR_2->flags & VAR_0))
  return 0;

 VAR_4 = VAR_2->mtu + VAR_2->hard_header_len + VAR_1;
 if (VAR_3->len <= VAR_4)
  return 1;




 if (FUNC_0(VAR_3))
  return 1;

 return 0;
}
