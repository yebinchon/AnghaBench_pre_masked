
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_llcp_sock {scalar_t__ service_name_len; int ssap; int * service_name; } ;
struct nfc_llcp_local {int local_wks; int sdp_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct nfc_llcp_local*,int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (int,int*) ;

u8 FUNC_8(struct nfc_llcp_local *VAR_3,
    struct nfc_llcp_sock *VAR_4)
{
 FUNC_1(&VAR_3->sdp_lock);

 if (VAR_4->service_name != ((void*)0) && VAR_4->service_name_len > 0) {
  int VAR_5 = FUNC_4(VAR_4->service_name,
         VAR_4->service_name_len);

  if (VAR_5 > 0) {
   FUNC_5("WKS %d\n", VAR_5);


   if (VAR_3->local_wks & FUNC_0(VAR_5)) {
    FUNC_2(&VAR_3->sdp_lock);

    return VAR_0;
   }

   FUNC_6(VAR_5, &VAR_3->local_wks);
   FUNC_2(&VAR_3->sdp_lock);

   return VAR_5;
  }





  if (FUNC_3(VAR_3, VAR_4->service_name,
       VAR_4->service_name_len) != ((void*)0)) {
   FUNC_2(&VAR_3->sdp_lock);

   return VAR_0;
  }

  FUNC_2(&VAR_3->sdp_lock);

  return VAR_1;

 } else if (VAR_4->ssap != 0 && VAR_4->ssap < VAR_2) {
  if (!FUNC_7(VAR_4->ssap, &VAR_3->local_wks)) {
   FUNC_6(VAR_4->ssap, &VAR_3->local_wks);
   FUNC_2(&VAR_3->sdp_lock);

   return VAR_4->ssap;
  }
 }

 FUNC_2(&VAR_3->sdp_lock);

 return VAR_0;
}
