
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int tstamp; } ;
struct mgmt_hdr {void* index; void* len; void* opcode; } ;
struct mgmt_ev_cmd_status {void* opcode; int status; } ;


 int FUNC_0 (char*,struct sock*,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 void* FUNC_3 (int) ;
 struct sk_buff* FUNC_4 (void*,int ,int,int,struct mgmt_ev_cmd_status*) ;
 int FUNC_5 (int ,struct sk_buff*,int ,int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sk_buff*) ;
 void* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;

int FUNC_10(struct sock *VAR_5, u16 VAR_6, u16 VAR_7, u8 VAR_8)
{
 struct sk_buff *VAR_9, *VAR_10;
 struct mgmt_hdr *VAR_11;
 struct mgmt_ev_cmd_status *VAR_12;
 int VAR_13;

 FUNC_0("sock %p, index %u, cmd %u, status %u", VAR_5, VAR_6, VAR_7, VAR_8);

 VAR_9 = FUNC_2(sizeof(*VAR_11) + sizeof(*VAR_12), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_8(VAR_9, sizeof(*VAR_11));

 VAR_11->opcode = FUNC_3(VAR_4);
 VAR_11->index = FUNC_3(VAR_6);
 VAR_11->len = FUNC_3(sizeof(*VAR_12));

 VAR_12 = FUNC_8(VAR_9, sizeof(*VAR_12));
 VAR_12->status = VAR_8;
 VAR_12->opcode = FUNC_3(VAR_7);

 VAR_10 = FUNC_4(VAR_11->index, FUNC_6(VAR_5),
      VAR_4, sizeof(*VAR_12), VAR_12);
 if (VAR_10)
  VAR_9->tstamp = VAR_10->tstamp;
 else
  FUNC_1(VAR_9);

 VAR_13 = FUNC_9(VAR_5, VAR_9);
 if (VAR_13 < 0)
  FUNC_7(VAR_9);

 if (VAR_10) {
  FUNC_5(VAR_2, VAR_10,
        VAR_3, ((void*)0));
  FUNC_7(VAR_10);
 }

 return VAR_13;
}
