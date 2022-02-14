
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xmit_to_drv_t ;
struct nfc_llc_engine {TYPE_1__* ops; } ;
struct nfc_llc {TYPE_1__* ops; int * data; int rx_tailroom; int rx_headroom; } ;
struct nfc_hci_dev {int dummy; } ;
typedef int rcv_to_hci_t ;
typedef int llc_failure_t ;
struct TYPE_2__ {int * (* init ) (struct nfc_hci_dev*,int ,int ,int,int,int *,int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nfc_llc*) ;
 struct nfc_llc* FUNC_1 (int,int ) ;
 struct nfc_llc_engine* FUNC_2 (char const*) ;
 int * FUNC_3 (struct nfc_hci_dev*,int ,int ,int,int,int *,int *,int ) ;

struct nfc_llc *FUNC_4(const char *VAR_1, struct nfc_hci_dev *VAR_2,
     xmit_to_drv_t VAR_3,
     rcv_to_hci_t VAR_4, int VAR_5,
     int VAR_6, llc_failure_t VAR_7)
{
 struct nfc_llc_engine *VAR_8;
 struct nfc_llc *VAR_9;

 VAR_8 = FUNC_2(VAR_1);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_9 = FUNC_1(sizeof(struct nfc_llc), VAR_0);
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 VAR_9->data = VAR_8->ops->init(VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6,
       &VAR_9->rx_headroom, &VAR_9->rx_tailroom,
       VAR_7);
 if (VAR_9->data == ((void*)0)) {
  FUNC_0(VAR_9);
  return ((void*)0);
 }
 VAR_9->ops = VAR_8->ops;

 return VAR_9;
}
