
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct neighbour {int refcnt; } ;
struct neigh_table {int dummy; } ;


 int FUNC_0 (struct neigh_table*,int ) ;
 struct neighbour* FUNC_1 (struct neigh_table*,void const*,struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

struct neighbour *FUNC_5(struct neigh_table *VAR_2, const void *VAR_3,
          struct net_device *VAR_4)
{
 struct neighbour *VAR_5;

 FUNC_0(VAR_2, VAR_1);

 FUNC_2();
 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
  if (!FUNC_4(&VAR_5->refcnt))
   VAR_5 = ((void*)0);
  FUNC_0(VAR_2, VAR_0);
 }

 FUNC_3();
 return VAR_5;
}
