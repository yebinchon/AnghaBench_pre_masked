
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; } ;
struct mem_cgroup {TYPE_1__ id; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct mem_cgroup *VAR_1)
{
 if (VAR_1->id.id > 0) {
  FUNC_0(&VAR_0, VAR_1->id.id);
  VAR_1->id.id = 0;
 }
}
