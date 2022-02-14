
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int tstamp; } ;
struct mgmt_hdr {void* index; void* len; void* opcode; } ;
struct mgmt_ev_cmd_complete {int data; int status; void* opcode; } ;


 int FUNC_0 (char*,struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 void* FUNC_3 (int) ;
 struct sk_buff* FUNC_4 (void*,int ,int,int,struct mgmt_ev_cmd_complete*) ;
 int FUNC_5 (int ,struct sk_buff*,int ,int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,void*,size_t) ;
 void* FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;

int FUNC_11(struct sock *VAR_5, u16 VAR_6, u16 VAR_7, u8 VAR_8,
        void *VAR_9, size_t VAR_10)
{
 struct sk_buff *VAR_11, *VAR_12;
 struct mgmt_hdr *VAR_13;
 struct mgmt_ev_cmd_complete *VAR_14;
 int VAR_15;

 FUNC_0("sock %p", VAR_5);

 VAR_11 = FUNC_2(sizeof(*VAR_13) + sizeof(*VAR_14) + VAR_10, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_9(VAR_11, sizeof(*VAR_13));

 VAR_13->opcode = FUNC_3(VAR_4);
 VAR_13->index = FUNC_3(VAR_6);
 VAR_13->len = FUNC_3(sizeof(*VAR_14) + VAR_10);

 VAR_14 = FUNC_9(VAR_11, sizeof(*VAR_14) + VAR_10);
 VAR_14->opcode = FUNC_3(VAR_7);
 VAR_14->status = VAR_8;

 if (VAR_9)
  FUNC_8(VAR_14->data, VAR_9, VAR_10);

 VAR_12 = FUNC_4(VAR_13->index, FUNC_6(VAR_5),
      VAR_4,
      sizeof(*VAR_14) + VAR_10, VAR_14);
 if (VAR_12)
  VAR_11->tstamp = VAR_12->tstamp;
 else
  FUNC_1(VAR_11);

 VAR_15 = FUNC_10(VAR_5, VAR_11);
 if (VAR_15 < 0)
  FUNC_7(VAR_11);

 if (VAR_12) {
  FUNC_5(VAR_2, VAR_12,
        VAR_3, ((void*)0));
  FUNC_7(VAR_12);
 }

 return VAR_15;
}
