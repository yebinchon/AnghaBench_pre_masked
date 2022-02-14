
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nfc_llcp_local {int sdp_lock; int local_sap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *) ;

u8 FUNC_4(struct nfc_llcp_local *VAR_3)
{
 u8 VAR_4;

 FUNC_1(&VAR_3->sdp_lock);

 VAR_4 = FUNC_0(&VAR_3->local_sap, VAR_0);
 if (VAR_4 == VAR_0) {
  FUNC_2(&VAR_3->sdp_lock);
  return VAR_2;
 }

 FUNC_3(VAR_4, &VAR_3->local_sap);

 FUNC_2(&VAR_3->sdp_lock);

 return VAR_4 + VAR_1;
}
