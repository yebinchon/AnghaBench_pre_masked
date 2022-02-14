
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct list_head {int dummy; } ;
struct dccp_request_sock {struct list_head dreq_featneg; } ;
struct TYPE_3__ {int* vec; } ;
struct TYPE_4__ {TYPE_1__ sp; } ;
struct dccp_feat_entry {TYPE_2__ val; int empty_confirm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct dccp_feat_entry* FUNC_1 (struct list_head*,int ,int) ;
 scalar_t__ FUNC_2 (struct list_head*,int,int) ;

int FUNC_3(struct dccp_request_sock *VAR_1)
{
 struct list_head *VAR_2 = &VAR_1->dreq_featneg;
 struct dccp_feat_entry *VAR_3;
 u8 VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 <= 1; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_4);

  if (VAR_3 != ((void*)0) && !VAR_3->empty_confirm)
   VAR_5 = VAR_3->val.sp.vec[0];
  else
   VAR_5 = FUNC_0(VAR_0);

  if (FUNC_2(VAR_2, VAR_5, VAR_4))
   return -1;
 }
 return 0;
}
