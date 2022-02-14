
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct clusterip_config {int entries; int refcount; int pde; } ;
typedef int __be32 ;


 struct clusterip_config* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct clusterip_config*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline struct clusterip_config *
FUNC_6(struct net *VAR_0, __be32 VAR_1, int VAR_2)
{
 struct clusterip_config *VAR_3;

 FUNC_2();
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3) {





  if (FUNC_5(!FUNC_4(&VAR_3->refcount)))
   VAR_3 = ((void*)0);
  else if (VAR_2) {
   if (FUNC_5(!FUNC_4(&VAR_3->entries))) {
    FUNC_1(VAR_3);
    VAR_3 = ((void*)0);
   }
  }
 }
 FUNC_3();

 return VAR_3;
}
