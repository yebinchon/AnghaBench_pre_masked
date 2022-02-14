
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_receive_queue; } ;
struct TYPE_2__ {int dev; int target_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (char*,struct sock*) ;
 int FUNC_4 (char*,struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_3)
{
 FUNC_3("sk=%p\n", VAR_3);

 if (VAR_3->sk_state == VAR_2) {
  FUNC_0(FUNC_2(VAR_3)->dev,
          FUNC_2(VAR_3)->target_idx,
          VAR_0);
  FUNC_1(FUNC_2(VAR_3)->dev);
 }

 FUNC_5(&VAR_3->sk_receive_queue);

 if (!FUNC_6(VAR_3, VAR_1)) {
  FUNC_4("Freeing alive NFC raw socket %p\n", VAR_3);
  return;
 }
}
