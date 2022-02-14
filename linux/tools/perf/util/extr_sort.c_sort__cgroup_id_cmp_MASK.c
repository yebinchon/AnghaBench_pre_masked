
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ino; int dev; } ;
struct hist_entry {TYPE_1__ cgroup_id; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int64_t
FUNC_2(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 int64_t VAR_2;

 VAR_2 = FUNC_0(VAR_1->cgroup_id.dev, VAR_0->cgroup_id.dev);
 if (VAR_2 != 0)
  return VAR_2;

 return FUNC_1(VAR_1->cgroup_id.ino,
           VAR_0->cgroup_id.ino);
}
