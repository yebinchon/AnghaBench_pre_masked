
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct smp_cmd_pairing {scalar_t__ io_capability; scalar_t__ auth_req; } ;
struct smp_chan {int flags; int * preq; int * prsp; struct l2cap_conn* conn; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct hci_conn {scalar_t__ out; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct smp_chan*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static u8 FUNC_2(struct smp_chan *VAR_7)
{
 struct l2cap_conn *VAR_8 = VAR_7->conn;
 struct hci_conn *VAR_9 = VAR_8->hcon;
 struct smp_cmd_pairing *VAR_10, *VAR_11;
 u8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 if (FUNC_1(VAR_6, &VAR_7->flags) ||
     FUNC_1(VAR_5, &VAR_7->flags))
  return VAR_2;






 if (VAR_9->out) {
  VAR_10 = (void *) &VAR_7->preq[1];
  VAR_11 = (void *) &VAR_7->prsp[1];
 } else {
  VAR_10 = (void *) &VAR_7->prsp[1];
  VAR_11 = (void *) &VAR_7->preq[1];
 }

 VAR_14 = VAR_10->io_capability;
 VAR_15 = VAR_11->io_capability;

 VAR_12 = (VAR_10->auth_req & VAR_3);
 VAR_13 = (VAR_11->auth_req & VAR_3);




 if (VAR_12 || VAR_13)
  VAR_16 = FUNC_0(VAR_7, VAR_14, VAR_15);
 else
  VAR_16 = VAR_1;


 if (VAR_16 == VAR_0 && FUNC_1(VAR_4, &VAR_7->flags))
  VAR_16 = VAR_1;

 return VAR_16;
}
