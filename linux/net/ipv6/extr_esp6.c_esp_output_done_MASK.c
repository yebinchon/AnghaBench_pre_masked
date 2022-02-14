
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_state {int dummy; } ;
struct xfrm_offload {int flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct sec_path {int len; struct xfrm_state** xvec; } ;
struct crypto_async_request {struct sk_buff* data; } ;
struct TYPE_4__ {void* tmp; } ;
struct TYPE_3__ {struct xfrm_state* xfrm; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct xfrm_state*,void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 struct sec_path* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 struct xfrm_offload* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_14(struct crypto_async_request *VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4 = VAR_2->data;
 struct xfrm_offload *VAR_5 = FUNC_11(VAR_4);
 void *VAR_6;
 struct xfrm_state *VAR_7;

 if (VAR_5 && (VAR_5->flags & VAR_1)) {
  struct sec_path *VAR_8 = FUNC_9(VAR_4);

  VAR_7 = VAR_8->xvec[VAR_8->len - 1];
 } else {
  VAR_7 = FUNC_6(VAR_4)->xfrm;
 }

 VAR_6 = FUNC_0(VAR_4)->tmp;
 FUNC_2(VAR_7, VAR_6);
 FUNC_3(VAR_6);

 if (VAR_5 && (VAR_5->flags & VAR_1)) {
  if (VAR_3) {
   FUNC_1(FUNC_13(VAR_7), VAR_0);
   FUNC_4(VAR_4);
   return;
  }

  FUNC_8(VAR_4, VAR_4->data - FUNC_7(VAR_4));
  FUNC_5(VAR_4);
  FUNC_10(VAR_4);
 } else {
  FUNC_12(VAR_4, VAR_3);
 }
}
