
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sof_ipc_ctrl_data_params {size_t msg_bytes; size_t pl_size; size_t hdr_bytes; int num_msg; struct sof_ipc_ctrl_data* src; struct sof_ipc_ctrl_data* dst; } ;
struct TYPE_4__ {scalar_t__ size; int cmd; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
struct sof_ipc_ctrl_data {size_t num_elems; int msg_index; size_t elems_remaining; TYPE_2__ rhdr; int type; } ;
struct snd_sof_dev {TYPE_3__* ipc; } ;
struct TYPE_6__ {int tx_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sof_ipc_ctrl_data*) ;
 struct sof_ipc_ctrl_data* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sof_ipc_ctrl_data*,struct sof_ipc_ctrl_data*,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct sof_ipc_ctrl_data*,struct sof_ipc_ctrl_data*,struct sof_ipc_ctrl_data_params*) ;
 int FUNC_7 (TYPE_3__*,int ,struct sof_ipc_ctrl_data*,scalar_t__,struct sof_ipc_ctrl_data*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct snd_sof_dev *VAR_3,
           struct sof_ipc_ctrl_data *VAR_4,
           struct sof_ipc_ctrl_data_params *VAR_5,
           bool VAR_6)
{
 struct sof_ipc_ctrl_data *VAR_7;
 size_t VAR_8;
 size_t VAR_9 = 0;
 size_t VAR_10;
 size_t VAR_11;
 int VAR_12;
 int VAR_13;


 VAR_7 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_6)
  VAR_12 = FUNC_6(VAR_4->type, VAR_4, VAR_7,
            VAR_5);
 else
  VAR_12 = FUNC_6(VAR_4->type, VAR_7, VAR_4,
            VAR_5);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7);
  return VAR_12;
 }

 VAR_10 = VAR_5->msg_bytes;
 VAR_11 = VAR_5->pl_size;


 FUNC_2(VAR_7, VAR_4, VAR_5->hdr_bytes);


 FUNC_4(&VAR_3->ipc->tx_mutex);


 for (VAR_13 = 0; VAR_13 < VAR_5->num_msg; VAR_13++) {
  VAR_8 = FUNC_3(VAR_10, VAR_11);
  VAR_7->num_elems = VAR_8;
  VAR_7->rhdr.hdr.size = VAR_5->hdr_bytes + VAR_8;
  VAR_7->msg_index = VAR_13;
  VAR_10 -= VAR_8;
  VAR_7->elems_remaining = VAR_10;

  if (VAR_6)
   FUNC_2(VAR_5->dst, VAR_5->src + VAR_9, VAR_8);

  VAR_12 = FUNC_7(VAR_3->ipc,
        VAR_7->rhdr.hdr.cmd,
        VAR_7,
        VAR_7->rhdr.hdr.size,
        VAR_7,
        VAR_7->rhdr.hdr.size);
  if (VAR_12 < 0)
   break;

  if (!VAR_6)
   FUNC_2(VAR_5->dst + VAR_9, VAR_5->src, VAR_8);

  VAR_9 += VAR_11;
 }

 FUNC_5(&VAR_3->ipc->tx_mutex);

 FUNC_0(VAR_7);
 return VAR_12;
}
