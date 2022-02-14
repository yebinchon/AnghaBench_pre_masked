
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_rf_discover_select_param {int rf_protocol; int rf_discovery_id; } ;
struct nci_rf_discover_select_cmd {int rf_protocol; int rf_interface; int rf_discovery_id; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct nci_dev*,int ,int,struct nci_rf_discover_select_cmd*) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_4, unsigned long VAR_5)
{
 struct nci_rf_discover_select_param *VAR_6 =
  (struct nci_rf_discover_select_param *)VAR_5;
 struct nci_rf_discover_select_cmd VAR_7;

 VAR_7.rf_discovery_id = VAR_6->rf_discovery_id;
 VAR_7.rf_protocol = VAR_6->rf_protocol;

 switch (VAR_7.rf_protocol) {
 case 129:
  VAR_7.rf_interface = VAR_2;
  break;

 case 128:
  VAR_7.rf_interface = VAR_3;
  break;

 default:
  VAR_7.rf_interface = VAR_1;
  break;
 }

 FUNC_0(VAR_4, VAR_0,
       sizeof(struct nci_rf_discover_select_cmd), &VAR_7);
}
