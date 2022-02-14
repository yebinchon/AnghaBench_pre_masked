
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct list_head {int dummy; } ;
struct TYPE_3__ {scalar_t__ nn; } ;
struct dccp_feat_entry {int needs_confirm; int needs_mandatory; TYPE_1__ val; int empty_confirm; int state; void* is_local; void* feat_num; } ;
typedef TYPE_1__ dccp_feat_val ;


 int VAR_0 ;
 int VAR_1 ;
 struct dccp_feat_entry* FUNC_0 (struct list_head*,void*,void*) ;

__attribute__((used)) static int FUNC_1(struct list_head *VAR_2, u8 VAR_3, u8 VAR_4,
      dccp_feat_val *VAR_5)
{
 struct dccp_feat_entry *VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);

 if (VAR_6 == ((void*)0))
  return VAR_0;

 VAR_6->feat_num = VAR_3;
 VAR_6->is_local = VAR_4;
 VAR_6->state = VAR_1;
 VAR_6->needs_confirm = 1;
 VAR_6->empty_confirm = (VAR_5 == ((void*)0));
 VAR_6->val.nn = 0;
 if (!VAR_6->empty_confirm)
  VAR_6->val = *VAR_5;
 VAR_6->needs_mandatory = 0;

 return 0;
}
