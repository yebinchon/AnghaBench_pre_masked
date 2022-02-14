
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long u32 ;
struct sock {int sk_state; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {long dccpor_timestamp_echo; } ;
struct dccp_sock {int dccps_osr; int dccps_syn_rtt; TYPE_1__ dccps_options_received; } ;
struct dccp_hdr {int dccph_type; } ;
struct TYPE_4__ {int dccpd_seq; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_1 (struct sock*,struct sk_buff*,struct dccp_hdr const*,unsigned int const) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct sock*,int ) ;
 struct dccp_sock* FUNC_4 (struct sock*) ;
 long FUNC_5 () ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (long) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_4,
         struct sk_buff *VAR_5,
         const struct dccp_hdr *VAR_6,
         const unsigned int VAR_7)
{
 struct dccp_sock *VAR_8 = FUNC_4(VAR_4);
 u32 VAR_9 = VAR_8->dccps_options_received.dccpor_timestamp_echo;
 int VAR_10 = 0;

 switch (VAR_6->dccph_type) {
 case 128:
  FUNC_6(VAR_4, VAR_3);
  break;
 case 130:
  if (VAR_4->sk_state == VAR_2)
   break;

 case 129:
 case 131:
  if (VAR_4->sk_state == VAR_1)
   FUNC_6(VAR_4, VAR_3);


  if (FUNC_7(VAR_9)) {
   long VAR_11 = FUNC_5() - VAR_9;

   VAR_8->dccps_syn_rtt = FUNC_2(VAR_4, 10 * VAR_11);
  }

  VAR_8->dccps_osr = FUNC_0(VAR_5)->dccpd_seq;
  FUNC_3(VAR_4, VAR_0);

  if (VAR_6->dccph_type == 129 ||
      VAR_6->dccph_type == 130) {
   FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
   VAR_10 = 1;

  }
  break;
 }

 return VAR_10;
}
