
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rf_tech_specific_params_nfcv_poll {int uid; int dsfid; } ;
struct nci_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static __u8 *FUNC_1(struct nci_dev *VAR_1,
   struct rf_tech_specific_params_nfcv_poll *VAR_2,
           __u8 *VAR_3)
{
 ++VAR_3;
 VAR_2->dsfid = *VAR_3++;
 FUNC_0(VAR_2->uid, VAR_3, VAR_0);
 VAR_3 += VAR_0;
 return VAR_3;
}
