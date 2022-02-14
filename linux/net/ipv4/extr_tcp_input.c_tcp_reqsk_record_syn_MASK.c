
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {scalar_t__* saved_syn; } ;
struct TYPE_2__ {scalar_t__ save_syn; } ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*) ;
 scalar_t__ FUNC_4 (struct sk_buff const*) ;
 TYPE_1__* FUNC_5 (struct sock const*) ;

__attribute__((used)) static void FUNC_6(const struct sock *VAR_1,
     struct request_sock *VAR_2,
     const struct sk_buff *VAR_3)
{
 if (FUNC_5(VAR_1)->save_syn) {
  u32 VAR_4 = FUNC_3(VAR_3) + FUNC_4(VAR_3);
  u32 *VAR_5;

  VAR_5 = FUNC_0(VAR_4 + sizeof(u32), VAR_0);
  if (VAR_5) {
   VAR_5[0] = VAR_4;
   FUNC_1(&VAR_5[1], FUNC_2(VAR_3), VAR_4);
   VAR_2->saved_syn = VAR_5;
  }
 }
}
