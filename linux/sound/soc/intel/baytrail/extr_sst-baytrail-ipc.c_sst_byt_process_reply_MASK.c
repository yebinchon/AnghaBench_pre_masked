
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sst_byt {int ipc; int dsp; } ;
struct TYPE_2__ {int header; int size; int data; } ;
struct ipc_message {int list; TYPE_1__ rx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sst_byt*,struct ipc_message*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct ipc_message* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct ipc_message*) ;

__attribute__((used)) static int FUNC_7(struct sst_byt *VAR_0, u64 VAR_1)
{
 struct ipc_message *VAR_2;

 VAR_2 = FUNC_5(&VAR_0->ipc, VAR_1);
 if (VAR_2 == ((void*)0))
  return 1;

 VAR_2->rx.header = VAR_1;
 if (VAR_1 & FUNC_0(1)) {
  VAR_2->rx.size = FUNC_2(VAR_1);
  FUNC_4(VAR_0->dsp, VAR_2->rx.data, VAR_2->rx.size);
 }


 FUNC_3(VAR_0, VAR_2);

 FUNC_1(&VAR_2->list);

 FUNC_6(&VAR_0->ipc, VAR_2);

 return 1;
}
