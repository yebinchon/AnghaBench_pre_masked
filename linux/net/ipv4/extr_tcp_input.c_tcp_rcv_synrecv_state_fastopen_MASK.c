
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct request_sock {int dummy; } ;
struct TYPE_4__ {scalar_t__ icsk_retransmits; } ;
struct TYPE_3__ {int fastopen_rsk; scalar_t__ retrans_stamp; } ;


 TYPE_2__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct request_sock* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sock*,struct request_sock*,int) ;
 int FUNC_4 (struct sock*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0)
{
 struct request_sock *VAR_1;

 FUNC_6(VAR_0, 0);


 FUNC_5(VAR_0)->retrans_stamp = 0;
 FUNC_0(VAR_0)->icsk_retransmits = 0;




 VAR_1 = FUNC_2(FUNC_5(VAR_0)->fastopen_rsk,
     FUNC_1(VAR_0));
 FUNC_3(VAR_0, VAR_1, 0);
 FUNC_4(VAR_0);
}
