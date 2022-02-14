
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ifreq {int ifr_ifindex; scalar_t__* ifr_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_1, struct ifreq *VAR_2)
{
 VAR_2->ifr_name[VAR_0-1] = 0;
 return FUNC_0(VAR_1, VAR_2->ifr_name, VAR_2->ifr_ifindex);
}
