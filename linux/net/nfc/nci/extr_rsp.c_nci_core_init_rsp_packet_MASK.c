
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nci_dev {scalar_t__ nfcc_features; scalar_t__ num_supported_rf_interfaces; scalar_t__* supported_rf_interfaces; scalar_t__ max_logical_connections; scalar_t__ max_routing_table_size; scalar_t__ max_ctrl_pkt_payload_len; scalar_t__ max_size_for_large_params; scalar_t__ manufact_id; scalar_t__ manufact_specific_info; } ;
struct nci_core_init_rsp_2 {scalar_t__ max_logical_connections; scalar_t__ max_ctrl_pkt_payload_len; scalar_t__ manufact_id; int manufact_specific_info; int max_size_for_large_params; int max_routing_table_size; } ;
struct nci_core_init_rsp_1 {scalar_t__ status; scalar_t__ num_supported_rf_interfaces; int supported_rf_interfaces; int nfcc_features; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_3 (struct nci_dev*,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct nci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct nci_core_init_rsp_1 *VAR_4 = (void *) VAR_3->data;
 struct nci_core_init_rsp_2 *VAR_5;

 FUNC_4("status 0x%x\n", VAR_4->status);

 if (VAR_4->status != VAR_1)
  goto exit;

 VAR_2->nfcc_features = FUNC_1(VAR_4->nfcc_features);
 VAR_2->num_supported_rf_interfaces = VAR_4->num_supported_rf_interfaces;

 if (VAR_2->num_supported_rf_interfaces >
     VAR_0) {
  VAR_2->num_supported_rf_interfaces =
   VAR_0;
 }

 FUNC_2(VAR_2->supported_rf_interfaces,
        VAR_4->supported_rf_interfaces,
        VAR_2->num_supported_rf_interfaces);

 VAR_5 = (void *) (VAR_3->data + 6 + VAR_4->num_supported_rf_interfaces);

 VAR_2->max_logical_connections = VAR_5->max_logical_connections;
 VAR_2->max_routing_table_size =
  FUNC_0(VAR_5->max_routing_table_size);
 VAR_2->max_ctrl_pkt_payload_len =
  VAR_5->max_ctrl_pkt_payload_len;
 VAR_2->max_size_for_large_params =
  FUNC_0(VAR_5->max_size_for_large_params);
 VAR_2->manufact_id =
  VAR_5->manufact_id;
 VAR_2->manufact_specific_info =
  FUNC_1(VAR_5->manufact_specific_info);

 FUNC_4("nfcc_features 0x%x\n",
   VAR_2->nfcc_features);
 FUNC_4("num_supported_rf_interfaces %d\n",
   VAR_2->num_supported_rf_interfaces);
 FUNC_4("supported_rf_interfaces[0] 0x%x\n",
   VAR_2->supported_rf_interfaces[0]);
 FUNC_4("supported_rf_interfaces[1] 0x%x\n",
   VAR_2->supported_rf_interfaces[1]);
 FUNC_4("supported_rf_interfaces[2] 0x%x\n",
   VAR_2->supported_rf_interfaces[2]);
 FUNC_4("supported_rf_interfaces[3] 0x%x\n",
   VAR_2->supported_rf_interfaces[3]);
 FUNC_4("max_logical_connections %d\n",
   VAR_2->max_logical_connections);
 FUNC_4("max_routing_table_size %d\n",
   VAR_2->max_routing_table_size);
 FUNC_4("max_ctrl_pkt_payload_len %d\n",
   VAR_2->max_ctrl_pkt_payload_len);
 FUNC_4("max_size_for_large_params %d\n",
   VAR_2->max_size_for_large_params);
 FUNC_4("manufact_id 0x%x\n",
   VAR_2->manufact_id);
 FUNC_4("manufact_specific_info 0x%x\n",
   VAR_2->manufact_specific_info);

exit:
 FUNC_3(VAR_2, VAR_4->status);
}
