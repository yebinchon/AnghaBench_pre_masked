
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nfc_llcp_sock {int ssap; } ;
struct nfc_llcp_local {unsigned long local_wks; unsigned long local_sdp; unsigned long local_sap; int sdp_lock; int * local_sdp_cnt; } ;
typedef int atomic_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct nfc_llcp_sock* FUNC_5 (struct nfc_llcp_local*,scalar_t__,int ) ;
 int FUNC_6 (struct nfc_llcp_sock*) ;
 int FUNC_7 (char*,scalar_t__) ;

void FUNC_8(struct nfc_llcp_local *VAR_5, u8 VAR_6)
{
 u8 VAR_7;
 unsigned long *VAR_8;

 if (VAR_6 < VAR_4) {
  VAR_7 = VAR_6;
  VAR_8 = &VAR_5->local_wks;
 } else if (VAR_6 < VAR_0) {
  atomic_t *VAR_9;

  VAR_7 = VAR_6 - VAR_4;
  VAR_8 = &VAR_5->local_sdp;
  VAR_9 = &VAR_5->local_sdp_cnt[VAR_7];

  FUNC_7("%d clients\n", FUNC_1(VAR_9));

  FUNC_3(&VAR_5->sdp_lock);

  if (FUNC_0(VAR_9)) {
   struct nfc_llcp_sock *VAR_10;

   FUNC_7("No more clients for SAP %d\n", VAR_6);

   FUNC_2(VAR_7, VAR_8);


   VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_2);
   if (VAR_10) {
    VAR_10->ssap = VAR_3;
    FUNC_6(VAR_10);
   }
  }

  FUNC_4(&VAR_5->sdp_lock);

  return;
 } else if (VAR_6 < VAR_1) {
  VAR_7 = VAR_6 - VAR_0;
  VAR_8 = &VAR_5->local_sap;
 } else {
  return;
 }

 FUNC_3(&VAR_5->sdp_lock);

 FUNC_2(VAR_7, VAR_8);

 FUNC_4(&VAR_5->sdp_lock);
}
