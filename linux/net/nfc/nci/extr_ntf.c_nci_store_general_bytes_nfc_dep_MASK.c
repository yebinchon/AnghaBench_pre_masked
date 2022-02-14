
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ atr_req; scalar_t__ atr_req_len; } ;
struct TYPE_4__ {scalar_t__ atr_res; scalar_t__ atr_res_len; } ;
struct TYPE_6__ {TYPE_2__ listen_nfc_dep; TYPE_1__ poll_nfc_dep; } ;
struct nci_rf_intf_activated_ntf {scalar_t__ activation_params_len; int activation_rf_tech_and_mode; TYPE_3__ activation_params; } ;
struct nci_dev {void* remote_gb_len; int remote_gb; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__,void*) ;
 void* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct nci_dev *VAR_7,
  struct nci_rf_intf_activated_ntf *VAR_8)
{
 VAR_7->remote_gb_len = 0;

 if (VAR_8->activation_params_len <= 0)
  return VAR_0;

 switch (VAR_8->activation_rf_tech_and_mode) {
 case 130:
 case 128:
  VAR_7->remote_gb_len = FUNC_1(VAR_6,
   (VAR_8->activation_params.poll_nfc_dep.atr_res_len
      - VAR_5),
   VAR_4);
  FUNC_0(VAR_7->remote_gb,
         (VAR_8->activation_params.poll_nfc_dep.atr_res
      + VAR_5),
         VAR_7->remote_gb_len);
  break;

 case 131:
 case 129:
  VAR_7->remote_gb_len = FUNC_1(VAR_6,
   (VAR_8->activation_params.listen_nfc_dep.atr_req_len
      - VAR_3),
   VAR_2);
  FUNC_0(VAR_7->remote_gb,
         (VAR_8->activation_params.listen_nfc_dep.atr_req
      + VAR_3),
         VAR_7->remote_gb_len);
  break;

 default:
  FUNC_2("unsupported activation_rf_tech_and_mode 0x%x\n",
         VAR_8->activation_rf_tech_and_mode);
  return VAR_1;
 }

 return VAR_0;
}
