
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mem_cgroup {int dummy; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ pg_data_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct mem_cgroup*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(pg_data_t *VAR_1, struct mem_cgroup *VAR_2)
{
 return FUNC_1(VAR_0, &VAR_1->flags) ||
  (VAR_2 && FUNC_0(VAR_1, VAR_2));
}
