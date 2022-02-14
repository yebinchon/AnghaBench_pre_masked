
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxrpc_call {int completion; int rx_pkt_len; int rx_pkt_offset; int rx_hard_ack; int state; int error; int abort_code; } ;
struct msghdr {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct msghdr*,int ,int ,int,int *) ;
 int FUNC_3 (struct rxrpc_call*) ;
 int VAR_5 ;
 int FUNC_4 (struct rxrpc_call*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct rxrpc_call *VAR_6, struct msghdr *VAR_7)
{
 u32 VAR_8 = 0;
 int VAR_9;

 switch (VAR_6->completion) {
 case 128:
  VAR_9 = 0;
  if (FUNC_3(VAR_6))
   VAR_9 = FUNC_2(VAR_7, VAR_4, VAR_1, 0, &VAR_8);
  break;
 case 129:
  VAR_8 = VAR_6->abort_code;
  VAR_9 = FUNC_2(VAR_7, VAR_4, VAR_0, 4, &VAR_8);
  break;
 case 132:
  VAR_8 = VAR_6->abort_code;
  VAR_9 = FUNC_2(VAR_7, VAR_4, VAR_0, 4, &VAR_8);
  break;
 case 130:
  VAR_8 = -VAR_6->error;
  VAR_9 = FUNC_2(VAR_7, VAR_4, VAR_3, 4, &VAR_8);
  break;
 case 131:
  VAR_8 = -VAR_6->error;
  VAR_9 = FUNC_2(VAR_7, VAR_4, VAR_2, 4, &VAR_8);
  break;
 default:
  FUNC_1("Invalid terminal call state %u\n", VAR_6->state);
  FUNC_0();
  break;
 }

 FUNC_4(VAR_6, VAR_5, VAR_6->rx_hard_ack,
       VAR_6->rx_pkt_offset, VAR_6->rx_pkt_len, VAR_9);
 return VAR_9;
}
