
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_role; int dccps_server_timewait; } ;
typedef int gfp_t ;
struct TYPE_4__ {int dccpd_type; } ;
struct TYPE_3__ {int max_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_1 (int ,int const) ;
 struct dccp_sock* FUNC_2 (struct sock*) ;
 struct sk_buff* FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;

void FUNC_7(struct sock *VAR_8, const int VAR_9)
{
 struct dccp_sock *VAR_10 = FUNC_2(VAR_8);
 struct sk_buff *VAR_11;
 const gfp_t VAR_12 = VAR_9 ? VAR_6 : VAR_5;

 VAR_11 = FUNC_1(VAR_8->sk_prot->max_header, VAR_12);
 if (VAR_11 == ((void*)0))
  return;


 FUNC_6(VAR_11, VAR_8->sk_prot->max_header);
 if (VAR_10->dccps_role == VAR_2 && !VAR_10->dccps_server_timewait)
  FUNC_0(VAR_11)->dccpd_type = VAR_1;
 else
  FUNC_0(VAR_11)->dccpd_type = VAR_0;

 if (VAR_9) {
  VAR_11 = FUNC_3(VAR_8, VAR_11);
  FUNC_5(VAR_8, VAR_7,
       VAR_4, VAR_3);
 }
 FUNC_4(VAR_8, VAR_11);
}
