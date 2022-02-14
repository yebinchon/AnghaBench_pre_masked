
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int * user; } ;
struct ubuf_info {int len; size_t bytelen; int zerocopy; int refcnt; scalar_t__ id; int callback; TYPE_1__ mmp; } ;
struct sock {int sk_zckey; } ;
struct sk_buff {scalar_t__ cb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,size_t) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct sock*) ;
 struct sk_buff* FUNC_8 (struct sock*,int ,int ) ;
 int VAR_1 ;

struct ubuf_info *FUNC_9(struct sock *VAR_2, size_t VAR_3)
{
 struct ubuf_info *VAR_4;
 struct sk_buff *VAR_5;

 FUNC_1(!FUNC_3());

 VAR_5 = FUNC_8(VAR_2, 0, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(sizeof(*VAR_4) > sizeof(VAR_5->cb));
 VAR_4 = (void *)VAR_5->cb;
 VAR_4->mmp.user = ((void*)0);

 if (FUNC_5(&VAR_4->mmp, VAR_3)) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 VAR_4->callback = VAR_1;
 VAR_4->id = ((u32)FUNC_2(&VAR_2->sk_zckey)) - 1;
 VAR_4->len = 1;
 VAR_4->bytelen = VAR_3;
 VAR_4->zerocopy = 1;
 FUNC_6(&VAR_4->refcnt, 1);
 FUNC_7(VAR_2);

 return VAR_4;
}
