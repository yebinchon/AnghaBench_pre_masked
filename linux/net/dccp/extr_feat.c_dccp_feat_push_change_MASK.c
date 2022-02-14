
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct list_head {int dummy; } ;
struct dccp_feat_entry {int needs_confirm; int empty_confirm; void* needs_mandatory; int val; int state; void* is_local; void* feat_num; } ;
typedef int dccp_feat_val ;


 int VAR_0 ;
 int VAR_1 ;
 struct dccp_feat_entry* FUNC_0 (struct list_head*,void*,void*) ;

__attribute__((used)) static int FUNC_1(struct list_head *VAR_2, u8 VAR_3, u8 VAR_4,
     u8 VAR_5, dccp_feat_val *VAR_6)
{
 struct dccp_feat_entry *VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->feat_num = VAR_3;
 VAR_7->is_local = VAR_4;
 VAR_7->state = VAR_1;
 VAR_7->needs_confirm = 0;
 VAR_7->empty_confirm = 0;
 VAR_7->val = *VAR_6;
 VAR_7->needs_mandatory = VAR_5;

 return 0;
}
