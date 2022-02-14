
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct sock {int dummy; } ;
struct mgmt_pending_cmd {int list; struct sock* sk; void* param_len; int param; int index; void* opcode; } ;
struct hci_dev {int mgmt_pending; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct mgmt_pending_cmd*) ;
 int FUNC_1 (void*,void*,int ) ;
 struct mgmt_pending_cmd* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sock*) ;

struct mgmt_pending_cmd *FUNC_5(struct sock *VAR_1, u16 VAR_2,
       struct hci_dev *VAR_3,
       void *VAR_4, u16 VAR_5)
{
 struct mgmt_pending_cmd *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->opcode = VAR_2;
 VAR_6->index = VAR_3->id;

 VAR_6->param = FUNC_1(VAR_4, VAR_5, VAR_0);
 if (!VAR_6->param) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 VAR_6->param_len = VAR_5;

 VAR_6->sk = VAR_1;
 FUNC_4(VAR_1);

 FUNC_3(&VAR_6->list, &VAR_3->mgmt_pending);

 return VAR_6;
}
