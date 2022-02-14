
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct neighbour {int nud_state; } ;
struct neigh_table {int lock; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct neigh_table VAR_5 ;
 struct neighbour* FUNC_0 (struct neigh_table*,int *,struct net_device*) ;
 int FUNC_1 (struct neighbour*) ;
 int FUNC_2 (struct neighbour*,struct neigh_table*) ;
 int FUNC_3 (struct neighbour*,int *,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6, __be32 VAR_7)
{
 struct neighbour *VAR_8 = FUNC_0(&VAR_5, &VAR_7, VAR_6);
 int VAR_9 = -VAR_0;
 struct neigh_table *VAR_10 = &VAR_5;

 if (VAR_8) {
  if (VAR_8->nud_state & ~VAR_4)
   VAR_9 = FUNC_3(VAR_8, ((void*)0), VAR_3,
        VAR_2|
        VAR_1, 0);
  FUNC_4(&VAR_10->lock);
  FUNC_1(VAR_8);
  FUNC_2(VAR_8, VAR_10);
  FUNC_5(&VAR_10->lock);
 }

 return VAR_9;
}
