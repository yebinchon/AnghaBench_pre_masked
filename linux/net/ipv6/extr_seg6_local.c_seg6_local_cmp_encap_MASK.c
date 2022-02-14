
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seg6_local_lwt {scalar_t__ action; TYPE_1__* desc; } ;
struct seg6_action_param {scalar_t__ (* cmp ) (struct seg6_local_lwt*,struct seg6_local_lwt*) ;} ;
struct lwtunnel_state {int dummy; } ;
struct TYPE_2__ {int attrs; } ;


 int VAR_0 ;
 struct seg6_action_param* VAR_1 ;
 struct seg6_local_lwt* FUNC_0 (struct lwtunnel_state*) ;
 scalar_t__ FUNC_1 (struct seg6_local_lwt*,struct seg6_local_lwt*) ;

__attribute__((used)) static int FUNC_2(struct lwtunnel_state *VAR_2,
    struct lwtunnel_state *VAR_3)
{
 struct seg6_local_lwt *VAR_4, *VAR_5;
 struct seg6_action_param *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_0(VAR_3);

 if (VAR_4->action != VAR_5->action)
  return 1;

 if (VAR_4->desc->attrs != VAR_5->desc->attrs)
  return 1;

 for (VAR_7 = 0; VAR_7 < VAR_0 + 1; VAR_7++) {
  if (VAR_4->desc->attrs & (1 << VAR_7)) {
   VAR_6 = &VAR_1[VAR_7];
   if (VAR_6->cmp(VAR_4, VAR_5))
    return 1;
  }
 }

 return 0;
}
