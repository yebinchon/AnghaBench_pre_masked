
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {int lock; } ;
struct nfc_llcp_local {int lto; int local_wks; int list; int sdreq_timeout_work; int sdreq_timer; int pending_sdreqs; int sdreq_lock; int remote_lto; int remote_miu; int miux; int rw; TYPE_3__ raw_sockets; TYPE_2__ connecting_sockets; TYPE_1__ sockets; int timeout_work; int rx_work; int * rx_pending; int tx_work; int tx_queue; int link_timer; int sdp_lock; int ref; struct nfc_dev* dev; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct nfc_llcp_local* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nfc_llcp_local*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ) ;

int FUNC_12(struct nfc_dev *VAR_13)
{
 struct nfc_llcp_local *VAR_14;

 VAR_14 = FUNC_5(sizeof(struct nfc_llcp_local), VAR_1);
 if (VAR_14 == ((void*)0))
  return -VAR_0;

 VAR_14->dev = VAR_13;
 FUNC_1(&VAR_14->list);
 FUNC_4(&VAR_14->ref);
 FUNC_7(&VAR_14->sdp_lock);
 FUNC_11(&VAR_14->link_timer, VAR_10, 0);

 FUNC_10(&VAR_14->tx_queue);
 FUNC_2(&VAR_14->tx_work, VAR_12);

 VAR_14->rx_pending = ((void*)0);
 FUNC_2(&VAR_14->rx_work, VAR_7);

 FUNC_2(&VAR_14->timeout_work, VAR_11);

 FUNC_9(&VAR_14->sockets.lock);
 FUNC_9(&VAR_14->connecting_sockets.lock);
 FUNC_9(&VAR_14->raw_sockets.lock);

 VAR_14->lto = 150;
 VAR_14->rw = VAR_5;
 VAR_14->miux = FUNC_3(VAR_4);
 VAR_14->local_wks = 0x1;

 FUNC_8(VAR_14);

 VAR_14->remote_miu = VAR_3;
 VAR_14->remote_lto = VAR_2;

 FUNC_7(&VAR_14->sdreq_lock);
 FUNC_0(&VAR_14->pending_sdreqs);
 FUNC_11(&VAR_14->sdreq_timer, VAR_9, 0);
 FUNC_2(&VAR_14->sdreq_timeout_work, VAR_8);

 FUNC_6(&VAR_14->list, &VAR_6);

 return 0;
}
