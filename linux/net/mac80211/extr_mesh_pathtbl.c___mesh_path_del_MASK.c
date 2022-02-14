
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_table {int rhead; } ;
struct mesh_path {int rhash; int walk_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mesh_table*,struct mesh_path*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct mesh_table *VAR_1, struct mesh_path *VAR_2)
{
 FUNC_0(&VAR_2->walk_list);
 FUNC_2(&VAR_1->rhead, &VAR_2->rhash, VAR_0);
 FUNC_1(VAR_1, VAR_2);
}
