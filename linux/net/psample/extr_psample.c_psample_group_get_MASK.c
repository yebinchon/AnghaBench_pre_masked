
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psample_group {int refcount; } ;
struct net {int dummy; } ;


 struct psample_group* FUNC_0 (struct net*,int ) ;
 struct psample_group* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct psample_group *FUNC_4(struct net *VAR_1, u32 VAR_2)
{
 struct psample_group *VAR_3;

 FUNC_2(&VAR_0);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (!VAR_3)
   goto out;
 }
 VAR_3->refcount++;

out:
 FUNC_3(&VAR_0);
 return VAR_3;
}
