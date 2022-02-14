
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_ipc_message {scalar_t__ data; int header; } ;
struct TYPE_4__ {int (* shim_dbg ) (struct sst_generic_ipc*,char*) ;} ;
struct sst_generic_ipc {TYPE_3__* dsp; int empty_list; TYPE_1__ ops; } ;
struct TYPE_5__ {int size; int data; int header; } ;
struct ipc_message {int errno; int list; TYPE_2__ rx; int complete; int waitq; } ;
struct TYPE_6__ {int spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct sst_generic_ipc*,char*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct sst_generic_ipc *VAR_2,
 struct ipc_message *VAR_3, struct sst_ipc_message *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;


 VAR_6 = FUNC_7(VAR_3->waitq, VAR_3->complete,
  FUNC_3(VAR_1));

 FUNC_4(&VAR_2->dsp->spinlock, VAR_5);
 if (VAR_6 == 0) {
  if (VAR_2->ops.shim_dbg != ((void*)0))
   VAR_2->ops.shim_dbg(VAR_2, "message timeout");

  FUNC_1(&VAR_3->list);
  VAR_6 = -VAR_0;
 } else {


  if (VAR_4) {
   VAR_4->header = VAR_3->rx.header;
   if (VAR_4->data)
    FUNC_2(VAR_4->data, VAR_3->rx.data, VAR_3->rx.size);
  }
  VAR_6 = VAR_3->errno;
 }

 FUNC_0(&VAR_3->list, &VAR_2->empty_list);
 FUNC_5(&VAR_2->dsp->spinlock, VAR_5);
 return VAR_6;
}
