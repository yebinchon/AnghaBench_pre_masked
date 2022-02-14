
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct sock {scalar_t__ sk_state; } ;
struct list_head {int dummy; } ;
struct TYPE_5__ {scalar_t__ nn; } ;
struct dccp_feat_entry {TYPE_1__ val; } ;
struct TYPE_6__ {scalar_t__ nn; } ;
typedef TYPE_2__ dccp_feat_val ;
struct TYPE_7__ {struct list_head dccps_featneg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct dccp_feat_entry* FUNC_1 (struct list_head*,int ,int) ;
 int FUNC_2 (struct dccp_feat_entry*) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct list_head*,int ,int,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,unsigned long long,unsigned long long) ;
 TYPE_3__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

int FUNC_9(struct sock *VAR_4, u8 VAR_5, u64 VAR_6)
{
 struct list_head *VAR_7 = &FUNC_7(VAR_4)->dccps_featneg;
 dccp_feat_val VAR_8 = { .nn = VAR_6 };
 struct dccp_feat_entry *VAR_9;

 if (VAR_4->sk_state != VAR_0 && VAR_4->sk_state != VAR_1)
  return 0;

 if (FUNC_5(VAR_5) != VAR_3 ||
     !FUNC_0(VAR_5, VAR_6))
  return -VAR_2;

 if (VAR_6 == FUNC_3(VAR_4, VAR_5))
  return 0;

 VAR_9 = FUNC_1(VAR_7, VAR_5, 1);
 if (VAR_9 != ((void*)0)) {
  FUNC_6("Clobbering existing NN entry %llu -> %llu\n",
         (unsigned long long)VAR_9->val.nn,
         (unsigned long long)VAR_6);
  FUNC_2(VAR_9);
 }

 FUNC_8(VAR_4);
 return FUNC_4(VAR_7, VAR_5, 1, 0, &VAR_8);
}
