
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_target {int me; } ;
struct xt_percpu_counter_alloc_state {int dummy; } ;
struct TYPE_5__ {struct xt_target* target; } ;
struct TYPE_4__ {int revision; int name; } ;
struct TYPE_6__ {TYPE_2__ kernel; TYPE_1__ user; } ;
struct xt_entry_target {TYPE_3__ u; } ;
struct arpt_entry {int counters; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xt_target*) ;
 int VAR_1 ;
 int FUNC_1 (struct xt_target*) ;
 struct xt_entry_target* FUNC_2 (struct arpt_entry*) ;
 int FUNC_3 (struct arpt_entry*,char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct xt_percpu_counter_alloc_state*,int *) ;
 int FUNC_6 (int *) ;
 struct xt_target* FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_8(struct arpt_entry *VAR_2, const char *VAR_3, unsigned int VAR_4,
   struct xt_percpu_counter_alloc_state *VAR_5)
{
 struct xt_entry_target *VAR_6;
 struct xt_target *VAR_7;
 int VAR_8;

 if (!FUNC_5(VAR_5, &VAR_2->counters))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2);
 VAR_7 = FUNC_7(VAR_1, VAR_6->u.user.name,
     VAR_6->u.user.revision);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto out;
 }
 VAR_6->u.kernel.target = VAR_7;

 VAR_8 = FUNC_3(VAR_2, VAR_3);
 if (VAR_8)
  goto err;
 return 0;
err:
 FUNC_4(VAR_6->u.kernel.target->me);
out:
 FUNC_6(&VAR_2->counters);

 return VAR_8;
}
