
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
typedef int u16 ;
struct vmci_transport_waiting_info {int dummy; } ;
struct vmci_handle {int dummy; } ;
struct TYPE_4__ {void* size; int wait; void* mode; struct vmci_handle handle; } ;
struct TYPE_3__ {int payload_size; void* dst; void* src; } ;
struct vmci_transport_packet {int type; int proto; TYPE_2__ u; int _reserved2; int dst_port; int src_port; int version; TYPE_1__ dg; } ;
struct sockaddr_vm {int svm_port; int svm_cid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct vmci_transport_waiting_info*,int) ;
 int FUNC_1 (int *,int ,int) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4(struct vmci_transport_packet *VAR_3,
      struct sockaddr_vm *VAR_4,
      struct sockaddr_vm *VAR_5,
      u8 VAR_6,
      u64 VAR_7,
      u64 VAR_8,
      struct vmci_transport_waiting_info *VAR_9,
      u16 VAR_10,
      struct vmci_handle VAR_11)
{



 VAR_3->dg.src = FUNC_2(VAR_0,
           VAR_1);
 VAR_3->dg.dst = FUNC_2(VAR_5->svm_cid,
           FUNC_3(VAR_5->svm_cid));
 VAR_3->dg.payload_size = sizeof(*VAR_3) - sizeof(VAR_3->dg);
 VAR_3->version = VAR_2;
 VAR_3->type = VAR_6;
 VAR_3->src_port = VAR_4->svm_port;
 VAR_3->dst_port = VAR_5->svm_port;
 FUNC_1(&VAR_3->proto, 0, sizeof(VAR_3->proto));
 FUNC_1(&VAR_3->_reserved2, 0, sizeof(VAR_3->_reserved2));

 switch (VAR_3->type) {
 case 139:
  VAR_3->u.size = 0;
  break;

 case 134:
 case 138:
  VAR_3->u.size = VAR_7;
  break;

 case 136:
 case 140:
  VAR_3->u.handle = VAR_11;
  break;

 case 128:
 case 135:
 case 132:
  VAR_3->u.size = 0;
  break;

 case 131:
  VAR_3->u.mode = VAR_8;
  break;

 case 130:
 case 129:
  FUNC_0(&VAR_3->u.wait, VAR_9, sizeof(VAR_3->u.wait));
  break;

 case 133:
 case 137:
  VAR_3->u.size = VAR_7;
  VAR_3->proto = VAR_10;
  break;
 }
}
