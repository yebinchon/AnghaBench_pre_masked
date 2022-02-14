
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ uid; } ;
struct user_or_group_id {TYPE_1__ id; } ;



int FUNC_0(void* VAR_0, void* VAR_1) {
    if(((struct user_or_group_id *)VAR_0)->id.uid < ((struct user_or_group_id *)VAR_1)->id.uid)
        return -1;

    else if(((struct user_or_group_id *)VAR_0)->id.uid > ((struct user_or_group_id *)VAR_1)->id.uid)
        return 1;

    else
        return 0;
}
