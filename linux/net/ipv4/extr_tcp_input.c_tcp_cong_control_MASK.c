
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct rate_sample {int dummy; } ;
struct inet_connection_sock {TYPE_1__* icsk_ca_ops; } ;
struct TYPE_2__ {int (* cong_control ) (struct sock*,struct rate_sample const*) ;} ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct rate_sample const*) ;
 int FUNC_2 (struct sock*,int ,int ) ;
 int FUNC_3 (struct sock*,int ,int) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,int) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0, u32 VAR_1, u32 VAR_2,
        int VAR_3, const struct rate_sample *VAR_4)
{
 const struct inet_connection_sock *VAR_5 = FUNC_0(VAR_0);

 if (VAR_5->icsk_ca_ops->cong_control) {
  VAR_5->icsk_ca_ops->cong_control(VAR_0, VAR_4);
  return;
 }

 if (FUNC_4(VAR_0)) {

  FUNC_3(VAR_0, VAR_2, VAR_3);
 } else if (FUNC_5(VAR_0, VAR_3)) {

  FUNC_2(VAR_0, VAR_1, VAR_2);
 }
 FUNC_6(VAR_0);
}
