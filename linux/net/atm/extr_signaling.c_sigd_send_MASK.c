
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sock {int (* sk_state_change ) (struct sock*) ;int sk_err_soft; int sk_receive_queue; int sk_ack_backlog; int sk_err; int sk_wmem_alloc; } ;
struct sk_buff {int truesize; scalar_t__ data; } ;
struct TYPE_11__ {int vci; int vpi; int itf; } ;
struct TYPE_12__ {TYPE_5__ sap_addr; } ;
struct TYPE_9__ {int pub; int prv; } ;
struct TYPE_10__ {TYPE_3__ sas_addr; } ;
struct atmsvc_msg {int type; int reply; int listen_vcc; int qos; TYPE_6__ pvc; TYPE_4__ local; int vcc; } ;
struct TYPE_7__ {int * pub; int * prv; } ;
struct TYPE_8__ {TYPE_1__ sas_addr; int sas_family; } ;
struct atm_vcc {int flags; int qos; int vci; int vpi; int itf; struct atm_vcc* session; TYPE_2__ local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;







 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct atm_vcc*,struct atmsvc_msg*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,int ,struct atm_vcc*,int *,int *) ;
 int FUNC_12 (struct sock*) ;
 struct sock* FUNC_13 (struct atm_vcc*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (int *,struct sk_buff*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct atm_vcc*,int ) ;

__attribute__((used)) static int FUNC_19(struct atm_vcc *VAR_9, struct sk_buff *VAR_10)
{
 struct atmsvc_msg *VAR_11;
 struct atm_vcc *VAR_12;
 struct sock *VAR_13;

 VAR_11 = (struct atmsvc_msg *) VAR_10->data;
 FUNC_0(FUNC_8(VAR_10->truesize, &FUNC_13(VAR_9)->sk_wmem_alloc));
 VAR_9 = *(struct atm_vcc **) &VAR_11->vcc;
 FUNC_7("%d (0x%lx)\n", (int)VAR_11->type, (unsigned long)VAR_9);
 VAR_13 = FUNC_13(VAR_9);

 switch (VAR_11->type) {
 case 128:
  VAR_13->sk_err = -VAR_11->reply;
  FUNC_1(VAR_6, &VAR_9->flags);
  if (!*VAR_9->local.sas_addr.prv && !*VAR_9->local.sas_addr.pub) {
   VAR_9->local.sas_family = VAR_0;
   FUNC_4(VAR_9->local.sas_addr.prv,
          VAR_11->local.sas_addr.prv, VAR_2);
   FUNC_4(VAR_9->local.sas_addr.pub,
          VAR_11->local.sas_addr.pub, VAR_1 + 1);
  }
  VAR_12 = VAR_9->session ? VAR_9->session : VAR_9;
  if (VAR_12->vpi || VAR_12->vci)
   break;
  VAR_12->itf = VAR_11->pvc.sap_addr.itf;
  VAR_12->vpi = VAR_11->pvc.sap_addr.vpi;
  VAR_12->vci = VAR_11->pvc.sap_addr.vci;
  if (VAR_12->vpi || VAR_12->vci)
   VAR_12->qos = VAR_11->qos;
  break;
 case 131:
  FUNC_1(VAR_4, &VAR_9->flags);
  FUNC_1(VAR_3, &VAR_9->flags);
  VAR_13->sk_err = -VAR_11->reply;
  FUNC_1(VAR_6, &VAR_9->flags);
  break;
 case 130:
  VAR_9 = *(struct atm_vcc **)&VAR_11->listen_vcc;
  VAR_13 = FUNC_13(VAR_9);
  FUNC_7("as_indicate!!!\n");
  FUNC_3(VAR_13);
  if (FUNC_12(VAR_13)) {
   FUNC_11(((void*)0), VAR_8, VAR_9, ((void*)0), ((void*)0));
   FUNC_2(VAR_10);
   goto as_indicate_complete;
  }
  VAR_13->sk_ack_backlog++;
  FUNC_15(&VAR_13->sk_receive_queue, VAR_10);
  FUNC_7("waking sk_sleep(sk) 0x%p\n", FUNC_14(VAR_13));
  VAR_13->sk_state_change(VAR_13);
as_indicate_complete:
  FUNC_9(VAR_13);
  return 0;
 case 133:
  FUNC_10(VAR_5, &VAR_9->flags);
  FUNC_18(VAR_9, VAR_11->reply);
  goto out;
 case 129:
  FUNC_5(VAR_9, VAR_11);
  break;
 case 134:
 case 132:
  VAR_13->sk_err_soft = -VAR_11->reply;

  FUNC_1(VAR_6, &VAR_9->flags);
  break;
 default:
  FUNC_6("bad message type %d\n", (int)VAR_11->type);
  return -VAR_7;
 }
 VAR_13->sk_state_change(VAR_13);
out:
 FUNC_2(VAR_10);
 return 0;
}
