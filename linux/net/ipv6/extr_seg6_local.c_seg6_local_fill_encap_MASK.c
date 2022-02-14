
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct seg6_local_lwt {TYPE_1__* desc; int action; } ;
struct seg6_action_param {int (* put ) (struct sk_buff*,struct seg6_local_lwt*) ;} ;
struct lwtunnel_state {int dummy; } ;
struct TYPE_2__ {int attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 struct seg6_action_param* VAR_3 ;
 struct seg6_local_lwt* FUNC_1 (struct lwtunnel_state*) ;
 int FUNC_2 (struct sk_buff*,struct seg6_local_lwt*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4,
     struct lwtunnel_state *VAR_5)
{
 struct seg6_local_lwt *VAR_6 = FUNC_1(VAR_5);
 struct seg6_action_param *VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_0(VAR_4, VAR_1, VAR_6->action))
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_2 + 1; VAR_8++) {
  if (VAR_6->desc->attrs & (1 << VAR_8)) {
   VAR_7 = &VAR_3[VAR_8];
   VAR_9 = VAR_7->put(VAR_4, VAR_6);
   if (VAR_9 < 0)
    return VAR_9;
  }
 }

 return 0;
}
