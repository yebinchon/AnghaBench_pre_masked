
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int index_hlist; int name_hlist; int dev_list; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1)
{
 FUNC_0();


 FUNC_5(&VAR_0);
 FUNC_4(&VAR_1->dev_list);
 FUNC_3(&VAR_1->name_hlist);
 FUNC_3(&VAR_1->index_hlist);
 FUNC_6(&VAR_0);

 FUNC_1(FUNC_2(VAR_1));
}
