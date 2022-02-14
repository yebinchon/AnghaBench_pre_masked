
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; int index_hlist; int name; int name_hlist; int dev_list; } ;
struct net {int dev_base_head; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net*,int ) ;
 struct net* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1)
{
 struct net *VAR_2 = FUNC_4(VAR_1);

 FUNC_0();

 FUNC_7(&VAR_0);
 FUNC_6(&VAR_1->dev_list, &VAR_2->dev_base_head);
 FUNC_5(&VAR_1->name_hlist, FUNC_3(VAR_2, VAR_1->name));
 FUNC_5(&VAR_1->index_hlist,
      FUNC_2(VAR_2, VAR_1->ifindex));
 FUNC_8(&VAR_0);

 FUNC_1(VAR_2);
}
