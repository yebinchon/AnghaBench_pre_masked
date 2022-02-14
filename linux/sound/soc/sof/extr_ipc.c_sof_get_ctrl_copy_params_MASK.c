
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sof_ipc_ctrl_data_params {scalar_t__ pl_size; int msg_bytes; int num_msg; scalar_t__ hdr_bytes; int * dst; int * src; } ;
struct sof_ipc_ctrl_data {TYPE_1__* data; scalar_t__ compv; scalar_t__ chanv; } ;
typedef enum sof_ipc_ctrl_type { ____Placeholder_sof_ipc_ctrl_type } sof_ipc_ctrl_type ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;






 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(enum sof_ipc_ctrl_type VAR_2,
        struct sof_ipc_ctrl_data *VAR_3,
        struct sof_ipc_ctrl_data *VAR_4,
        struct sof_ipc_ctrl_data_params *VAR_5)
{
 switch (VAR_2) {
 case 131:
 case 130:
  VAR_5->src = (u8 *)VAR_3->chanv;
  VAR_5->dst = (u8 *)VAR_4->chanv;
  break;
 case 129:
 case 128:
  VAR_5->src = (u8 *)VAR_3->compv;
  VAR_5->dst = (u8 *)VAR_4->compv;
  break;
 case 133:
 case 132:
  VAR_5->src = (u8 *)VAR_3->data->data;
  VAR_5->dst = (u8 *)VAR_4->data->data;
  break;
 default:
  return -VAR_0;
 }


 VAR_5->pl_size = VAR_1 - VAR_5->hdr_bytes;
 VAR_5->num_msg = FUNC_0(VAR_5->msg_bytes, VAR_5->pl_size);

 return 0;
}
