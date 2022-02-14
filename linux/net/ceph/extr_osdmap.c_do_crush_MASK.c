
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crush_choose_arg_map {int * args; } ;
struct ceph_osdmap {int crush_workspace_mutex; int crush_workspace; TYPE_1__* crush; } ;
typedef int s64 ;
typedef int __u32 ;
struct TYPE_2__ {int choose_args; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int,int*,int,int const*,int,int ,int *) ;
 struct crush_choose_arg_map* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ceph_osdmap *VAR_2, int VAR_3, int VAR_4,
      int *VAR_5, int VAR_6,
      const __u32 *VAR_7, int VAR_8,
      s64 VAR_9)
{
 struct crush_choose_arg_map *VAR_10;
 int VAR_11;

 FUNC_0(VAR_6 > VAR_1);

 VAR_10 = FUNC_2(&VAR_2->crush->choose_args,
     VAR_9);
 if (!VAR_10)
  VAR_10 = FUNC_2(&VAR_2->crush->choose_args,
      VAR_0);

 FUNC_3(&VAR_2->crush_workspace_mutex);
 VAR_11 = FUNC_1(VAR_2->crush, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_2->crush_workspace,
     VAR_10 ? VAR_10->args : ((void*)0));
 FUNC_4(&VAR_2->crush_workspace_mutex);

 return VAR_11;
}
