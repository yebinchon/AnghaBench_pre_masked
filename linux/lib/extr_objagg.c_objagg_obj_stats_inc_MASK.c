
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int delta_user_count; int user_count; } ;
struct objagg_obj {TYPE_3__* parent; TYPE_1__ stats; } ;
struct TYPE_5__ {int delta_user_count; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;



__attribute__((used)) static void FUNC_0(struct objagg_obj *VAR_0)
{
 VAR_0->stats.user_count++;
 VAR_0->stats.delta_user_count++;
 if (VAR_0->parent)
  VAR_0->parent->stats.delta_user_count++;
}
