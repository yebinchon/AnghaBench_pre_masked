
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int sk_state; } ;
struct list_head {int dummy; } ;
struct dccp_sock {struct list_head dccps_featneg; } ;
struct dccp_request_sock {struct list_head dreq_featneg; } ;
 int FUNC_0 (struct list_head*,int ,int ,int ,int *,int ,int) ;
 int FUNC_1 (struct list_head*,int ,int ,int ,int *,int ,int) ;
 int FUNC_2 (struct sock*,int ,int ,int ,int *,int ) ;
 struct dccp_sock* FUNC_3 (struct sock*) ;

int FUNC_4(struct sock *VAR_0, struct dccp_request_sock *VAR_1,
       u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 *VAR_5, u8 VAR_6)
{
 struct dccp_sock *VAR_7 = FUNC_3(VAR_0);
 struct list_head *VAR_8 = VAR_1 ? &VAR_1->dreq_featneg : &VAR_7->dccps_featneg;
 bool VAR_9 = 0;

 switch (VAR_0->sk_state) {



 case 131:
  VAR_9 = 1;
 case 128:
  switch (VAR_3) {
  case 135:
  case 134:
   return FUNC_0(VAR_8, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6, VAR_9);
  case 132:
  case 133:
   return FUNC_1(VAR_8, VAR_2, VAR_3, VAR_4,
            VAR_5, VAR_6, VAR_9);
  }
  break;



 case 130:
 case 129:
  return FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4,
             VAR_5, VAR_6);
 }
 return 0;
}
