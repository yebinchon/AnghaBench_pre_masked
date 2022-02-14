
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {struct datapath* dp; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct datapath {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int) ;
 struct vport* FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline struct datapath *FUNC_2(struct net *VAR_0, int VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2) {
  struct vport *VAR_3 = FUNC_1(VAR_2);

  if (VAR_3)
   return VAR_3->dp;
 }

 return ((void*)0);
}
