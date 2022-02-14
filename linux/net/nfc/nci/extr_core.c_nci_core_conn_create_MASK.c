
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {scalar_t__ id; } ;
struct nci_dev {void* cur_dest_type; TYPE_1__ cur_params; } ;
struct nci_core_conn_create_cmd {TYPE_1__* params; void* number_destination_params; void* destination_type; } ;
struct dest_spec_params {int dummy; } ;
struct core_conn_create_dest_spec_params {scalar_t__ length; struct core_conn_create_dest_spec_params* value; } ;
struct core_conn_create_data {size_t length; struct nci_core_conn_create_cmd* cmd; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nci_dev*,int ,unsigned long,int ) ;
 int FUNC_1 (struct nci_core_conn_create_cmd*) ;
 struct nci_core_conn_create_cmd* FUNC_2 (size_t,int ) ;
 int FUNC_3 (TYPE_1__*,struct core_conn_create_dest_spec_params*,int) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;

int FUNC_5(struct nci_dev *VAR_5, u8 VAR_6,
    u8 VAR_7,
    size_t VAR_8,
    struct core_conn_create_dest_spec_params *VAR_9)
{
 int VAR_10;
 struct nci_core_conn_create_cmd *VAR_11;
 struct core_conn_create_data VAR_12;

 VAR_12.length = VAR_8 + sizeof(struct nci_core_conn_create_cmd);
 VAR_11 = FUNC_2(VAR_12.length, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->destination_type = VAR_6;
 VAR_11->number_destination_params = VAR_7;

 VAR_12.cmd = VAR_11;

 if (VAR_9) {
  FUNC_3(VAR_11->params, VAR_9, VAR_8);
  if (VAR_9->length > 0)
   FUNC_3(&VAR_5->cur_params,
          &VAR_9->value[VAR_0],
          sizeof(struct dest_spec_params));
  else
   VAR_5->cur_params.id = 0;
 } else {
  VAR_5->cur_params.id = 0;
 }
 VAR_5->cur_dest_type = VAR_6;

 VAR_10 = FUNC_0(VAR_5, VAR_4, (unsigned long)&VAR_12,
     FUNC_4(VAR_3));
 FUNC_1(VAR_11);
 return VAR_10;
}
