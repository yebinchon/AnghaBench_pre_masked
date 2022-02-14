
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sst_ipc_message {scalar_t__ size; int data; int header; } ;
struct TYPE_7__ {int (* tx_data_copy ) (struct ipc_message*,int ,scalar_t__) ;} ;
struct sst_generic_ipc {TYPE_4__* dsp; int kwork; int tx_list; TYPE_3__ ops; } ;
struct TYPE_6__ {scalar_t__ size; scalar_t__ header; } ;
struct TYPE_5__ {scalar_t__ size; int header; } ;
struct ipc_message {int wait; int pending; int complete; int list; scalar_t__ errno; TYPE_2__ rx; TYPE_1__ tx; } ;
struct TYPE_8__ {int spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct ipc_message* FUNC_1 (struct sst_generic_ipc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ipc_message*,int ,scalar_t__) ;
 int FUNC_6 (struct sst_generic_ipc*,struct ipc_message*,struct sst_ipc_message*) ;

__attribute__((used)) static int FUNC_7(struct sst_generic_ipc *VAR_1,
 struct sst_ipc_message VAR_2,
 struct sst_ipc_message *VAR_3, int VAR_4)
{
 struct ipc_message *VAR_5;
 unsigned long VAR_6;

 FUNC_3(&VAR_1->dsp->spinlock, VAR_6);

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_4(&VAR_1->dsp->spinlock, VAR_6);
  return -VAR_0;
 }

 VAR_5->tx.header = VAR_2.header;
 VAR_5->tx.size = VAR_2.size;
 VAR_5->rx.header = 0;
 VAR_5->rx.size = VAR_3 ? VAR_3->size : 0;
 VAR_5->wait = VAR_4;
 VAR_5->errno = 0;
 VAR_5->pending = 0;
 VAR_5->complete = 0;

 if ((VAR_2.size) && (VAR_1->ops.tx_data_copy != ((void*)0)))
  VAR_1->ops.tx_data_copy(VAR_5, VAR_2.data, VAR_2.size);

 FUNC_0(&VAR_5->list, &VAR_1->tx_list);
 FUNC_2(&VAR_1->kwork);
 FUNC_4(&VAR_1->dsp->spinlock, VAR_6);

 if (VAR_4)
  return FUNC_6(VAR_1, VAR_5, VAR_3);
 else
  return 0;
}
