
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_local_lwt {int headroom; struct seg6_action_desc* desc; int action; } ;
struct seg6_action_param {int (* parse ) (struct nlattr**,struct seg6_local_lwt*) ;} ;
struct seg6_action_desc {int attrs; scalar_t__ static_headroom; int input; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct seg6_action_desc* FUNC_0 (int ) ;
 struct seg6_action_param* VAR_3 ;
 int FUNC_1 (struct nlattr**,struct seg6_local_lwt*) ;

__attribute__((used)) static int FUNC_2(struct nlattr **VAR_4, struct seg6_local_lwt *VAR_5)
{
 struct seg6_action_param *VAR_6;
 struct seg6_action_desc *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_5->action);
 if (!VAR_7)
  return -VAR_0;

 if (!VAR_7->input)
  return -VAR_1;

 VAR_5->desc = VAR_7;
 VAR_5->headroom += VAR_7->static_headroom;

 for (VAR_8 = 0; VAR_8 < VAR_2 + 1; VAR_8++) {
  if (VAR_7->attrs & (1 << VAR_8)) {
   if (!VAR_4[VAR_8])
    return -VAR_0;

   VAR_6 = &VAR_3[VAR_8];

   VAR_9 = VAR_6->parse(VAR_4, VAR_5);
   if (VAR_9 < 0)
    return VAR_9;
  }
 }

 return 0;
}
