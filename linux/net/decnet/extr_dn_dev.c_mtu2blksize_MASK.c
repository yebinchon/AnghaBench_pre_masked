
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int mtu; scalar_t__ type; } ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline __u16 FUNC_0(struct net_device *VAR_4)
{
 u32 VAR_5 = VAR_4->mtu;
 if (VAR_5 > 0xffff)
  VAR_5 = 0xffff;

 if (VAR_4->type == VAR_0 ||
     VAR_4->type == VAR_3 ||
     VAR_4->type == VAR_1 ||
     VAR_4->type == VAR_2)
  VAR_5 -= 2;

 return (__u16)VAR_5;
}
