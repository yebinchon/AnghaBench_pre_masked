
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgdtor_param {TYPE_1__* target; int family; int targinfo; } ;
struct TYPE_5__ {TYPE_1__* target; } ;
struct TYPE_6__ {TYPE_2__ kernel; } ;
struct xt_entry_target {int data; TYPE_3__ u; } ;
struct arpt_entry {int counters; } ;
struct TYPE_4__ {int me; int (* destroy ) (struct xt_tgdtor_param*) ;} ;


 int VAR_0 ;
 struct xt_entry_target* FUNC_0 (struct arpt_entry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xt_tgdtor_param*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct arpt_entry *VAR_1)
{
 struct xt_tgdtor_param VAR_2;
 struct xt_entry_target *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 VAR_2.target = VAR_3->u.kernel.target;
 VAR_2.targinfo = VAR_3->data;
 VAR_2.family = VAR_0;
 if (VAR_2.target->destroy != ((void*)0))
  VAR_2.target->destroy(&VAR_2);
 FUNC_1(VAR_2.target->me);
 FUNC_3(&VAR_1->counters);
}
