
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int proc_net; } ;
struct clusterip_net {int mutex; int procdir; int lock; int configs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct clusterip_net* FUNC_1 (struct net*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net*,int *) ;
 int FUNC_4 (struct net*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_2)
{
 struct clusterip_net *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_0(&VAR_3->configs);

 FUNC_7(&VAR_3->lock);

 VAR_4 = FUNC_3(VAR_2, &VAR_1);
 if (VAR_4 < 0)
  return VAR_4;
 return 0;
}
