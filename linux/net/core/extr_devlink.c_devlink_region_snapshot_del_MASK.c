
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_snapshot {int data; int (* data_destructor ) (int ) ;int list; } ;
struct devlink_region {int cur_snapshots; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink_region*,struct devlink_snapshot*,int ) ;
 int FUNC_1 (struct devlink_snapshot*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct devlink_region *VAR_1,
     struct devlink_snapshot *VAR_2)
{
 FUNC_0(VAR_1, VAR_2, VAR_0);
 VAR_1->cur_snapshots--;
 FUNC_2(&VAR_2->list);
 (*VAR_2->data_destructor)(VAR_2->data);
 FUNC_1(VAR_2);
}
