
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct batadv_tt_local_entry {TYPE_1__ common; } ;
struct TYPE_4__ {int flags; } ;
struct batadv_tt_global_entry {TYPE_2__ common; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(struct batadv_tt_local_entry *VAR_2,
         struct batadv_tt_global_entry *VAR_3)
{
 if (VAR_2->common.flags & VAR_1 &&
     VAR_3->common.flags & VAR_1)
  return 1;


 if (VAR_2->common.flags & VAR_0 &&
     VAR_3->common.flags & VAR_0)
  return 1;

 return 0;
}
